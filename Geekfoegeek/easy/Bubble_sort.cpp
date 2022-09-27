
class Solution
{
    public:
    //Function to sort the array using bubble sort algorithm.
    void bubbleSort(int arr[], int n)
    {
        // Your code here  
        for(int i=1;i<n;i++){
            bool swapped=false;
            for(int j=0;j<n-i;j++){
                if(arr[j]>arr[j+1]){
                    swap(&arr[j],&arr[j+1]);
                    swapped=true;
                }
            }
            if(swapped=false)
            break;
            
        }
    }
};