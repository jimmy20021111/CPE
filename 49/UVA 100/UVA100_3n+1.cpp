#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m,cot,maxx;
	while(cin>>n>>m){
		int a=min(n,m);
		int b=max(m,n);
		maxx=0;
		for(int i=a;i<=b;i++){
			cot=1;
			int t=i;
			while(true){
				if(t==1){
					break;
				}
				if(t%2==1){
					t=3*t+1;
					cot++;
				}
				else{
					t/=2;
					cot++;
				}
			}
			maxx=max(cot,maxx);
		}
		cout<<n<<" "<<m<<" "<<maxx<<endl;
	}
}