#include<bits/stdc++.h>
using namespace std;
int main(){
	string n;
	while(cin>>n && n!="0"){
		int sum[2]={0};
		for(int i=0;i<n.length();i++){
			sum[i%2]+=n[i]-'0';
		}
		int ans=abs(sum[0]-sum[1]);
		if(ans%11==0){
			cout<<n<<" is a multiple of 11."<<endl;
		}
		else{
			cout<<n<<" is not a multiple of 11."<<endl;
		}
	}
}