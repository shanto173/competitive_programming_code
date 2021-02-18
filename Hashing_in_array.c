#include <bits/stdc++.h>
using namespace std;


/*
    Shanto ~~ A peaceful soul
*/

const int N = 1e7+10;
int hsh[N];

// Hashing in array

int main()
{

	int n;
	cin>>n;
	int a[n];
	for (int i = 0; i < n; ++i)
	{
		cin >> a[i];
		hsh[a[i]]++;
	}

	int q;
	cin>>q;
	while(q--){
		int x;
		cin>>x;
		cout<<hsh[x]<<endl;
	}
}