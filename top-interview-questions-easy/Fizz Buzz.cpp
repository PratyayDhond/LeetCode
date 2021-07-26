#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    vector<string> fizzBuzz(int n) {
       ios_base :: sync_with_stdio(false);
       cin.tie(NULL);
	    vector<string> solution;
		for(int i = 1;i<=n;i++){
    		
			if(i%3 == 0 && i%5 == 0)    
				solution.push_back("FizzBuzz");		
			else if(i%3 == 0)
				solution.push_back("Fizz");
			else if(i%5 == 0)
				solution.push_back("Buzz");	
			else
				solution.push_back(to_string(i));		
		}
	return solution;	
    }
};

int main(){
	Solution s1;

	//edit your function name here;
	int n = 15;
	vector<string> arr = s1.fizzBuzz(n);
	
	for(auto a : arr)
		cout<<a<<"\n";
	return 0;
}
