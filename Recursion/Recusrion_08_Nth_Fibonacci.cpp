
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recursion
// Problem	: Nth Fibonacci Number
// Notes	:
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;

int fibo(int n, vector<int>& v){
	if(n<=1)
		return n;
	int n1 = fibo(n-1, v);
	int n2 = fibo(n-2, v);
	return n1+n2;
}

int main(){
	int n = 6;
	vector<int>v(n);
	int ans = fibo(n, v);
	cout<< ans << endl;
}