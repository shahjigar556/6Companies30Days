class Solution {
  public:
    int doOverlap(int l1[], int r1[], int l2[], int r2[]) {
        // chech if either of the rectangle is on upper or left side
        bool left =l2[0]>r1[0] || l1[0]>r2[0];
        bool up=r2[1]>l1[1] || r1[1]>l2[1];
        if(left || up){
            return false;
        }
        return true;
    }
};