
#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
      
	  for(int i = 0;i<arr.size()-1;i++){
	  	for(int j = i+1;j<arr.size();j++){
	  		if(arr[i] == arr[j] *2){
	  			return true;
			  }
		  }
		for(int j = i-1;j>=0;j--){
			if(arr[i] == arr[j]*2){
				return true;
			}
		}  
	  }  
     return false;         
    }
};

int main(){
	Solution s1;

	//edit your function name here;
	vector<int> arr = {7,1,14,11};
	cout<< s1.checkIfExist(arr);
	return 0;
}
