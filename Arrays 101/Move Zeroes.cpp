#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
	
	void swap(int &a, int &b){
		int temp = a;
		a = b;
		b = temp;
	}
	
    void moveZeroes(vector<int>& nums) {
	
		for(int i = 0;i <nums.size();i++){
    		int p = i;
    			while(nums[p] == 0 && p<nums.size()-1)
    				p++;		
    			swap(nums[i],nums[p]);	
		}    
	
		for(auto a : nums)
			cout<<a<<" ";
		
    }
};

int main(){
	Solution s1;

	//edit your function name here;
	vector<int> arr = {0,1,0,3,12};
	s1.moveZeroes(arr);
	return 0;
}
