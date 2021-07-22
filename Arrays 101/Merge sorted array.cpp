#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
  		
  		for(int i = m;i<m+n;i++){
  			nums1[i] = nums2[i-m];
		  }
  		sort(nums1.begin(),nums1.end());
    }
};

int main(){
	Solution s1;

	//edit your function name here;
	vector<int> arr1 = {1,2,3,0,0,0};
    vector<int> arr2 = {2,5,6};
    int m = 3;
    int n = 3;
	s1.merge(arr1,m,arr2,n);
	return 0;
}
