#include<bits/stdc++.h>
using namespace std;



int main(){
		
	int t;
	cin>>t;
	while(t--){
		string str;
		cin>>str;
		int i=0;
		int count = 0;
		int n = str.size();
		while(i<n){
			int j,m=0;
			for (j = i; (str[j] == '1'); j++)
			{
				m = 1;

			}
			if(m==1){
				count++;
				i = j;
			}
			m = 0;
			i++;
		}
		cout<<count<<endl;
	}


}

