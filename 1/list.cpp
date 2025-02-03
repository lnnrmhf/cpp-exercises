#include "list.h"
#include<vector>
using namespace std; 

List::List(vector<int> values): values(values){ //constructor with one argument
}

vector<int>& List::get_values() { //define getter 
    return values; //returns vector of values of the list
}


istream& operator>>(istream& is, List& l){ //define input
    char c; 
    int val;
    
    is >> c; //read in character first 
    if(c != '['){ //first charcter has to be [ else the format is wrong
        throw runtime_error("Wrong format!");
    } 
    while(is >> val){ //then read in integer values 
        l.get_values().push_back(val); //append values to list of values (l is List object, l.get_values() is vector)
        is >> c; //read in character
        if(c == ','){ //if the character is , nothing happens
            continue; 
        }
        if(c == ']'){ //if the chacter is ] the input is done and nothing more should be appended to the list
            break; 
        } 
        else{ //if the character is anythign else the format is wrong
            throw runtime_error("Wrong format!");
        }

    }
    return is;
}


ostream& List::print(ostream& os) const{ //define format of output
    os << "["; //start with [
    bool first = true; 
    for(const auto& val : values){ //loop through values
        if (first){ //check if it is the first value
            os << val; //if it is the first value, it is printed as it is
            first = false; //the first value has been printed
        }
        else{ //print comma and value for all the remaining values 
            os << "," << val; 
        } 
    }
    os << "]"; //end with ]
    return os; 
}

ostream& operator<<(ostream& os, const List& l){
    return l.print(os); //print list 
}

