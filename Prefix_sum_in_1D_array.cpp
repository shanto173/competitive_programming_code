#include <bits/stdc++.h>
using namespace std;


/*
    Shanto ~~ A peaceful soul
*/

// prefix sum in 1d array
const int N = 1e5+10;
int a[N];
int pf[N];
int main()
{
	int n;
	cin >> n;
	for (int i = 1; i <= n; ++i)
	{
		cin >> a[i];
		pf[i] = pf[i-1] + a[i];
	}
	int q;
	cin>>q;
	while(q--){
		int l,r;
		cin>>l>>r;
		
		cout<<pf[r] - pf[l-1]<<endl;
	}

}