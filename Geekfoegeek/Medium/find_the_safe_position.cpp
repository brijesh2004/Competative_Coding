  public:
  void recursive(int i,int k,vector<int>&arr)
    {
           if(arr.size()==1)
           return;
           i=(i+k-1)%arr.size();
           arr.erase(arr.begin()+i);
           recursive(i,k,arr);
    }
    int safePos(int n, int k) {
        // code here
        vector<int>arr(n);
        for(int i=0;i<n;i++)
        {
            arr[i]=i+1;
        }
        
        recursive(0,k,arr);
        return arr[0];
    
    }
};
