#include<vector>
#include<iostream>
using namespace std;

vector<vector<int>> frequency(const char* s, int len){
    vector<vector<int>> indexes;
    vector<vector<int>> indexes_clean; 

    for(size_t i = 0; i < len; i++) { //go through char array
        vector<int> index_char;
        index_char.push_back(i); //add starting index to new vector
        for(size_t j = i + 1; j < len; j++) { 
            if(s[i]==s[j]) { //compare elements of array to current element 
                index_char.push_back(j); //add index of element if it is the same as the current element
            }
        }
        if(index_char.size() > 1) { // if the element is there more than one time the vector of the indexes of one element in added to the indexes vector 
            indexes.push_back(index_char); 
        }
        index_char.clear(); //delete elements to start again with next element in char array
    }

 for (size_t i = 0; i < indexes.size(); i++) { // go through resuting indexes vector
        bool has_overlap = false; //set overlap to false first 

        for (size_t j = 0; j < indexes_clean.size(); j++) { //will only be triggered if indexes_clean has elements in it
            for (size_t k = 0; k < indexes[i].size(); k++) {
                for (size_t l = 0; l < indexes_clean[j].size(); l++) {
                    if (indexes[i][k] == indexes_clean[j][l]) { //compare the elements of the vectors in the indexes vector
                        has_overlap = true; //bool true if they are the same
                        break; //can stop going through since one match is enough 
                    }
                }
                if (has_overlap){ 
                    break; //can stop going through since one match is enough 
                }
            }
            if (has_overlap) {
                break; //can stop going through since one match is enough 
            }
        }

        if (!has_overlap) { 
            indexes_clean.push_back(indexes[i]); //if there is no overlap the vector is added to the indexes clean vector
        }
    }
    
    return indexes_clean; 
}


int main(){

const char* s1 = "abacab"; 
int len_s1 = 6; 

//call function
vector<vector<int>> result = frequency(s1, len_s1); 


//print vector in correct format
bool first = true; 

cout << "{"; 
for(const auto& vec : result) {
    cout << "{"; 
    for(const auto& x : vec) {
        if(first){
            cout << x;
            first = false; 
        }
        else{
            cout << "," << x; 
        }
    } 
    first = true; 
    cout << "}"; 
}
    cout << "}" << endl; 


    return 0;
}