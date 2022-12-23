
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recusrion Practice
// Problem	: Print array in oredr [0] [n-1] [1] [n-2] ...... [(n-1)/2] [n/2]
// Link		: https://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html?fbclid=IwAR26C8AO6IE0p1O1pbx3g5WnPGJrqgaae4QFTTBhZhKcVztFhbRECQlb6-Q
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;
void fn(int i, int n, vector<int>&v){
	if(i>n)
		return;
	cout<<v[i] << " "<< v[n]<<endl;
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
	
}

/*
Input:
5
1 5 7 8 9

Output:
1 9
5 8
7 7
*/