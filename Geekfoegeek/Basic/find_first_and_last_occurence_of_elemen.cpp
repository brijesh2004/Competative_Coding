//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
int firstoccurence(int arr[],int size,int key){
	int s=0,e=size-1;
	int mid=s+(e-s)/2;
	while(s<=e){
		if(arr[mid]==key){
			if(arr[mid-1]==arr[mid])
			e=mid-1;
			else 
			return mid;
			}
		else if(arr[mid]>key)
			e=mid-1;
			else if(arr[mid]<key)
			s=mid+1;
			
			mid=s+(e-s)/2;
		}
	return -1;
	
	}
	int lastoccurence(int arr[],int size,int key){
	int s=0,e=size-1;
	int mid=s+(e-s)/2;
	while(s<=e){
		if(arr[mid]==key){
			if(arr[mid+1]==arr[mid])
			s=mid+1;
			else 
			return mid;
			}
		else if(arr[mid]>key)
			e=mid-1;
			else if(arr[mid]<key)
			s=mid+1;
			
			mid=s+(e-s)/2;
		}
	return -1;
	
	}

vector<int> find(int arr[], int n , int x )
{
    // code here
vector<int>ans;
ans.push_back(firstoccurence(arr,n,x));
ans.push_back(lastoccurence(arr,n,x));
return ans;

}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends