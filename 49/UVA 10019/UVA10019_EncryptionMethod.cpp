#include<bits/stdc++.h>
using namespace std;
int main(){
	int kase;
	cin>>kase;
	while(kase--){
		int n;
		cin>>n;
		int cot=0,cnt=0;
		for(int i=n;i>0;i/=2){
			cot+=i%2;
		}
		while(n!=0){
			int temp=n%10;
			for(int i=temp;i>0;i/=2){
				cnt+=i%2;
			}
			n/=10;
		}
		cout<<cot<<" "<<cnt<<endl;
	}
}