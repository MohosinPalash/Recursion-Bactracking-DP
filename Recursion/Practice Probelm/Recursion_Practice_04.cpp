
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recusrion Practice
// Problem	: Print the polynomial series for any input n: 1 + x + x^2 + x^3 + ... + x^n-1
// Link		: https://zobayer.blogspot.com/2009/12/cse-102-practice-recursions.html?fbclid=IwAR26C8AO6IE0p1O1pbx3g5WnPGJrqgaae4QFTTBhZhKcVztFhbRECQlb6-Q
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;
void fn(int i, int n){
	if(i>n)
		return;
	if(i==1)
		cout<<" + x ";
	else
		cout<<" + x^"<<i<<" ";
	return fn(i+1, n);
}

int main(){
	int n;
	cin >> n;
	cout<<1<< " ";
	fn(1, n-1);
	
}

/*
Input:
6

Output:
1  + x  + x^2  + x^3  + x^4  + x^5 
*/