#include<bits/stdc++.h>
using namespace std;
int a[1005];
typedef struct{
	int ascii;
	int cot;
}fre;
bool cmp(fre a,fre b){
	if(a.cot==b.cot){
		return a.ascii>b.ascii;
	}
	else{
		return a.cot<b.cot;
	}
}
int main(){
	string line;
	int maxx=1005;
	while(getline(cin,line)){
		memset(a,0,sizeof a);
		fre q[1005];
		for(int i=0;i<line.length();i++){
			a[line[i]-' ']++;
			maxx=max(a[line[i]-' '],maxx);
		}
		int k=0;
		for(int i=1;i<=maxx;i++){
			for(int j=0;j<100;j++){
				if(a[j]==i){
					q[k].ascii=' '+j;
					q[k].cot=i;
					k++;
				}
			}
		}
		sort(q,q+k,cmp);
		for(int i=0;i<k;i++){
			cout<<q[i].ascii<<" "<<q[i].cot<<endl;
		}
	}
}