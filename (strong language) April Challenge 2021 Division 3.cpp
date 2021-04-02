#include<bits/stdc++.h>
using namespace std;

	


int main(){
	

	int t;
	cin>>t;
	while(t--){
		int n,k;
		cin>>n>>k;
		string str;
		cin>>str;
		int count = 0;
		int i=0,j=0;
		bool b = false;
		while(j<n){
			if(str[j] == '*'){
				count++;
			}
			if(j-i+1 < k){
				j++;
			}
			else if(j-i+1 == k){
				if(count == k){
					b = true;
					break;
				}
				else{
					if(str[i] == '*'){
						count--;
					}
					i++;
					j++;
				}
			}
		}
		if(b){
			cout<<"YES"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}

	}



}