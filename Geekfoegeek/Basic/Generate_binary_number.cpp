//Function to generate binary numbers from 1 to N using a queue.

string binary(int a)
{
   string ans;
   while(a>0)
   {
       int t1=a%2;
       ans=to_string(t1)+ans;;
       a=a/2;
   }
   return ans;
}
vector<string> generate(int N)
{
	// Your code here
vector<string>ans;
for(int i=1;i<=N;i++){
    ans.push_back(binary(i));
}
return ans;
}