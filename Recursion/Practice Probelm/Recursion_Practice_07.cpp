
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recusrion Practice
// Problem	: Fibonacci Series
// Link		: https://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html?fbclid=IwAR26C8AO6IE0p1O1pbx3g5WnPGJrqgaae4QFTTBhZhKcVztFhbRECQlb6-Q
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;
int  fn(int n){
	if(n<=2)
		return 1;
	int n1 = fn(n-1);
	int n2 = fn(n-2);
	
	return n1+n2;
}

int main(){
	int n, res=1;
	cin >> n;
	int ans = fn(n);
	cout<<ans<<endl;
}

/*
Input:
7

Output:
13
*/