#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int countOfDeleted=0;
        vector<int>  :: iterator it = nums.begin();
        
        int n = nums.size();
        for(int i=0;i<n;i++){
        //	cout<<"yo "<<nums[i]<<endl;
        	if(nums[i] == val){
        		nums[i] = 101;
        		countOfDeleted++;
			}
			
		}
        sort(nums.begin(),nums.end());
        return nums.size()-countOfDeleted;
    }
};

int main(){
	Solution s1;

	//edit your function name here;
	vector<int> arr = {3,2,2,3};
	int val = 3;
	cout<< s1.removeElement(arr,val);
	return 0;
}
