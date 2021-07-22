#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    void duplicateZeros(vector<int>& arr) {    
    	ios_base::sync_with_stdio(false);
    	cin.tie(NULL);
       int n = arr.size();
		vector <int> arr1;
        for(auto a : arr){
        	if(a == 0){
        		arr1.push_back(0);
			}
			arr1.push_back(a);
		}	
		arr = arr1;
		while(arr.size()>n){
			arr.pop_back();
		}
    }
};
    

int main(){
	Solution s1;

	//edit your function name here;
	vector<int> arr = {1,0,2,3,0,4,5,0};
	//1 0 0 2 3 0 0 4 5 0 0 
	 s1.duplicateZeros(arr);
	return 0;
}
