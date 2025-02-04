#include<iostream>
#include<string>
using namespace std;

string reversed_recursion(string x) {
    if (x.size() == 0) { //stop function if the substring is empty
        return "";
    }
    return reversed_recursion(x.substr(1)) + x[0]; //return the rest of the string and the first element of it last 
}                                         //the substring gets smaller and smaller until all characters have been put to the back 


string reversed_loop(string x) {
    string new_x = ""; //define a new empty string
    for (size_t i = x.size(); i > 0; --i) {
        new_x = new_x + x[i-1]; //add the last element of the original string to the new string 
    }
    return new_x;
}


int main() {
    string x = "HELLO";
    cout << reversed_loop(x) << endl;
    cout << reversed_recursion(x) << endl;
    return 0; 
}