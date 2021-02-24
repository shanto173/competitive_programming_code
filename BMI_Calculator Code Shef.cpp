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
		int M,H;
		cin>>M>>H;

		int BMi = (M)/(H*H);
		if(BMi <= 18){
			cout<<1<<endl;
		}
		else if(BMi>18 and BMi<= 24){
			cout<<2<<endl;
		}
		else if(BMi>24 and BMi<= 29){
			cout<<3<<endl;
		}
		else{
			cout<<4<<endl;
		}
	}
}