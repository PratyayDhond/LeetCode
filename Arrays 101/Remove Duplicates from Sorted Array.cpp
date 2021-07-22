#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
		for(int i=1;i<nums.size();i++){
			if(nums[i-1] == nums[i]){
				nums[i] = -1;
				nums.erase(nums.begin()+i);
				i--;
			}
		}
		
		for(auto a : nums)
			cout<<a<<" ";
		return nums.size();
    }
};

int main(){
	Solution s1;

	//edit your function name here;
	vector<int> arr = {1,1,2};
	cout<< s1.removeDuplicates(arr);
	return 0;
}
