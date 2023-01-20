#include<bits/stdc++.h>
using namespace std;
int a[3005];
vector<int> b;
int main(){
	int n,ty;
	while(cin>>n){
		ty=0;
		memset(a,0,sizeof a);
		b.clear();
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=1;i<n;i++){
			b.push_back(abs(a[i]-a[i-1]));
		}
		sort(b.begin(),b.end());
		for(int i=0;i<n-1;i++){
			if(b[i]!=i+1){
				ty=1;
				break;
			}
		}
		if(ty==1){
			cout<<"Not jolly"<<endl;
		}
		else if(ty==0){
			cout<<"Jolly"<<endl;
		}
	}
}