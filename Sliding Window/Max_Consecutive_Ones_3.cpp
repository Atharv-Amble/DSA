//Brute Force
class Solution {
    public:
        int longestOnes(vector<int>& nums, int k) {
            int maxCount = 0;
            for(int i = 0 ; i < nums.size() ; i++){
                int count = 0;
                int zeros = 0;
                for(int j = i ; j < nums.size() ; j++){
                    if(nums[j] ==0){
                        zeros ++;
                    }
                    if(zeros > k){
                        break;
                    }
                    count++;
                }
                maxCount = max(maxCount,count);
            }
    
            return maxCount;
        }
};


//Optimal Solution
class Solution {
    public:
        int longestOnes(vector<int>& nums, int k) {
            int left = 0;
            int right = 0;
            int zeros = 0;
            int maxLength = 0;
            while(right < nums.size()){
                if(nums[right] == 0){
                    zeros ++;
                }
    
                while(zeros > k){
                    if(nums[left] == 0){
                        zeros --;
                    }
                    left ++;
                }
    
                if(zeros <= k){
                    int length = right - left + 1;
                    maxLength = max(length,maxLength);
                }
    
                right++;
            }
    
            return maxLength;
        }
};


//Most Optimal Solution
class Solution {
    public:
        int longestOnes(vector<int>& nums, int k) {
            int left = 0;
            int right = 0;
            int zeros = 0;
            int maxLength = 0;
            while(right < nums.size()){
                if(nums[right] == 0){
                    zeros ++;
                }
    
                if(zeros > k){
                    if(nums[left] == 0){
                        zeros --;
                    }
                    left ++;
                }
    
                if(zeros <= k){
                    int length = right - left + 1;
                    maxLength = max(length,maxLength);
                }
    
                right++;
            }
    
            return maxLength;
        }
};