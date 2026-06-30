class Solution {
public:
    int maxArea(vector<int>& height) {
        int n=height.size();
        int maxArea=0; //maxwater
        int start=0;
        int end=n-1;
        while(start<end){
            int minHeight=min(height[start],height[end]);
            int area=(end-start)*minHeight; //end-start = wirdth 
            maxArea=max(maxArea,area);
            if(height[start]<height[end]){
                start++;
            }
            else{
                end--;
            }
        }
        return maxArea;

    }
};