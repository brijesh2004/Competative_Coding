

int transitionPoint(int arr[], int n) {
    // code here
int s=0;
int e=n-1;
int mid=s+(e-s)/2;
while(s<=e){
    if(arr[mid]==1&&arr[mid-1]!=1)
    return mid;
    if(arr[mid]==0)
    s=mid+1;
    else 
    e=mid;
    mid=s+(e-s)/2;
}
return -1;

}