//spiral matrix ..code studio

APPROACH:

>>starting row print krlo

>>ending col print krlo

>>ending row print krlo

>>starting col print krlo

now there are some duplicate elements and we need to handle this

//leet code 54
class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        vector<int> ans;

        int row=matrix.size();

        //col nikalna hai to kisi bhi row ka ek size nikal lena
        int col=matrix[0].size();

        //to find no. of elements
        int count=0;

        //total no. of element
        int total=row*col;

        //index intialisation
        int startingRow=0;
        int startingCol=0;
        int endingRow=row-1;
        int endingCol=col-1;

        //jis bhi element ko print karate jayenge use hm count me add krte jayenge
        while(count<total){

            //print STARTING ROW
            //means startung col se ending col tk sare ele. print kr denge
            for(int index=startingCol;index<=endingCol;index++){

                ans.push_back(matrix[startingRow][index]);//here index is of col
                count++;

            }
            //hmari starting row print ho chuki hai so hm starting row ko next row pr 
            //point kr sakte hai so
            startingRow++;

            //Print ENDING COLUMN
            //startig row se ending row tk chale jao or print krdo
            for(int index=startingRow;index<=endingRow;index++){
                ans.push_back(matrix[index][endingCol]);
                count++;
            }
            endingCol--;

            //Print ENDING ROW
            //ending col se starting col tk jaana hai
            for(int index=endingCol;index>=startingCol;index--){
                ans.push_back(matrix[endingRow][index]);//index is of col index
                count++;
            }
            endingRow--;

            //print STARTING COLUMN
            //So we have to go from endingRow to startingRow
            for(int index=endingRow;index>=startingRow;index--){
                ans.push_back(matrix[index][startingCol]);
                count++;
            }
            startingCol++;
            
        }

        return ans; 
    }
};





