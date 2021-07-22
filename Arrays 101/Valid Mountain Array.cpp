#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
	
	int max(vector<int>& arr){
		int max = arr[0];
		for(auto a : arr){
			if(a > max)
				max = a;
		}
		return max;
	}
	
	int linearSearch(vector<int>& arr, int max){
		for(int i = 0;i<arr.size();i++){
			if(arr[i] == max)
				return i;
		}
		return 0;
	}
	
    bool validMountainArray(vector<int>& arr) {
	   if(arr.size() < 3)
       		return false;

       		int index = linearSearch(arr,max(arr));
       			if(index == arr.size() -1 || index == 0)
       				return false;
       		for(int i = 1;i<=index;i++){
       		
       			if(arr[i] <= arr[i-1])
       				return false;
			}

			for(int i = index+1; i <arr.size();i++){
	
				if(arr[i] >= arr[i-1]){
					return false;
				}
			}
		
		return true;
		
		}   	
};
int main(){
	Solution s1;

	//edit your function name here;
	vector<int> arr = {0,3,2,1};
	cout<< s1.validMountainArray(arr);
	return 0;
}
