

// x is the element to be searched in arr[0..n-1]
// such that all elements differ by at-most k.
int search(int arr[], int n, int x, int k)
{
    // Complete the function	
    for(int i=0;i<n;i++){
        if(arr[i]==x)
        return i;
    }
    return -1;
}    	