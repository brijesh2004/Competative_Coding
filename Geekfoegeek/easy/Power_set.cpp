class Solution{
	public:
   void solve(string &s,vector<string> &res,int pos,string temp){
        if(pos==s.length())
            {
                if(temp.size()>0)
                res.push_back(temp);
                return;
            }
        solve(s,res,pos+1,temp+s[pos]);
        solve(s,res,pos+1,temp);
    }
 vector<string> AllPossibleStrings(string s){
       vector<string> res;
     solve(s,res,0,"");
     sort(res.begin(),res.end());
     
     return res;
		}
};