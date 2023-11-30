#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,kase=1;
	cin>>n;
	while(n--){
		int x0,y0,x1,y1,ans1=0,ans2=0,ans=0;
		cin>>x0>>y0>>x1>>y1;
		ans1=(1+x0+y0)*(x0+y0)/2+x0-1;
		ans2=(1+x1+y1)*(x1+y1)/2+x1-1;
		ans=ans2-ans1;
		cout<<"Case "<<kase++<<": "<<ans<<endl;
	}
}