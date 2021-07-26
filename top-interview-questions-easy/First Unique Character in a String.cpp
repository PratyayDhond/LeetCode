#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    int firstUniqChar(string s) {
			
		for(int i = 0; i <s.size()-1;i++){
			for(int j = i+1;i<s.size();j++){
				if(s[i] == s[j]){
					s[i] = '0';
					s[j] = '0';	
					break;
				}
				if(j == s.size()-1 && s[i] != '0'){
					return i;
				}	
			}
		}	
	return -1;	        
    }
};

int main(){
	Solution s1;

	//edit your function name here;
	string s = "aabb";
	cout<< s1.firstUniqChar(s);
	return 0;
}
