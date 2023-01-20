#include<bits/stdc++.h>
using namespace std;
int main(){
	int kase;
	cin>>kase;
	while(kase--){
		double n,p,i;
		cin>>n>>p>>i;
		if(p==0.0000){
			cout<<0.0000<<endl;
		}
		printf("%.4lf\n",(pow((1-p),i-1)*p)/(1-(pow(1-p,n))));
	}
}