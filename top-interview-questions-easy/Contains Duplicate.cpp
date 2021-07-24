#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    	
    	ios_base :: sync_with_stdio(false);
    	cin.tie(NULL);
    	
        sort(nums.begin(),nums.end());
        for(int i = 1;i<nums.size();i++)
        	if(nums[i] == nums[i-1])
				return true;		
  	
	return false;
    }
};

int main(){
	Solution s1;

	//edit your function name here;
	vector<int> arr = {1,1,1,3,3,4,3,2,4,2};
	cout<< s1.containsDuplicate(arr);
	return 0;
}
