#include<bits/stdc++.h>
using namespace std;
int a[105];
int main(){
	int kase;
	cin>>kase;
	while(kase--){
		memset(a,0,sizeof a);
		long long n,p,cot=0;
		cin>>n;
		cin>>p;
		for(int i=0;i<p;i++){
			cin>>a[i];
		}
		for(int i=1;i<=n;i++){
			for(int j=0;j<p;j++){
				if(i%a[j]==0){
					if(i%7!=0 && i%7!=6){
						cot++;
						break;
					}
				}
			}
		}
		cout<<cot<<endl;
	}
}