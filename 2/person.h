#ifndef PERSON_H
#define PERSON_H

#include<iostream>
using namespace std; 


class Person{
    int id; 
    double height; 
    double weight; 
    int age; 
    int iq; 

    public: 
    Person(int, double, double, int, int); 

    double get_height() const; 
    double get_weight() const; 
    int get_age() const; 
    int get_iq() const; 


    ostream& print(ostream& = cout) const; 

};
ostream& operator<<(ostream&, const Person&); 

#endif