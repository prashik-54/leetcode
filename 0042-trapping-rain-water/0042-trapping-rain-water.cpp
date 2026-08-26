class Solution {
public:
    int trap(vector<int>& height) {
        int n=height.size();
        vector<int>arr1(n); //previous gretest 
        arr1[0]=-1;
        int max=height[0];
        for(int i=1;i<n;i++){
            arr1[i]=max;
            if(max<height[i]){
                max=height[i];
            }
        }
        vector<int>arr2(n);//next gretest
        arr2[n-1]=-1;
        max=height[n-1];
        for(int i=n-2;i>=0;i--){
            arr2[i]=max;
            if(max<height[i]){
                max=height[i];
            }
        }
        int water=0;
        for(int i=0;i<n;i++){
            if(height[i]<min(arr1[i],arr2[i])){
                water=water + min(arr1[i],arr2[i])-height[i];
            }
        } 
        return water;  
    }
};