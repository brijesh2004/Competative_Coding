
class Solution{
    public:
    int minSubset(vector<int> &Arr,int N){
        sort(Arr.begin(),Arr.end());
        long long sum=0;
        int count=1;
        for(int i=0;i<N;i++){
            sum+=Arr[i];
        }
        long long sum1=0;
       for(int i=N-1;i>=0;i--){
           sum1=sum1+Arr[i];
           sum=sum-Arr[i];
           if(sum1>sum){
               return count;
           }
           else
count++;
       }
       
    }
};