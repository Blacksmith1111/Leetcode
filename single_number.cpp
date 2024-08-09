#include <iostream>
#include <vector>

class Solution {
public:
	int singleNumber(std::vector<int>& nums){
		int result = nums[0];
		for(auto iter = nums.begin() + 1; iter != nums.end(); iter++){
			result ^= *iter;
		}
		return result;
	}
};

int main(){
	Solution sol;
	std::vector<int> vect{1};
	std::cout << sol.singleNumber(vect) << "\n";
	return 0;
}