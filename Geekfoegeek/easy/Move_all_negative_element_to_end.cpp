class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
vector<int>posi;
vector<int>neg;
for(int i=0;i<n;i++){
    if(arr[i]>=0)
    posi.push_back(arr[i]);
    else 
    neg.push_back(arr[i]);
}
for(int i=0;i<posi.size();i++){
    arr[i]=posi[i];
}
for(int i=0;i<neg.size();i++){
    arr[i+posi.size()]=neg[i];
}
    }
};