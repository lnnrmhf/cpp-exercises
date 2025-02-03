#include"list.h"
#include<vector>
#include<iostream>

using namespace std; 

int main(){
    List list; 

    try{
    cin >> list; //read in values
    cout << "List: " << list << endl; //print values; 
    }
    catch (runtime_error& e){ //catch potential runtime errors
        cout << "Invalid input. Try [0, 1, ...]" << endl; 
    }

    return 0;
}
