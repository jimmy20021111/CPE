#include<bits/stdc++.h>
using namespace std;
string dir[1050];
int main(){
	int n;
	while(cin>>n && n!=0){
		for(int i=0;i<n;i++){
			cin>>dir[i];
		}
		int top=1,N=2,W=3,bottom=6,S=5,E=4;
		for(int i=0;i<n;i++){
			int t1=0,t2=0,t3=0,t4=0;
			if(dir[i]=="north"){
				t1=top;
				t2=N;
				t3=bottom;
				t4=S;
				top=t4;
				N=t1;
				bottom=t2;
				S=t3;
			}
			else if(dir[i]=="east"){
				t1=top;
				t2=E;
				t3=bottom;
				t4=W;
				top=t4;
				E=t1;
				bottom=t2;
				W=t3;
			}
			else if(dir[i]=="west"){
				t1=top;
				t2=E;
				t3=bottom;
				t4=W;
				top=t2;
				E=t3;
				bottom=t4;
				W=t1;
			}
			else if(dir[i]=="south"){
				t1=top;
				t2=N;
				t3=bottom;
				t4=S;
				top=t2;
				N=t3;
				bottom=t4;
				S=t1;
			}
			
		}
		cout<<top<<endl;
	}
}