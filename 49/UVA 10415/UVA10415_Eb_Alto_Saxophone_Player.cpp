#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	string line;
	int finger[11],a[11];
	map<char,vector<int>>mp;
	mp['c']={0,1,1,1,0,0,1,1,1,1};
	mp['d']={0,1,1,1,0,0,1,1,1,0};
	mp['e']={0,1,1,1,0,0,1,1,0,0};
	mp['f']={0,1,1,1,0,0,1,0,0,0};
	mp['g']={0,1,1,1,0,0,0,0,0,0};
	mp['a']={0,1,1,0,0,0,0,0,0,0};
	mp['b']={0,1,0,0,0,0,0,0,0,0};
	mp['C']={0,0,1,0,0,0,0,0,0,0};
	mp['D']={1,1,1,1,0,0,1,1,1,0};
	mp['E']={1,1,1,1,0,0,1,1,0,0};
	mp['F']={1,1,1,1,0,0,1,0,0,0};
	mp['G']={1,1,1,1,0,0,0,0,0,0};
	mp['A']={1,1,1,0,0,0,0,0,0,0};
	mp['B']={1,1,0,0,0,0,0,0,0,0};
	cin.ignore();
	while(t--){
		getline(cin,line);
		memset(finger,0,sizeof finger);
		memset(a,0,sizeof a);
		for(int i=0;i<line.length();i++){
			for(int j=0;j<10;j++){
				if(mp[line[i]][j]==1){
					if(a[j]==1){
						continue;
					}
					else{
						finger[j]++;
						a[j]=1;
					}
				}
				else{
					a[j]=0;
				}
			}
		}
		for(int i=0;i<10;i++){
			if(i){
				cout<<" ";
			}
			cout<<finger[i];
		}
		cout<<"\n";
	}
}