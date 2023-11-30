#include<bits/stdc++.h>
using namespace std;
char a[105][105];
int gox[8]={1,1,0,-1,-1,-1,0,1};
int goy[8]={0,1,1,1,0,-1,-1,-1};
int main(){
	long long n,m,kase=0;
	while(cin>>n>>m && n!=0 && m!=0){
		memset(a,0,sizeof a);
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cin>>a[i][j];
			}
		}
		if(kase!=0){
			cout<<"\n";
		}
		cout<<"Field #"<<++kase<<":"<<endl;
		int cot;
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
				cot=0;
				for(int k=0;k<8;k++){
					if(a[i+gox[k]][j+goy[k]]=='*'){
						cot++;
					}
				}
				if(a[i][j]=='*'){
					cout<<"*";
				}
				else{
					cout<<cot;
				}
			}
			cout<<"\n";
		}
	}
}