
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recusrion Practice
// Problem	: Reverse a given string
// Link		: https://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html?fbclid=IwAR26C8AO6IE0p1O1pbx3g5WnPGJrqgaae4QFTTBhZhKcVztFhbRECQlb6-Q
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;
void  fn(int sz, string s){
	if(sz<0)
		return;
	cout<<s[sz];
	return fn(sz-1, s);
}

int main(){
	string s;
	cin >> s;
	fn(s.size()-1, s);
}

/*
Input:
helloo

Output:
oolleh
*/