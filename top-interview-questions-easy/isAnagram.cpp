#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
        	return false;
        ios_base :: sync_with_stdio(false);
        cin.tie(NULL);
		
		sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        
        for(int i = 0;i<s.size();i++)
        	if(s[i] != t[i])
        		return 0;
    return 1;    		
    }
};

int main(){
	Solution s1;

	//edit your function name here;
	string s = "anagram";
	string t = "nagaram";
	cout<< s1.isAnagram(s,t);
	return 0;
}
