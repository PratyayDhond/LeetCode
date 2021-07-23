// 32 ms solution

#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
		ios_base :: sync_with_stdio(false);
		cin.tie(NULL);
		
		vector<int> odd;
		
		for(int i = 0;i<nums.size();i++){
			if(nums[i] %2 != 0){
				odd.push_back(nums[i]);
				nums.erase(nums.begin() + i);
				i--;
			}
		}
		
		for(auto a : odd)
			nums.push_back(a);		
		
		return nums;
    }
};

int main(){
	Solution s1;

	//edit your function name here;
	vector<int> arr = {3,1,2,4};
	arr = s1.sortArrayByParity(arr);
	
	for(auto a : arr)
		cout<<a<<" ";
	return 0;
}
