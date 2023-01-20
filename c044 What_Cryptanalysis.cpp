#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,maxx=0;
	cin>>n;
	string line;
	int q[30];
	memset(q,0,sizeof q);
	for(int i=0;i<=n;i++){
		getline(cin,line);
		for(int j=0;j<line.length();j++){
			if(line[j]>='A' && line[j]<='Z'){
				q[line[j]-'A']++;
				maxx=max(maxx,q[line[j]-'A']);
			}
			else if(line[j]>='a' && line[j]<='z'){
				q[line[j]-'A'-32]++;
				maxx=max(maxx,q[line[j]-'A'-32]);
			}
			else{
				continue;
			}
		}
	}
	for(int i=maxx;i>=1;i--){
		for(int j=0;j<26;j++){
			if(q[j]==i){
				char b;
				b='A'+j;
				cout<<b<<" "<<i<<endl;
			}
		}
	}
}