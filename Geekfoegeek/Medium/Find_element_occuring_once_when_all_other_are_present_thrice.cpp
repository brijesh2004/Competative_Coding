//User function Template for C++

class Solution {
  public:
    int singleElement(int arr[] ,int N) {
        // code here
map<int,int>map;
for(int i=0;i<N;i++){
    map[arr[i]]++;
    if(map[arr[i]]==3)
    map.erase(arr[i]);
}
int ans;
       for(auto &x:map)
       ans=x.first;
       return ans;
    }
};