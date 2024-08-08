#include <iostream>
#include <vector>

class Solution {
public:
	int maxProfit(std::vector<int>& prices) {
		int buy = 0, sell = 0, profit = 0, flag = 0;
		for(auto iter = prices.begin(); iter != prices.end(); iter++){
			if(iter + 1 != prices.end()){
				if(*(iter + 1) > *iter && flag == 0){
					buy = *iter;
					flag = 1;
				}
				if(*(iter + 1) < *iter && flag == 1){
					sell = *iter;
					profit += sell - buy;
					flag = 0;
				}
			}
			else{
				if(*iter > buy && flag == 1){
					sell = *iter;
					profit += sell - buy;
				}
			}
		}
		return profit;
	}
};

int main(){
	Solution sol;
	std::vector<int> prices{7,6,4,3,1};
	std::cout << sol.maxProfit(prices) << "\n";
	return 0;
}