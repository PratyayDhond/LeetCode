#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> expected = heights;
		sort(expected.begin(),expected.end());
        int count = 0;
        	for(int i =0;i<heights.size();i++){
        		if(expected[i] != heights[i])
        			count++;
			}
		return count;        
    }
};

int main(){
	Solution s1;

	//edit your function name here;
	vector<int> arr = {1,1,4,2,1,3};
	cout<< s1.heightChecker(arr);
	return 0;
}
