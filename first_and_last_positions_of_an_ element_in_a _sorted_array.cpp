// Find first and last positions of an element in a sorted array

#include<bits/stdc++.h>
using namespace std;

int findInd(int A[],int n,int m,int togg){
	int low = 0;
	int high = n-1;
	int ans = -1;
	while(low<=high){
		int mid = (low+high)/2;
		if(A[mid] < m){
			low = mid+1;
		}
		else if(A[mid] > m){
			high = mid-1;
		}
		else{
			ans = mid;
			if(togg==-1){
				high = mid + togg;
			}
			else{
				low = mid + togg;
			}
		}
	}
	return ans;
}

int main(){
	
	int t;
	cin>>t;
	while(t--){
		int n,m;
		cin>>n>>m;
		int A[n];
		for (int i = 0; i < n; ++i)
		{
			cin>>A[i];
		}
		int indx1 = findInd(A,n,m,-1);
		int indx2 = findInd(A,n,m,1);

		if(indx1 == -1){
			cout<<"-1"<<endl;
		}
		else{
			cout<<indx1<<" "<<indx2<<endl;
		}
	}


}