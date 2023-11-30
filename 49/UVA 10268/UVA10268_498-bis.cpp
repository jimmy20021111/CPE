#include<bits/stdc++.h>
using namespace std;
int a[1000000];
int derivative(int x,int max){
	long long sum=0;
	int exp=1;
	for(int i=max-1;i>=0;i--){
		sum+=a[i]*exp*(max-i);
		exp*=x;
	}
	return sum;
}
int main(){
	int x;
	while(cin>>x){
		int n;
		for(n=0;;n++){
			scanf("%d",&a[n]);
			if(getchar()=='\n'){
				break;
			}
		}
		printf("%d\n",derivative(x,n));
	}
}