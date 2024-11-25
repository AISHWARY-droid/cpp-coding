class Solution {
  public:
    void pushZerosToEnd(vector<int>& arr) {
        // code here
        
        int n = arr.size() ; // taking size of array
        int count = 0;
        
        // iterating over the array
        for (int i = 0 ; i < n ; i++){
            
            // chcking if the element is non-zero
            if ( arr[i] != 0 ){
                
                // swapping the elemnts
                int temp = arr[count];
                arr[count] = arr[i];
                arr[i] = temp;
                
                //moving forward the count (most important)
                count++;
            }
        }
        
    }
};