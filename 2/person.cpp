#include<string>
#include<iostream>
#include"person.h"
using namespace std; 

Person::Person(int id, double height, double weight, int age, int iq): id(id), height(height), weight(weight), age(age), iq(iq) {
}

ostream& Person::print(ostream& os) const{ //print person in format ID {height, weight, age, IQ}
    os << "ID: " << id << " {"; 
    os << height << " m, "; 
    os << weight << " kg, "; 
    os << age << " years, "; 
    os << iq << " IQ}"; 
    return os;  
}

ostream& operator<<(ostream& os, const Person& p){
    return p.print(os); 
}

double Person::get_height() const{ //get height of person
    return height; 
}

double Person::get_weight() const{ //get weight of person
    return weight; 
}

int Person::get_age() const{ //get age of person
    return age; 
}

int Person::get_iq() const{ //get IQ of person
    return iq; 
}