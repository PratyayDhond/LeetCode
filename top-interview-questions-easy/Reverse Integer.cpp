#include<bits/stdc++.h>
using namespace std;

//Place your class here
class Solution {
public:
    int reverse(int x) {
        long long n = 0;
		while(x!=0){
			n = n*10 + x%10;
			x /= 10;
		}
		
		if(n<2147483648 && n > -2147483647)
		return n;

	return 0;	
    }
};

int main(){
	Solution s1;

	//edit your function name here;
	int arr = 1534236469;
	cout<< s1.reverse(arr);
	return 0;
}
