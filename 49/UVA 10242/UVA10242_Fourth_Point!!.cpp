#include<bits/stdc++.h>
using namespace std;
int main(){
	double x1,x2,x3,y1,y2,y3;
	double x[4],y[4];
	while(cin>>x[0]>>y[0]>>x[1]>>y[1]>>x[2]>>y[2]>>x[3]>>y[3]){
		double xa=0,ya=0;
		if(x[1]==x[2] && y[1]==y[2]){
			xa=x[0]+(x[3]-x[1]);
			ya=y[0]+(y[3]-y[1]);
		}
		else if(x[0]==x[2] && y[0]==y[2]){
			xa=x[1]+(x[3]-x[0]);
			ya=y[1]+(y[3]-y[0]);
		}
		else if(x[0]==x[3] && y[0]==y[3]){
			xa=x[1]+(x[2]-x[0]);
			ya=y[1]+(y[2]-y[0]);
		}
		else if(x[1]==x[3] && y[1]==y[3]){
			xa=x[0]+(x[2]-x[1]);
			ya=y[0]+(y[2]-y[1]);
		}
		printf("%.3f %.3f\n",xa,ya);
	}
}