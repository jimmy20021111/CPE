#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,kase=1;
	while(cin>>n){
		int a[n];
		int ty=1;
		vector<int> q;
		for(int i=0;i<n;i++){
			cin>>a[i];
			if(a[i]<1){
				ty=0;
			}
			if(i!=0 && a[i]<=a[i-1]){
				ty=0;
			}
		}
		int x=0;
		if(ty){
			for(int i=0;i<n;i++){
				for(int j=i;j<n;j++){
					x=a[i]+a[j];
					q.push_back(x);
					if(count(q.begin(),q.end(),x)>1){
						ty=0;
						break;
					}
				}
				if(ty==0){
					break;
				}
			}
		}
		if(ty){
			printf("Case #%d: It is a B2-Sequence.\n",kase++);
		}
		else{
			printf("Case #%d: It is not a B2-Sequence.\n",kase++);
		}
		cout<<"\n";
	}
}