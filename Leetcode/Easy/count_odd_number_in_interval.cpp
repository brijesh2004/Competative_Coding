class Solution {
public:
    int countOdds(int low, int high) {
   
 int s=0;
    for(int i=low;i<=high;i++){
        if(i%2!=0)
            s=s+1;
    }
        return s;
}

};