#ifndef LIST_H
#define LIST_H

#include<vector>
#include<iostream>
using namespace std;

class List{
    vector<int> values; //list to save values in 

    public:
    List(vector<int> values = {}); //constructor

    vector<int>& get_values(); //function to get values from list
    ostream& print(ostream& = cout) const; //print

};
ostream& operator<<(ostream&, const List&); //output
istream& operator>>(istream&, List&); //input


#endif