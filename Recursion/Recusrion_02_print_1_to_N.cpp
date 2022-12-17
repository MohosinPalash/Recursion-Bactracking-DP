
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recursion
// Problem	: Print 1 to N
// Notes	:
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;

void recFunc(int i, int n){
	if(i>n)
		return ;
	cout<<i<<" ";
	recFunc(i+1, n);
	// cout<<i<<" "; [for: N to 1 (Backtaracking)]
}


int main(){
	int n;
	cin >> n;
	recFunc(1, n);
	
}