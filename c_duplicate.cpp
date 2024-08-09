#include <iostream>
#include <unordered_map>
#include <vector>

class Solution {
public:
	bool containsDuplicate(std::vector<int>& nums){
		std::unordered_map<int, int> numbers;
		numbers.reserve(nums.size());
		for(auto iter = nums.begin(); iter != nums.end(); iter++){
			numbers[*iter]++;
			if(numbers[*iter] > 1){
				return true;
			}
		}
		return false;
	}
};

int main(){
	Solution sol;
	std::vector<int> vec{1,1,1,3,3,4,3,2,4,2};
	std::cout << sol.containsDuplicate(vec) << "\n";
	return 0;
}