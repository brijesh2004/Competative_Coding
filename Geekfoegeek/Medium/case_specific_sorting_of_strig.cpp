
class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        // your code here
        string s1="",s2="";

        for(int i=0;i<str.length();i++)

        {

            if(islower(str[i]))

            {

                s1+=str[i];

            }

            else

            {

                s2+=str[i];

            }

        }

        sort(s1.begin(),s1.end());

        sort(s2.begin(),s2.end());

        int in=0;

        int j=0;

        for(int i=0;i<str.length();i++)

        {

            if(islower(str[i]))

            {

                str[i]=s1[in];

                in++;

            }

            else

            {

                str[i]=s2[j];

                j++;

            }

        }

        return str;
    }
};