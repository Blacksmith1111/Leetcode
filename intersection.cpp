#include <iostream>
#include <vector>
#include <algorithm>

class Solution {
public:
	std::vector<int> intersect(std::vector<int>& nums1, std::vector<int>& nums2){
		std::vector<int> intersection;
		std::sort(nums1.begin(), nums1.end());
		std::sort(nums2.begin(), nums2.end());
		auto iter1 = nums1.begin();
		auto iter2 = nums2.begin();

		while(iter1 != nums1.end() && iter2 != nums2.end()){
			if(*iter1 == *iter2){
					intersection.push_back(*iter1);
					iter1++;
					iter2++;
				}
			else if(*iter1 < *iter2){
				iter1++;
			}
			else{
				iter2++;
			}
		}
		return intersection;
	}
};

int main(){
	Solution sol;
	std::vector<int> nums1{1,2,2,1};
	std::vector<int> nums2{2,2};
	//sol.intersect(nums1, nums2);
	for(auto&& el : sol.intersect(nums1, nums2)){
		std::cout << el << " ";
	}
	std::cout << "\n";
	return 0;
}