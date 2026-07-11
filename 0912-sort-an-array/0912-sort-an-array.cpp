class Solution {
public:
    void merge(vector<int>&v, int low, int mid , int high){
        int left=low; //starting idx of left half array
        int right=mid+1; //starting idx of right half array
        vector<int>temp;
        while(left<=mid && right<=high){
            if(v[left]<v[right]){
                temp.push_back(v[left++]);
            }
            else{
                temp.push_back(v[right++]);

            }
        }
        while(left<=mid){
            temp.push_back(v[left++]);
        }
        while(right<=high){
            temp.push_back(v[right++]);
        }

        //put temp ele  in vector
        for(int i=low; i<=high;i++){
            v[i]=temp[i-low];
        }
    }
    void mergeSort(vector<int>&v, int low , int high){
        if(low>=high) return ;
        int mid=low+(high-low)/2;
        mergeSort(v,low,mid);
        mergeSort(v,mid+1,high);
        merge(v,low,mid,high);
    }
    vector<int> sortArray(vector<int>& nums) {
        int n=nums.size();
        mergeSort(nums,0,n-1);
        return nums;
    }
};