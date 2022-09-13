

string isSubset(int a1[], int a2[], int n, int m) {
   if(m>n)
   return "No";
   sort(a1,a1+n);
   sort(a2,a2+m);
   for(int i=0;i<m;i++){
       for(int j=i;j<n;j++){
           if(a2[i]==a1[j]){
               break;
           }
           else {
               if(j==n-1)
               return "No";
           }
       }
   }
   return "Yes";
}