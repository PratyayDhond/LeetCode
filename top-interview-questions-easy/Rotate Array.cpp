#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    
    void rotate(vector<int>& nums, int k) {
    	
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
    	
    	k = k %nums.size();
    	if(nums.size()==1)
    		return;
        vector<int> temp;
        for(int i= nums.size()-k;i<nums.size();i++)
        	temp.push_back(nums[i]);
        for(int i = 0;i<nums.size()-k;i++)
        	temp.push_back(nums[i]);
		nums = temp;   	
    }
};

int main(){
	Solution s1;

	//edit your function name here;
	vector<int> arr = {1,2};
	int k = 3;
	s1.rotate(arr,k);
	
	for(auto a : arr)
		cout<<a<<" ";
	
	return 0;
}
