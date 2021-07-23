#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
       
       ios_base::sync_with_stdio(false);
       cin.tie(NULL);
	   
	   if(nums.size() == 0){
	   	cout<<"yo";
		   return 0;
	   }
	   
	   int j = 1;
	   for(int i=1;i<nums.size();i++){
       	if(nums[i] != nums[i-1]){
       			nums[j++] = nums[i];
		   }
		}
		
		return j;
    }
};

int main(){
	Solution s1;

	//edit your function name here;
	vector<int> arr = {};
	cout<< s1.removeDuplicates(arr);
	return 0;
}
