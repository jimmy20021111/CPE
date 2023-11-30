#include<bits/stdc++.h>
using namespace std;
string day[7]={"Saturday","Sunday","Monday","Tuesday","Wednesday","Thursday","Friday"};
int month[11]={31,28,31,30,31,30,31,31,30,31,30};
int main(){
	int t;
	cin>>t;
	while(t--){
		int m,d,total=0;
		cin>>m>>d;
		for(int i=0;i<m-1;i++){
			total+=month[i];
		}
		total+=d;
		cout<<day[(total-1)%7]<<endl;
	}
}