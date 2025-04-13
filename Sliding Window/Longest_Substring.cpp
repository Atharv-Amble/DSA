
//Brute Force
class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            int maxCount = INT_MIN;
            if(s == ""){
                return 0;
            }
            for(int i = 0 ; i < s.length() ; i++){
                string temp = "";
                for(int j = i ; j < s.length() ; j++){
                    if(temp.find(s[j]) != string::npos){
                        break;
                    }
                    temp += s[j];
                }
                 maxCount = max(maxCount, (int)temp.length());
            }
    
            return maxCount;
        }
};

//Optimal
class Solution {
    public:
        int lengthOfLongestSubstring(string s) {
            unordered_set<char> mySet;
            int left = 0;
            int maxLength = 0;
    
            for(int right = 0 ; right < s.length() ; right++){
                while(mySet.find(s[right]) != mySet.end()){
                    mySet.erase(s[left]);
                    left ++;
                }
    
                mySet.insert(s[right]);
                maxLength = max(maxLength,(right - left + 1));
            }
    
            return maxLength;
        }
};