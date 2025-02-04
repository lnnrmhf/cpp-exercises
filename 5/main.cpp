#include<iostream>
#include<vector>
#include<algorithm>
#include <stdexcept>
using namespace std;

int sorting(vector<double>& val, double x) {
    double index_val; 
    double min_val;
    int min_index;

    //sort values in vector 
    //first values smaller than x, then larger than x
    //for loop 1: set index
    for (size_t i = 0; i <= val.size(); i++) {
        //for loop 2: look if any value is smaller than set index
        for (size_t j = i; j < val.size(); j++) {
            if (val[j] <= val[i]) {
                min_val = val[j];
                min_index = j;
            }
            swap(val[i], val[min_index]); //swap
        }
    }
    
    //search new vector for value larger than x
    //return index from which on values are larger than x
    //no values larger than x -> runtime error 
    for (double n : val) {
        if (n > x) {
            index_val = n; //first value larger than x
            break; 
        } 
    }
    
    if (val.back() < x) {
        throw runtime_error("No value in vector greater than x!");
    }
    
    auto it = find(val.begin(), val.end(), index_val); 
    int index = distance(val.begin(), it); //find index of first larger value

    return index;
}

int main() {

    vector<double> values = {1.3, 0.5, 2.4, 3.6, 100.99, 0.1};
    double x = 10;

    int index = sorting(values, x);
    cout << "Smallest index in vector with value larger than " << x << " : " << index << endl; 

    return 0;
}