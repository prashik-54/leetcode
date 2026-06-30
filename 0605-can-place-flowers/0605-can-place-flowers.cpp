class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int num) {
        int count = 0;
        int n = flowerbed.size();
        //special case
        if(n==1){
            if(flowerbed[0]==0 && num<=1) return true;
            else false;
        }
        
        for (int i = 0; i < n; i++) {
            if (i == 0 && flowerbed[i] == 0) {
                if (flowerbed[i + 1] == 0) {
                    flowerbed[i] = 1;
                    count++;
                }
            } else if (i == n - 1 && flowerbed[i] == 0) {
                if (flowerbed[i - 1] == 0) {
                    flowerbed[i] = 1;
                    count++;
                }
            } else {
                if (flowerbed[i] == 0 && flowerbed[i - 1] ==
                        0 && flowerbed[i + 1] == 0) {
                    flowerbed[i] = 1;
                    count++;
                }
            }
        }
        return count>=num;
    }
};