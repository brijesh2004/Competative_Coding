//User function Template for C++

/*Function to find frequency of x
* x : element whose frequency is to be found
* v : input vector
*/
int findFrequency(vector<int> v, int x){
    // Your code here
int count=0;
for(int i=0;i<v.size();i++){
    if(v[i]==x)
    count++;
}
return count;
}