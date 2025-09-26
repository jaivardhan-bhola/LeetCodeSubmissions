class Solution {
public:
    int binarySearch(vector<int>& nums, int l, int h, int target) {
        while (l <= h) {
            int mid = l + (h - l) / 2;
            if (nums[mid] == target) return mid;
            else if (nums[mid] < target) l = mid + 1;
            else h = mid - 1;
        }
        return -1;
    }

    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, h = n - 1;
        while (l < h) {
            int mid = l + (h - l) / 2;
            if (nums[mid] > nums[h]) {
                l = mid + 1;
            } else {
                h = mid;
            }
        }

        int pivot = l;
        l = 0, h = n - 1;

        if (target >= nums[pivot] && target <= nums[h]) {
            return binarySearch(nums, pivot, h, target);
        } else {
            return binarySearch(nums, l, pivot - 1, target);
        }
    }
};
