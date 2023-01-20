#include<bits/stdc++.h>
using namespace std;
int main(){
	int kase;
	cin>>kase;
	while(kase--){
		long long n,cot=0,cnt=0;
		cin>>n;
		long long k=n;
		while(k!=0){
			if(k%2==1){
				cot++;
				k/=2;
			}
			else{
				k/=2;
			}
		}
		while(n!=0){
			int temp=n%10;
			if(temp==1 || temp==2 || temp==4 || temp==8){
				cnt++;
			}
			else if(temp==3 || temp==5 || temp==6 || temp==9){
				cnt+=2;
			}
			else if(temp==7){
				cnt+=3;
			}
			n/=10;
		}
		cout<<cot<<" "<<cnt<<endl;
	}
	return 0;
}