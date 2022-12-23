
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recusrion Practice
// Problem	: Evaluate the polynomial for input x and n: 1 + x + x^2 + x^3 + ... + x^n-1
// Link		: https://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html?fbclid=IwAR26C8AO6IE0p1O1pbx3g5WnPGJrqgaae4QFTTBhZhKcVztFhbRECQlb6-Q
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;
int  fn(int x, int i, int n, int res){
	if(i>n)
		return res;
	res+= pow(x, i);
	return fn(x, i+1, n, res);
}

int main(){
	int x, n, res=1;
	cin >> x >> n;
	int ans = fn(x, 1, n-1, res);
	cout<<ans<<endl;
	
}

/*
Input:
2 6

Output:
63
*/