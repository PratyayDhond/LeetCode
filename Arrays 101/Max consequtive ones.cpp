#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int count = 0;
        int max = 0;
        
        for(int a : nums){	
        	if(a == 1)
        		count++;
			else{
			count = 0;		
			}
	if(max<count)
		max = count;
		}
		return max;
    }
};

int main(){
	Solution s1;
	
	//edit your function name here;
	vector<int> arr = {1,1,0,1,1,1};
	
	
	cout<< s1.findMaxConsecutiveOnes(arr);
	return 0;
}