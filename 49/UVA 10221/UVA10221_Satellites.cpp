#include<bits/stdc++.h>
using namespace std;
int main(){
	double s,a,ans1,ans2;
	string angle;
	while(cin>>s>>a>>angle){
		s+=6440.0;
		ans1=0;
		ans2=0;
		if(angle=="min"){
			a/=60.0;
		}
		if(a>180.0){
			a=360.0-a;
		}
		ans1=abs(s*2.0*M_PI*(a/360.0));
		ans2=abs(2.0*(s*(sin(a/2.0*M_PI/180.0))));
		printf("%.6f %.6f\n",ans1,ans2);
	}
}