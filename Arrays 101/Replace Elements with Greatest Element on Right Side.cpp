#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
		int n = arr.size();
			int temp = 	arr[n-1];
		for(int i = n-1;i>=0;i--){
			int max = *max(arr.begin()+i,arr.end()); 
			if(temp>max)
				max = temp;
			arr[i] = max;
    	}
    	
    	arr.erase(arr.begin());
    	
    	arr.push_back(-1);
    	
    	return arr;
    }
};

int main(){
	Solution s1;

	//edit your function name here;
	vector<int> arr = {17,18,5,4,6,1};
	vector<int> sol = s1.replaceElements(arr);

	for(auto a : arr)
		cout<<a<<" ";
	
	return 0;
}
