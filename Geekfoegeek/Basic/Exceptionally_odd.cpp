//User function template for C++

class Solution{   
public:
    int getOddOccurrence(int arr[], int n) {
        // code here
        int exception=arr[0];
        for(int i=1;i<n;i++){
            exception=exception^arr[i];
        }
        return exception;
    }
};