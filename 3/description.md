Function that receives an array of character strings and its length as parameters and determines which character strings occur more frequently in the array. 
A vector<vector<int>> is returned, which summarizes the indices of the same strings accordingly. Ex.:
Input parameter array: {“a”,“b”,“a”,“c”,“a”,“b”} Length: 6
Return value: {{0,2,4}{1,5}}
Character strings that do not occur more than once are not included in the result.
