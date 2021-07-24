#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
	
	void swap(char& a, char& b ){
		char temp = a;
		a = b;
		b = temp;
	}
	
    void reverseString(vector<char>& s) {
   			ios_base :: sync_with_stdio(false);
			cin.tie(NULL);
   		for(int i = 0, j = s.size()-1; i<j;i++,j--){
   			swap(s[i],s[j]);	
		}
	        
    }
};

int main(){
	Solution s1;

	//edit your function name here;
	vector<char> arr = {'h','e','l','l','o'};
	s1.reverseString(arr);
	
	for(auto a : arr)
		cout<<a<<" ";
	
	return 0;
}
