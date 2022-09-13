class Solution{
    public:
    int search(int arr[], int lo, int hi, int key){
        // l: The starting index
        // h: The ending index, you have to search the key in this range
        
        //complete the function here
       while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(arr[mid]==key) return mid;
            else if(arr[lo]<=arr[mid]){
                if(arr[lo]<=key && key<arr[mid]){
                    hi=mid-1;
                }else{
                    lo=mid+1;
                }
            }else{
                if(arr[mid]<=key && key<arr[hi]){
                    lo=mid+1;
                }else{
                    hi=mid-1;
                }
            }
        }
        return -1;
    }
};