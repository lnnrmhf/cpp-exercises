#include<string>
#include<vector>
#include<iostream>
#include"person.h"
#include"list.h"
using namespace std;

List::List(vector<Person> person_list): person_list(person_list){}

ostream& List::print(ostream& os) const{ //print list in format [person, person, ...]
    bool first = true; 
    os << "["; 
    for(const auto& p : person_list){
        if(first){ //print first person in list 
            p.print(os); 
            first = false; 
        }
        else{ //print all other people in list with , before the person's information
            os << ", "; 
            p.print(os); 
        }
    }
    return os << "]"; 
}

ostream& operator<<(ostream& os, const List& l){
    return l.print(os); 
}


bool List::compare(string category, const Person& p1, const Person& p2){ //function to compare categories of people
    if (category == "height") return p1.get_height() > p2.get_height(); //return true if p1 is taller than p2
    if (category == "weight") return p1.get_weight() > p2.get_weight(); //return true if p1 is heavier than p2
    if (category == "age") return p1.get_age() > p2.get_age(); //return true if p1 is older than p2
    if (category == "IQ") return p1.get_iq() > p2.get_iq(); //return true if p1 has a higher IQ than p2
    return false; //return false if the above condition is not the case
}


vector<Person> List::sort(string category){
    vector<Person> unsorted = person_list; //copy person list into new unsorted vector
    vector<Person> sorted; //define sorted vector to return later
        while(!unsorted.empty()){ //do the following as long as unsorted is not empty
            size_t max_index = 0; //assume index of to maximum value to be 0
            for(size_t i = 1; i<unsorted.size(); i++){ //iterate through unsorted list
                if(compare(category, unsorted[i], unsorted[max_index])){ //check if the value of chosen category of person i is bigger than the one of the maximum index 
                    max_index = i; //update maximum index
                }
            }   
        sorted.push_back(unsorted[max_index]); //add person at maximum index to sorted list once all peeople have been checked
        unsorted.erase(unsorted.begin()+ max_index); //erase the maximum element from the unsorted list
        }   

    return sorted;  
}