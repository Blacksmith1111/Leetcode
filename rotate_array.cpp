#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
	void rotate(std::vector<int>& nums, int k){
		k=k% nums.size();  
        std::reverse(nums.begin(),nums.end());  // first reversing whole array
        std::reverse(nums.begin(),nums.begin()+k); // reversing first k part 
        std::reverse(nums.begin()+k,nums.end()); // reversing last k part
	}
};

int main(){
	Solution sol;
	std::vector<int> nums{1, 2, 3, 4, 5, 6};
	int k = 4;
	sol.rotate(nums, k);
	for(auto&& el : nums){
		std::cout << el << " ";
	}
	std::cout << "\n";
	return 0;
}