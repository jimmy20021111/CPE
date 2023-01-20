#include<bits/stdc++.h>
using namespace std;
int main(){
	string line[105];
	int n=0,maxx=0;
	while(getline(cin,line[n])){
		if(line[n].length()>maxx){
			maxx=line[n].length();
		}
		n++;
	}
	for(int j=0;j<maxx;j++){
		for(int i=n-1;i>=0;i--){
			cout<<line[i][j];
			if(line[i].length()>j){
				cout<<line[i][j];
			}
			else{
				cout<<" ";
			}
		}
		cout<<"\n";
	}
}