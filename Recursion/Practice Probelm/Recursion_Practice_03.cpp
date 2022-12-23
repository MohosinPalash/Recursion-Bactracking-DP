
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recusrion Practice
// Problem	: Remove all odd integers from an array.
// Link		: https://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html?fbclid=IwAR26C8AO6IE0p1O1pbx3g5WnPGJrqgaae4QFTTBhZhKcVztFhbRECQlb6-Q
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;
void fn(int i, int n, vector<int>&v){
	if(i>n)
		return;
	if(v[i]%2==0)
		cout<<v[i]<<" ";
	return fn(i+1, n, v);
}

int main(){
	int n;
	cin >> n;
	vector<int>v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];	
	}
	fn(0, n-1, v);
	
}

/*
Input:
6
1 54 88 6 55 7

Output:
54 88 6
*/