#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	while(cin>>n){
		int ty=1,ans=n,cot=0;
		while(true){
			ans+=n/3;
			n=n/3+n%3;
			if(n<3){
				break;
			}
		}
		if(n==2){
			ans++;
		}
		cout<<ans<<endl;
	}
}