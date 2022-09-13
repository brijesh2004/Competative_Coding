//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	    // code here
sort(arr,arr+n);
int i=n-2;
while(i>=0){
    if(arr[i]!=arr[n-1])
    return arr[i];
    i--;
}
return -1;
	}
};