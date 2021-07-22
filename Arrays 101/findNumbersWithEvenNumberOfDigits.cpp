#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
    int count = 0;
    	for(int a : nums){
    		if(a>999 and a<10000)
    			count++;
			else if(a>9 and a<100)
				count++;
			else if(a == 100000)
				count++;
		}

		return count;
	}
};

int main(){
	Solution s1;

	//edit your function name here;
	vector<int> arr = {555,901,482,1771};
	
	cout<< s1.findNumbers(arr);
	return 0;
}
