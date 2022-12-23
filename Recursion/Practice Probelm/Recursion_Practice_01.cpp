
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recusrion Practice
// Problem	: Print array in reverse oredr
// Link		: https://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html?fbclid=IwAR26C8AO6IE0p1O1pbx3g5WnPGJrqgaae4QFTTBhZhKcVztFhbRECQlb6-Q
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;
void fn(int i, int n, vector<int>&v){
	if(i==n)
		return;
	swap(v[i], v[n]);
	return fn(i+1, n-1, v);
}

int main(){
	int n;
	cin >> n;
	vector<int>v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];	
	}
	fn(0, n-1, v);
	for(int i=0; i<n; i++){
		cout<<v[i]<< " ";
	}
	
}

/*
Input:
5
69 87 45 21 47

Output:
47 21 45 87 69
*/