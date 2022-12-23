
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recursion
// Problem	: Sum 1 to N
// Notes	: Parameterized & Functional
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;

int recFuncParameterized(int sum, int n){
	if(n<1){
		return sum;
	}
	return recFuncParameterized(sum+n, n-1);
}

int recFuncFunctional(int n){
	if(n==0)
		return 0;
	
	return n + recFuncFunctional(n-1);
}



int main(){
	int n;
	cin >> n;

	cout<<"Sum (Parameterized): ";
	int s = recFuncParameterized(0, n);
	cout<<s<<endl;

	cout<<"Sum (Functional): ";
	int p = recFuncFunctional(n);
	cout<<p<<endl;
	
}