#include<bits/stdc++.h>
using namespace std;




/* Approach (1)
	Time complexcity O(n^2logn); 
	space complexcity O(n);
*/

int main(){
	int n;
	cin>>n;
	int a[n];
	int sum1 = 0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum1 += a[i];
	}
	int q;
	cin>>q;
	sort(a,a+n);
	while(q--){
		int x;
		cin>>x;
		int sum2 = 0;

		int idx = upper_bound(a,a+n,x)-a; 
		for(int i=idx;i<n;i++){
			sum2 += a[i]; 
		}

		cout<<(idx)<<" "<<(sum1-sum2)<<endl;
	}


}


/* Approach (2)
	Time complexcity O(nlogn); 
	space complexcity O(n^2);
*/


int main(){
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	int q;
	cin>>q;
	sort(a,a+n);
	int preCompute[n+1];

	preCompute[0] = 0;
	for(int i=1;i<=n;i++){
		preCompute[i] = preCompute[i-1] + a[i-1];
	}

	while(q--){
		int x;
		cin>>x;

		int idx = upper_bound(a,a+n,x) - a;
		cout<<idx<<" "<<preCompute[idx]<<endl;
	}


}