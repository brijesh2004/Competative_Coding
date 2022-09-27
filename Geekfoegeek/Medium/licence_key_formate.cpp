class Solution
{
   public:
    string ReFormatString(string S, int K){
    	string answer = "";

        int n = S.size(), cnt=0;

        for(int i=n-1; i>=0; i--){

            if(S[i]!='-'){

                answer.push_back(toupper(S[i]));

                cnt++;

            }

            if(cnt==K && i!=0){

                answer.push_back('-');

                cnt=0;

            }

        }

        if(answer [answer.size()-1]=='-') 
        answer.pop_back();

     reverse(answer.begin(), answer.end());

     return answer;
    	
    }
};