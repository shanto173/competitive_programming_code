#include <bits/stdc++.h>
using namespace std;


/*
    Shanto ~~ A peaceful soul
*/


int main()
{
	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		int arr[k];
		for (int i = 0; i < k; ++i)
		{
			cin>>arr[i];
		}
		string str[n];

		for (int i = 0; i < n; ++i)
		{
			cin>>str[i];
		}
		long long int ans = 0;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < k; ++j)
			{
				if(str[i][j] == '0'){
					ans = ans + 0;
				}
				else{
					ans = ans + arr[j];
				}
				
			}
			cout<<ans<<endl;
			ans = 0;

			
		}

	}
}




