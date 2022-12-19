
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recursion
// Problem	: Print ANY Subsequence if sum of the elements equal K
// Notes	:
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;

int recFunc(int ind, int arr[], int n, int K, int sum)
{
	if(ind==n){
		if(sum==K)
			return 1;
		return 0;
	}

	//Pick the element
	sum += arr[ind];
	int l = recFunc(ind+1, arr, n, K, sum);
	

	// Not pick the element
	sum -= arr[ind];
	int r = recFunc(ind+1, arr, n, K, sum);
	
	return l+r;

}

int main(){

	int arr[] = {3, 1, 2, 5, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int K = 10;

	int noOfSubsets = recFunc(0, arr, n, K, 0);
	cout<<noOfSubsets<<endl;

	return 0;
}

/*

Output:
3 

*/