#include<bits/stdc++.h>
using namespace std;
int n,m;
bool cmp(int a,int b){
	if(a%m==b%m){
		if(a&1==1 && b&1==1){
			return a>b;
		}
		else if((a&1)==0 && (b&1)==0){
			return a<b;
		}
		else{
			return a&1==1;
		}
	}
	return a%m < b%m;
}
int main(){
	while(cin>>n>>m){
		if(m==0 && n==0){
			break;
		}
		int q[n];
		memset(q,0,sizeof q);
		for(int i=0;i<n;i++){
			scanf("%d",&q[i]);
		}
		cout<<n<<" "<<m<<endl;
		sort(q,q+n,cmp);
		for(int i=0;i<n;i++){
			cout<<q[i]<<endl;
		}
	}
	cout<<"0 0"<<endl;
}