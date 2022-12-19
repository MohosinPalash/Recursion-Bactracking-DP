
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recursion
// Problem	: Check Palidrome
// Notes	: 
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;

bool recFunc(int i, int n, string s){
	if(i>=(n/2)) 
		return true;
	if(s[i] != s[n-i-1])
		return false;
	return recFunc(i+1, n, s);
}

int main(){
	string s= "MADAM";
	int n = s.size();
	cout<<s<<" Palindrome? "<<recFunc(0, n, s)<<endl;

	string ss= "MDSAM";
	int nn = ss.size();
	cout<<ss<<" Palindrome? "<<recFunc(0, nn, ss)<<endl;

}