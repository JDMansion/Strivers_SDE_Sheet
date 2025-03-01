// Majority Element   ( Leetcode: 169 )


class Solution {
public:

    int hashingMethod(vector<int>& nums) {
        map<int, int> map;

        for(int i=0; i<nums.size(); i++) {
            map[nums[i]]++;
        }

        for(auto it: map) {
            if(it.second > nums.size()/2) {
                return it.first;
            }
        }
        return -1;
    }

    int mooseVotingAlgo(vector<int>& nums) {
        int cnt = 0;
        int el;

        for(int i=0; i<nums.size(); i++) {
            if(cnt == 0) {
                el = nums[i];
                cnt = 1;
            }
            else if(nums[i] == el) {
                cnt++;
            }
            else {
                cnt--;
            }
        }
        return el;
    }

    int majorityElement(vector<int>& nums) {
        //return hashingMethod(nums);
        return mooseVotingAlgo(nums);
    }
};
