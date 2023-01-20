#include<bits/stdc++.h>
using namespace std;
int main(){
	long long n,m;
	while(cin>>n>>m && (n!=0 || m!=0)){
		long long ty=0,cot=0,temp=0;
		while(n!=0 || m!=0){
			if((n%10)+(m%10)+temp>=10){
				cot++;
				temp=1;
			}
			else{
				temp=0;
			}
			n=n/10;
			m=m/10;
		}
		if(cot==0){
			cout<<"No carry operation."<<endl;
		}
		else if(cot==1){
			cout<<"1 carry operation."<<endl;
		}
		else{
			cout<<cot<<" carry operations."<<endl;
		}
		cot=0;
	}
}