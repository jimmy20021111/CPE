#include<bits/stdc++.h>
using namespace std;
int main(){
	int kase,cot=1;
	cin>>kase;
	while(kase--){
		string s1,s2;
		long long a1=0,a2=0;
		cin>>s1>>s2;
		for(int i=0;i<s1.length();i++){
			a1+=(s1[i]-'0')*pow(2,s1.length()-i-1);
		}
		for(int i=0;i<s2.length();i++){
			a2+=(s2[i]-'0')*pow(2,s2.length()-i-1);
		}
		while(a1!=0 && a2!=0){
			if(a1>=a2){
				a1%=a2;
			}
			else{
				a2%=a1;
			}
		}
		if(max(a1,a2)==1){
			cout<<"Pair #"<<cot++<<": Love is not all you need!"<<endl;
		}
		else{
			cout<<"Pair #"<<cot++<<": All you need is love!"<<endl;
		}
	}
}