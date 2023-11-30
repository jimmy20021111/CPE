#include<bits/stdc++.h>
using namespace std;
int div(int n,int arr[],int len){
	len=0;
	while(n!=0){
		arr[len]=n%10;
		n/=10;
		len++;
	}
	return len;
}
int main(){
	long long a,b;
	while(cin>>a>>b && (a!=0 || b!=0)){
		int lena,lenb,ans=0;
		int A[100]={0},B[100]={0},sum[105]={0};
		lena=div(a,A,0);
		lenb=div(b,B,0);
		int lenM=max(lena,lenb);
		for(int i=0;i<lenM;++i){
			sum[i]+=(A[i]+B[i]);
			if(sum[i]>=10){
				sum[i]-=10;
				sum[i+1]++;
				ans++;
			}
		}
		if(ans==0){
			cout<<"No carry operation."<<endl;
		}
		else if(ans==1){
			cout<<"1 carry operation."<<endl;
		}
		else{
			printf("%d carry operations.\n",ans);
		}
	}
}
