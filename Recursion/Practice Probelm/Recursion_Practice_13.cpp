
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recusrion Practice
// Problem	: Linear Search
// Link		: https://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html?fbclid=IwAR26C8AO6IE0p1O1pbx3g5WnPGJrqgaae4QFTTBhZhKcVztFhbRECQlb6-Q
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;
int fn(int i, int n, vector<int>&v, int s){
	if(i>n)
		return -1;

	if(v[i] == s)
		return i;
	
	return fn(i+1, n, v ,s);
}

int main(){
	int n;
	cin >> n;
	vector<int>v(n);
	for(int i=0; i<n; i++){
		cin >> v[i];	
	}

	int x, s;
	cin >> x;
	while(x--){
		cin >> s;
		int ans = fn(0, n-1, v,s);
		if(ans==-1)
			cout<<"Not Found\n";
		else
			cout<<"Found in position = "<<ans<<endl;
	}
	
}

/*
Input:
5
2 9 4 7 6
2
5 9

Output:
Not Found
Found in position = 1
*/