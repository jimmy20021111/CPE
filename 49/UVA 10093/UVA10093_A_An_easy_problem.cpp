#include<bits/stdc++.h>
using namespace std;
int main(){
	string s;
	while(getline(cin,s)){
		int temp=0,sum=0,mx=1;
		for(int i=0;i<s.length();i++){
			if(s[i]>='0' && s[i]<='9'){
				temp=s[i]-'0';
			}
			else if(s[i]>='A' && s[i]<='Z'){
				temp=s[i]-'A'+10;
			}
			else if(s[i]>='a' && s[i]<='z'){
				temp=s[i]-'a'+36;
			}
			else{
				continue;
			}
			if(temp>mx){
				mx=temp;
			}
			sum+=temp;
		}
		int ty=0;
		for(int i=mx+1;i<=62;i++){
			if(sum%(i-1)==0){
				cout<<i<<endl;
				ty=1;
				break;
			}
		}
		if(ty==0){
			cout<<"such number is impossible!"<<endl;
		}
	}
}