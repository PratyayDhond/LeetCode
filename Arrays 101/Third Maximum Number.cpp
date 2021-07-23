#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
	
	void removeDouble(vector<int>& nums){
		for(int i = 1;i<nums.size();i++){
			if(nums[i-1] == nums[i]){
				nums.erase(nums.begin()+i);
				i--;
			}
		}
	}
	
    int thirdMax(vector<int>& nums) {
    		ios_base :: sync_with_stdio(false);
    		cin.tie(NULL);
			sort(nums.begin(),nums.end(),greater<int>());
			removeDouble(nums);
			if(nums.size()>=3)
			return nums[2];
			else
			return nums[0];
    }
};

int main(){
	Solution s1;

	//edit your function name here;
	vector<int> arr = {1,2};
	cout<< s1.thirdMax(arr);
	return 0;
}
