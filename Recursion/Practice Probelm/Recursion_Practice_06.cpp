
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recusrion Practice
// Problem	: To compute factorial of N
// Link		: https://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html?fbclid=IwAR26C8AO6IE0p1O1pbx3g5WnPGJrqgaae4QFTTBhZhKcVztFhbRECQlb6-Q
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;
int  fn(int i, int n, int res){
	if(i>n)
		return res;
	res*=i;
	return fn(i+1, n, res);
}

int main(){
	int n, res=1;
	cin >> n;
	int ans = fn(1,n, res);
	cout<<ans<<endl;
}

/*
Input:
6

Output:
720
*/