#include<string>
#include<vector>
#include<iostream>
#include"person.h"
#include"list.h"
using namespace std; 

int main(){
    Person p1 {1, 172.3, 59.8, 20, 102}; //define some people
    Person p2 {2, 190.1, 73.0, 45, 126}; 
    Person p3 {3, 200, 90.9, 33, 99}; 
    Person p4 {4, 150.5, 63, 70, 118}; 

    List l1 = {vector<Person>{p1, p2, p3, p4}}; //define list of people
 
    cout << "People sorted by height: " << endl; 
    cout << l1.sort("height") << endl;
    cout << "People sorted by weight: " << endl; 
    cout << l1.sort("weight") << endl;
    cout << "People sorted by age: " << endl; 
    cout << l1.sort("age") << endl;
    cout << "People sorted by IQ: " << endl; 
    cout << l1.sort("IQ") << endl;

    return 0; 
}