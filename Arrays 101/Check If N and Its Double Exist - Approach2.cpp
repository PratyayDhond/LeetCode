// This approach is a bit slower
#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
      sort(arr.begin(),arr.end());
	  	for(int i = 0;i<arr.size();i++){
	  		int n = arr[i];
	  		if(n%2 == 0)
	  		if(binary_search(arr.begin(),arr.end(),n/2)){
	  			if(n == 0){
	  				int count = 0;
	  				for(auto a : arr){
	  					if(a==n)
	  						count++;
					  }
					  if(count>1)
					  	return true;
				  }else
	  			return true;
			  }
		  }
	  return false;	
	}
};

int main(){
	Solution s1;

	//edit your function name here;
	vector<int> arr = {0,0};
	cout<< s1.checkIfExist(arr);
	return 0;
}
