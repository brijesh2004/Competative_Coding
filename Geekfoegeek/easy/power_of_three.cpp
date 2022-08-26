#include<iostream>
#include<cmath>
using namespace std;
int main()
 {
	//code
int t;
cin>>t;
for(int i=0;i<t;i++){
    int n;
    cin>>n;
    int k=0,count=0;
    while(1){
       long long powerof3;
       powerof3=pow(3,k);
       k++;
       if(powerof3<=n){
           count++;
       }
       else 
      {
          cout<<count<<endl;
          break;
      }
    }
}
	return 0;
}