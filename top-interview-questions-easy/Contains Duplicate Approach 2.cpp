#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    	
    	ios_base :: sync_with_stdio(false);
    	cin.tie(NULL);
    	
        
        for(int i = 0;i<nums.size()-1;i++){
        	for(int j=i+1;j<nums.size();j++){
        		if(nums[i] == nums[j])
        			return true;
			}
		}	
  	
	return false;
    }
};

int main(){
	Solution s1;

	//edit your function name here;
	vector<int> arr = {1,2,3,1};
	cout<< s1.containsDuplicate(arr);
	return 0;
}
