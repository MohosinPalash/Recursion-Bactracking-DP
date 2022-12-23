
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recusrion Practice
// Problem	: To find the second maximum element from the array.
// Link		: https://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html?fbclid=IwAR26C8AO6IE0p1O1pbx3g5WnPGJrqgaae4QFTTBhZhKcVztFhbRECQlb6-Q
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;
int fn(int i, int n, vector<int>&v, int mx, int mn){
	if(i>n)
		return mn;

	if(v[i]<mx && v[i] >mn){
		mn = v[i];
		
	}
	mx = max(mx, v[i]);
	
	return fn(i+1, n, v ,mx, mn);
}

int main(){
	int n;
	cin >> n;
	vector<int>v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];	
	}
	int mx=v[0], mn = -1;
	int ans = fn(0, n-1, v, mx, mn);
	cout<<ans<<endl;
	
}

/*
Input:
5
13 8 9 11 7

Output:
11
*/