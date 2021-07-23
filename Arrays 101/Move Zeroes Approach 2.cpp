//Faster approach 		0ms solution
#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
		
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		
		int p = 0;
		for(int i = 0;i <nums.size();i++){
    		if(nums[i] != 0){
    			nums[p++] = nums[i];
			}
		}    
	
		for(int i = p; i < nums.size();i++)
			nums[i] = 0;
			
    }
};

int main(){
	Solution s1;

	//edit your function name here;
	vector<int> arr = {0};
	s1.moveZeroes(arr);
	return 0;
}
