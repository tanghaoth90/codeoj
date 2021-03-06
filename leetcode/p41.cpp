#include <vector>
#include <iostream>
using namespace std;

class Solution {
	int partition_by_pivot(vector<int>& nums, int lo, int hi, int pivot) {
		if (lo > hi) return lo-1;
		int i = lo;
		int j = hi;
		int tmp;
		while (i < j) {
			while (i < j && nums[i] <= pivot) i++;
			while (i < j && nums[j] > pivot) j++;
			if (i < j) {
				tmp = nums[i]; nums[i] = nums[j]; nums[j] = tmp;
			}
		}
		return nums[i] <= pivot ? i : i-1;
	}
public:
	int firstMissingPositive(vector<int>& nums) {
		int n = nums.size();
		if (n == 0) return 1;
		int lo = partition_by_pivot(nums, 0, n-1, 0) + 1;
		if (lo == n


		return n;
	}
};

int main() {
	int inp[] = {4, -1, 0, 2, 1};
	vector<int> inp_vec(inp, inp + sizeof(inp)/sizeof(int));
	cout << firstMissingPositive(inp_vec) << endl;
}
