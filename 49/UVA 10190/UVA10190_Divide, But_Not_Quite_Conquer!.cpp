#include<bits/stdc++.h>
using namespace std;
vector<long long> a;
int main(){
	long long n,m;
	while(cin>>n>>m){
		if(m>n || n<=1 ||m<=1){
			cout<<"Boring!"<<endl;
			continue;
		}
		a.clear();
		int ty=1;
		a.push_back(n);
		while(n!=1){
			if(n%m==0){
				n/=m;
				a.push_back(n);
			}
			else{
				ty=0;
				break;
			}
		}
		if(ty==1){
			for(int j=0;j<a.size();j++){
				cout<<a[j];
				if(j!=a.size()-1){
					cout<<" ";
				}
			}
			cout<<endl;
		}
		else{
			cout<<"Boring!"<<endl;
		}
	}
}