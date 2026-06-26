class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<pair<int, int>> arr;

        for (int k = 0; k < nums.size(); k++) {
            arr.push_back({nums[k], k});
        }

        sort(arr.begin(), arr.end());

        int i = 0, j = arr.size() - 1;

        while (i < j) {
            int sum = arr[i].first + arr[j].first;

            if (sum == target) {
                int a = arr[i].second;
                int b = arr[j].second;
                if (a > b) swap(a, b);
                return {a, b};
            }
            else if (sum > target) {
                j--;
            }
            else {
                i++;
            }
        }

        return {};
    }
};