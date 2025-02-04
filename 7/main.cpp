#include<iostream>
using namespace std;

int main() {
    int m; 
    int n; 
    string m_string;
    bool more = true;
    char answer; 

    while (more) { //while loop for when more is true
        cout << "m: "; 
        cin >> m; //read in m 
        cout << "n: ";
        cin >> n; //read in n
        m_string = to_string(m); //convert m to a string
        if (n > m_string.length()-1) { //if m does not have a n-th position -> error message
            cout << "Index out of range. \n";
        }
        else {
            cout << m_string[n] << "\n"; //print the n-th element of the string
        }
        cout << "Do you want to continue? (y/n) "; //give user opportunity to repeat calculation
        cin >> answer;
        more = (answer == 'y');
        }
    return 0;
}