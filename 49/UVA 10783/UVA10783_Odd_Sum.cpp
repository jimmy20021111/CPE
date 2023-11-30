#include<bits/stdc++.h>
using namespace std;
int main(){
	int t,kase=1;
	cin>>t;
	while(t--){
		int a,b,ans=0;
		cin>>a>>b;
		for(int i=a;i<=b;i++){
			if(i%2==1){
				ans+=i;
			}
		}
		cout<<"Case "<<kase++<<": "<<ans<<endl;
	}
}