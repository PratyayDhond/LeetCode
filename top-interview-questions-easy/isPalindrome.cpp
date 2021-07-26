#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    bool isPalindrome(string s) {
    	ios_base::sync_with_stdio(false);
		cin.tie(NULL);
    	string temp;
    	for(int i = 0;i<s.size();i++){
    		if(isalnum(s[i])){
    			char a = tolower(s[i]);
    			temp.push_back(a);
			}
		}
		cout<<temp<<endl;    	
     	for(int i = 0,j=temp.size()-1;i<j;i++,j--){
			if(temp[i] != temp[j]){
     			return 0;
			 }
     		
		 }
		return true;	    
    }
};

int main(){
	Solution s1;

	//edit your function name here;
	string s = "0P";
	cout<< s1.isPalindrome(s);
	return 0;
}
