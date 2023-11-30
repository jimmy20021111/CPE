#include<bits/stdc++.h>
using namespace std;
long long fib[40];
vector<int> a;
long long n,maxlen=0;
void Fib(){
	fib[0]=1;
	fib[1]=2;
	for(int i=2;i<40;i++){
		fib[i]=fib[i-1]+fib[i-2];
	}
}
int main(){
	Fib();
	int kase;
	cin>>kase;
	while(kase--){
		a.clear();
		int ty=0;
		cin>>n;
		long long k=n;
		for(int i=40;i>=0;i--){
			if(n==fib[i]){
				a.push_back(1);
				for(int j=0;j<i;j++){
					a.push_back(0);
				}
				break;
			}
			if(n<fib[i]){
				if(n>fib[i-1]){
					n=n-fib[i-1];
					a.push_back(1);
					ty=1;
				}
				else if(n<fib[i-1]){
					if(ty==1){
						a.push_back(0);
					}
				}
				else{
					continue;
				}
				
			}
		}
		cout<<k<<" = ";
		for(int i=0;i<a.size();i++){
			cout<<a[i];
		}
		cout<<" (fib)"<<endl;
	}
}