{
    public:
    //Function to find the next greater element for each element of the array.
    vector<long long> nextLargerElement(vector<long long> arr, int n){
        // Your code here
        vector<long long>ans(n,-1);
        stack<long long>st;
        st.push(-1);
        for(int i=n-1;i>=0;i--){
                while(st.size()!=0 && st.top()<=arr[i]){
                    st.pop();
                }
           
            if(st.size()!=0){
               ans[i]=st.top();
           }
            st.push(arr[i]);
        }
        return ans;
    }
};