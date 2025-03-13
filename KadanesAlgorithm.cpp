// Kadane's Algorithm

void kadanesAlgorithm(vector<int>& nums) {
  int max = INT_MIN;
  int sum = 0;
  int start, ansStart, ansEnd;

  for(int i=0; i<nums.size(); i++) {
    if(sum == 0) start = i;
    sum += nums[i];

    if(sum > max) {
      max = sum;
      ansStart = start, ansEnd = i;
    }

    if(sum < 0) {
      sum = 0;
    }
  }

  for(int i = ansStart; i<=ansEnd; i++) {
    cout<<nums[i]<<" ";
  }
}

int main() {
  vector<int> nums = {-2, -3, 4, -1, -2, 1, 5, -3};
  kadanesAlgorithm(nums);
}
