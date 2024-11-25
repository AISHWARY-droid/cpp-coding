class Solution {
  public:
    // Function to search x in arr
    // arr: input array
    // X: element to be searched for
    int search(vector<int>& arr, int x) {

        // Your code here
         int n = arr.size(); //size of array
        
        // iterating over all the elements 
        for (int i = 0; i < n; i++){
            
            // if we found the element in array
            if(arr[i] == x){
                
                return i ;
                
            }
            
        }
        // if we didn't find the array
            return -1;
    }
};