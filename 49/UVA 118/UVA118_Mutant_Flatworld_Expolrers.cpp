#include<bits/stdc++.h>
using namespace std;
int main(){
	int x,y;
	cin>>x>>y;
	int x0,y0;
	char dir;
	while(cin>>x0>>y0>>dir){
		string s;
		cin>>s;
		int ty=0,tempx,tempy;
		for(int i=0;i<s.length();i++){
			if(dir=='N'){
				if(s[i]=='R'){
					dir='E';
				}
				else if(s[i]=='L'){
					dir='W';
				}
				else if(s[i]=='F'){
					if(y0==y && tempx==x0 && tempy==y0){
						continue;
					}
					else if(y0==y && (tempx!=x0 || tempy!=y0)){
						ty=1;
						tempx=x0;
						tempy=y0;
						break;
					}
					y0+=1;
				}
			}
			else if(dir=='E'){
				if(s[i]=='R'){
					dir='S';
				}
				else if(s[i]=='L'){
					dir='N';
				}
				else if(s[i]=='F'){
					if(x0==x && tempx==x0 && tempy==y0){
						continue;
					}
					else if(x0==x && (tempx!=x0 || tempy!=y0)){
						ty=1;
						tempx=x0;
						tempy=y0;
						break;
					}
					x0+=1;
				}
			}
			else if(dir=='W'){
				if(s[i]=='R'){
					dir='N';
				}
				else if(s[i]=='L'){
					dir='S';
				}
				else if(s[i]=='F'){
					if(x0==0 && tempx==x0 && tempy==y0){
						continue;
					}
					else if(x0==0 && (tempx!=x0 || tempy!=y0)){
						ty=1;
						tempx=x0;
						tempy=y0;
						break;
					}
					x0-=1;
				}
			}
			else if(dir=='S'){
				if(s[i]=='R'){
					dir='W';
				}
				else if(s[i]=='L'){
					dir='E';
				}
				else if(s[i]=='F'){
					if(y0==0 && tempx==x0 && tempy==y0){
						continue;
					}
					else if(y0==0 && (tempx!=x0 || tempy!=y0)){
						ty=1;
						tempx=x0;
						tempy=y0;
						break;
					}
					y0-=1;
				}
			}
		}
		if(ty==1){
			cout<<x0<<" "<<y0<<" "<<dir<<" "<<"LOST"<<endl;
		}
		else{
			cout<<x0<<" "<<y0<<" "<<dir<<endl;
		}
	}
}