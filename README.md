# cpp-exercises
Collection of small programs written in C++



1. List class in which any number of integer values can be stored. The methods operator<< and operator>> have been implemented so that lists can be output and read in formatted. (The desired format for displaying a list with the three values 1, 2 and 3 as content is [1,2,3].)

2. Various characteristics (height, weight, age and IQ) of people are measured for statistical studies. This is an implementation of the classes Person and Person List, which allow the data to be recorded. The recorded persons output is sorted according to any characteristic selected by the user.

3. Function that receives an array of character strings and its length as parameters and determines which character strings occur more frequently in the array. A vector<vector> is returned, which summarizes the indices of the same strings accordingly. Ex.: Input parameter array: {“a”,“b”,“a”,“c”,“a”,“b”} Length: 6 Return value: {{0,2,4}{1,5}} Character strings that do not occur more than once are not included in the result.

4. Function that receives two character strings (char arrays) as parameters and checks whether and how often the second character string is contained in the first. It returns the number of occurrences of the second string found in the first. Additionally, it returns a pointer in a reference parameter to the character in the first string at which the first occurrence of the second string begins. (nullptr if the second string is not contained)

5. Function that receives a vector of double values and an additional double value x as a parameter. The function rearranges the values in the vector so that all values that are less than or equal to x come first, then all values that are greater than x. The smallest index in the rearranged vector for which the corresponding value is greater than x is returned. If there is no such index, an exception of type runtime_error is thrown.

7. Two functions that each receive a character string as a parameter and return the reversed character string. In the first function, recursion was used and in the second one a loop.
