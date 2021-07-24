#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:

    void reverseString(vector<char>& s) {
    		string str;    
        for(auto a : s)
	        str.push_back(a);
	    reverse(str.begin(),str.end());  
	     
		for(int i = 0;i<s.size();i++){
			s[i] = str[i];
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
