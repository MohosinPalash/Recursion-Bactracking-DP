
// -------------- Bismillahir Rahmanir Rahim --------------
// Topic	: Recursion
// Problem	: Print ALL Subsequences if sum of the elements equal K
// Notes	:
// Author	: Mohosin Islam Palash

#include<bits/stdc++.h>
using namespace std;

void recFunc(int ind, vector<int>&sb, int arr[], int n, int K, int sum)
{
	if(ind==n){
		if(sum==K){
			for(auto u: sb)
				cout<< u<< " ";
			cout<<endl;
		}
		return ;
	}

	//Pick the element
	sb.push_back(arr[ind]);
	sum += arr[ind];
	recFunc(ind+1, sb, arr, n, K, sum);
	

	// Not pick the element
	sum -= arr[ind];
	sb.pop_back();
	recFunc(ind+1, sb, arr, n, K, sum);

}

int main(){

	int arr[] = {3, 1, 2, 5, 4};
	int n = sizeof(arr)/sizeof(arr[0]);
	int K = 10;
	vector<int>sb;
	recFunc(0, sb, arr, n, K, 0);

	return 0;
	
}

/*

Output:
3 1 2 4 
3 2 5 
1 5 4 

*/