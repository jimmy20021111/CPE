#include<bits/stdc++.h>
using namespace std;
long long a[505];
int main(){
	int kase;
	cin>>kase;
	while(kase--){
		memset(a,0,sizeof a);
		long long n,temp=0,ans=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		if(n%2==1){
			temp=a[n/2];
		}
		else{
			temp=(a[n/2]+a[n/2-1])/2;
		}
		for(int i=0;i<n;i++){
			ans+=abs(temp-a[i]);
		}
		cout<<ans<<endl;
	}
}