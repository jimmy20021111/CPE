#include<bits/stdc++.h>
using namespace std;
int prime[1000005];
void Prime(){
	for(int i=0;i<1000005;i++){
		prime[i]=1;
	}
	prime[0]=0;
	prime[1]=0;
	for(int i=0;i<1000005;i++){
		if(prime[i]==1){
			for(int j=i+i;j<1000005;j+=i){
				prime[j]=0;
			}
		}
	}
}
int main(){
	Prime();
	string n;
	while(cin>>n){
		long long a=stoi(n);
		if(prime[a]==0){
			cout<<n<<" is not prime."<<endl;
		}
		else{
			string s=n;
			reverse(s.begin(),s.end());
			if(s==n){
				cout<<a<<" is prime."<<endl;
				continue;
			}
			long long b=stoi(s);
			if(prime[b]==0){
				cout<<a<<" is prime."<<endl;
			}
			else{
				cout<<a<<" is emirp."<<endl;
			}
		}
	}
}