#ifndef LIST_H
#define LIST_H

#include"person.h"
#include<vector>
#include<iostream>
using namespace std; 

class List{
    vector<Person> person_list; 

    public:
    List(vector<Person>); 
    bool compare(string, const Person&, const Person&);
    vector<Person> sort(string); 
    ostream& print(ostream& = cout) const; 

};
ostream& operator<<(ostream&, const List&); 

#endif
