class Solution{
public:
    int findMin(int arr[], int n){
        //complete the function here
        sort(arr,arr+n);
        return arr[0];
    }
};