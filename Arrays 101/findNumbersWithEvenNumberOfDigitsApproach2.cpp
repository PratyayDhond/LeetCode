#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    int findNumbers(vector<int>& nums) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
	    int count = 0;
	    for(auto a : nums){
	    	int n = int(log10(double(a)))+1;
			if( n%2 == 0)
	    		count++;
		}

		return count;
	}
};

int main(){
	Solution s1;

	//edit your function name here;
	vector<int> arr = {12,345,2,6,7896};
	
	cout<< s1.findNumbers(arr);
	return 0;
}
