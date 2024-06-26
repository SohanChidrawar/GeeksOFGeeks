class Solution {
  public:
    int binarysearch(int arr[], int n, int k) {
        // code here
        int low = 0;
        int high = n-1;
        
        while(low<=high)
        {
            //calculate mid value
           int  mid = (low +high)/ 2;
            
            if(arr[mid]==k)
                return mid;
                
            else if(arr[mid]>k)
                high = mid-1;
                
            else
                low=mid+1;
        }
        return -1;
    }
};
