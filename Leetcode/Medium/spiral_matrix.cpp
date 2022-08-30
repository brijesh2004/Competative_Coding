class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int>spiral;
        int row=matrix.size();
        int col=matrix[0].size();
        int count=0;
        int total=row*col;
        //index initialiseint  
        int startingrow=0;
        int startingcol=0;
        int endingrow=row-1;
        int endingcol=col-1;
        while(count<total){
            //printing starting row 
for(int index=startingcol;count<total&&index<=endingcol;index++){
              spiral.push_back(matrix[startingrow][index]);
                count++;
                }
            startingrow++;
            
 //printing ending coloumns 
            for(int index=startingrow;count<total&&index<=endingrow;index++){
                spiral.push_back(matrix[index][endingcol]);
                count++;
                }
            endingcol--;
            
            //printing ending row 
            for(int index=endingcol;count<total&&index>=startingcol;index--){
                spiral.push_back(matrix[endingrow][index]);
                count++;
                }
            endingrow--;
            
  // print staring columns 
            for(int index=endingrow;count<total&&index>=startingrow;index--){
                spiral.push_back(matrix[index][startingcol]);
                count++;
                }
            startingcol++;
            
            }
        return spiral;
    }
};