
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recusrion Practice
// Problem	: To find the maximum element from the array.
// Link		: https://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html?fbclid=IwAR26C8AO6IE0p1O1pbx3g5WnPGJrqgaae4QFTTBhZhKcVztFhbRECQlb6-Q
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;
int fn(int i, int n, vector<int>&v, int mx){
	if(i>n)
		return mx;
	mx = max(mx, v[i]);
	return fn(i+1, n, v ,mx);
}

int main(){
	int n, mx=-1000000;
	cin >> n;
	vector<int>v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];	
	}
	int ans = fn(0, n-1, v, mx);
	cout<<ans<<endl;
	
}

/*
Input:
5
7 4 9 6 3

Output:
9
*/