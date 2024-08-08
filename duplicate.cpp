#include <iostream>
#include <vector>

class Dupl{
public:
	Dupl(std::vector<int>& vect): nums(vect){}
	~Dupl(){}
	int removeDuplicates();
	void show(){
		for(auto iter = nums.begin(); iter != nums.end(); iter++){
			std::cout << *iter << "\n";
		}
	}
private:
	std::vector<int> nums;
};

int Dupl::removeDuplicates(){
	int k = 1, delta = 0;
	for(auto iter = nums.begin(); iter != nums.end(); iter++){
		iter = nums.begin() + delta;
		if(iter + 1 != nums.end() && *(iter + 1) == *iter){
			nums.erase(iter + 1);
		}
		else if(iter + 1 != nums.end() && *(iter + 1) != *iter){
			delta++;
			k++;
		}
		else{}
	}
	return k;
}

int main(){
	std::vector<int> myvec{1, 1, 1, 1, 2, 3, 3, 3, 3, 3};
	Dupl obj(myvec);
	std::cout << "\n";
	std::cout << obj.removeDuplicates() << "\n" << "\n";
	obj.show();
	return 0;
}

