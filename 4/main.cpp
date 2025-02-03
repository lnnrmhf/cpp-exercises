#include<iostream>
#include<unordered_map>
using namespace std;


unordered_map<int, const char*> occurance(const char* s1, const char* s2) {
    bool matching; 
    int count = 0; 
    const char* first_match = nullptr; 
    unordered_map<int, const char*> result; 
    size_t len_s1 = 0; 
    size_t len_s2 = 0; 

    //get length of s1
    for (size_t j = 0; s1[j]!='\0'; ++j) {
        ++len_s1; 
    }
    //get length of s2
    for (size_t k = 0; s2[k]!='\0'; ++k) {
        ++len_s2; 
    }

    //start at first position of s1, increase position until it is bigger than the length of s1
    for (const char* pos = s1; pos <= s1 + len_s1; ++pos) {
        matching = true; //set found to true 
        //cout << pos; -> position goes from first character to last and is always the char from the point to the end 
        //go through s2 and check if the characters match 
        for (size_t i = 0; i < len_s2; ++i) { 
            //cout << "Position " << i << pos[i] << " " << endl; 
            if(pos[i] != s2[i]) {
                matching = false; //set found to false if they do not match
                break; //stop loop 
            }
        }
        //check if there is a match
        if (matching == true) {
            if (first_match == nullptr) { //check if there has been a match before
                first_match = pos; //if there hasnt been a match before the first match is the current position
            }
         ++count; //increase count
        }
    }

    result[count] = first_match; //save count and position of first match in result

    return result;
} 


int main() {
    unordered_map<int, const char*> result; 
    const char* s1 = "hi, Hello, world!";
    const char* s2 = "Hello";
    const char* s3 = "hello, world! Hello, Hellllllooo... Hello!";

    result = occurance(s1, s2); 

    for (auto x : result) {
    cout << "Frequency: " << x.first << endl; 
    cout << "First occurance: " << x.second << endl;
    }

    return 0;
}