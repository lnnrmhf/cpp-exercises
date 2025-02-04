Function that receives a vector of double values and an additional double value x as a parameter. 
The function rearranges the values in the vector so that all values that are less than or equal to x come first, then all values that are greater than x. 
The smallest index in the rearranged vector for which the corresponding value is greater than x is returned. 
If there is no such index, an exception of type runtime_error is thrown.
