
vector<long long> printFirstNegativeInteger(long long int A[],
                                       long long int N, long long int k) {
                     
               deque<long long>dq;
               vector<long long >ans;
               // first window of k size 
               for(int i=0;i<k;i++){
                   if(A[i]<0){
                       dq.push_back(i);
                   }
               }
   // store answer of first windows
 if(dq.size()>0){
     ans.push_back(A[dq.front()]);
 }
 else {
     ans.push_back(0);
 }
 
 // for remaining windows
 for(int i=k;i<N;i++){
     // remove 
     if(!dq.empty()&&i-dq.front()>=k){
         dq.pop_front();
     }
     // adding 
     if(A[i]<0){
         dq.push_back(i);
     }
     // ans store 
     if(dq.size()>0){
         ans.push_back(A[dq.front()]);
     }
     else{
         ans.push_back(0);
 }
 
 }
 return ans;
 
 }