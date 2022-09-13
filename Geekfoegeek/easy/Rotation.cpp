//User function template for C++
class Solution{
public:	
	int findKRotation(int arr[], int n) {
	    // code here
     int i=0;

        while(i<n-1)

            {

                if(arr[i] > arr[i+1])

                   return i+1;

                i++;

            }

        return 0;
	}

};