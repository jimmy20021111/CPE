#include<bits/stdc++.h>
using namespace std;
long long n,a[1000005],mid1,mid2,cot;
int main(){
	while(cin>>n){
		memset(a,0,sizeof a);
		mid1=0;
		mid2=0;
		cot=0;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		sort(a,a+n);
		mid1=a[n/2];
		mid2=a[(n-1)/2];
		for(int i=0;i<n;i++){
			if(a[i]==mid1 || a[i]==mid2){
				cot++;
			}
		}
		cout<<mid2<<" "<<cot<<" "<<mid1-mid2+1<<endl;
		}
	}