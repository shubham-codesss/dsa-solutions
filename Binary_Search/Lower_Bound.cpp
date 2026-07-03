class Solution {
	public:
	int lowerBound(vector<int>& arr, int target) {
	
		int ans = arr.size();
		int start = 0;
		int end = arr.size() - 1;
		
		while (start <= end) {
			int mid = start + (end - start) / 2;
			if (arr[mid] >= target) {
				ans = mid;
				end = mid - 1;
			}
			if (arr[mid]<target) {
				start = mid + 1;
			}
		}
		return ans;
	}
};
