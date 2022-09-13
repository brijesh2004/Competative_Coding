class Solution{
    public:
    
    //Function to rotate an array by d elements in counter-clockwise direction. 
    void rotateArr(int arr[], int d, int n){
        // code here

int ar[n];
//copy one array to other array 
for(int i=0;i<n;i++){
    ar[i]=arr[i];
}
// if d>n 
int r=d%n;
// logic 
  for(int i=0;i<n;i++){
      arr[(i+n-r)%n]=ar[i];
      
  }
    }
};