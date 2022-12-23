
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recusrion Practice
// Problem	: Binary Search
// Link		: https://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html?fbclid=IwAR26C8AO6IE0p1O1pbx3g5WnPGJrqgaae4QFTTBhZhKcVztFhbRECQlb6-Q
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;
int fn(int l, int r, vector<int>&v, int s){
	if(l>r)
		return -1;
	int mid = (l+r)/2;

	if(v[mid] == s)
		return mid;
	else if(v[mid] < s)
		l = mid+1;
	else
		r = mid-1;
	
	return fn(l, r, v ,s);
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
1 2 3 4 5
4
1 3 5 -5

Output:
Found in position = 0
Found in position = 2
Found in position = 4
Not Found
*/