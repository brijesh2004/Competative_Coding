// User function Template for C++
class Solution{
    public:
    int setSetBit(int x, int y, int l, int r){
        // code here
        for(int i=l-1;i<r;i++){
            if((y&(1<<i))!=0) {
                x=(x|(1<<i));
            }
        }
        return x;
    }
};