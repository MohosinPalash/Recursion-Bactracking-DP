
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recursion
// Problem	: Reverse an Array
// Notes	: Parameterized
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;

void recFunc(int i,int n, int *arr){
	if(i>=n)
		return ;
	swap(arr[i], arr[n]);
	recFunc(i+1, n-1, arr);
}

int main(){
	int arr[5] = {1, 2, 3, 4, 5};
	int n = sizeof(arr)/sizeof(arr[0]);
	recFunc(0, n-1, arr);
	for(int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	
}