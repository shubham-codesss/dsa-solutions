class Solution {
	public:
	int maxSubarraySum(vector<int>& arr, int k) {
	
		int sum = 0;
		for (int i = 0; i<k; i++) {
			sum += arr[i];
		}
		int MaxSum = sum;
		for (int i = k; i<arr.size(); i++) {
			sum += arr[i] - arr[i - k];
			MaxSum = max(MaxSum , sum);
		}
		return MaxSum;
	}
};
