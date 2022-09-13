

int* game_with_number(int arr[], int n)
{
    
    // Complete the function
    int* ar = new int[n];
    for(int i=0;i<n-1;i++){
        ar[i]=arr[i]^arr[i+1];
    }
    ar[n-1]=arr[n-1];
    
    return ar;
}