#include<bits/stdc++.h>
using namespace std;
int a[3005];
int main(){
	int n;
	while(cin>>n){
		set<int> b;
		memset(a,0,sizeof a);
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=1;i<n;i++){
			int d=abs(a[i]-a[i-1]);
			if(d<n && d>0){
				b.insert(d);
			}
		}
		if(b.size()==n-1){
			cout<<"Jolly"<<endl;
		}
		else{
			cout<<"Not jolly"<<endl;
		}
	}
}