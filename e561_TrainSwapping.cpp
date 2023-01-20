#include<bits/stdc++.h>
using namespace std;
int a[100000];
int main(){
	int kase;
	cin>>kase;
	memset(a,0,sizeof a);
	while(kase--){
		int n,cot=0;
		cin>>n;
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				if(a[i]>a[j]){
					swap(a[i],a[j]);
					cot++;
				}
			}
				
		}
		cout<<"Optimal train swapping takes "<<cot<<" swaps."<<endl;
	}
}