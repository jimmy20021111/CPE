#include<bits/stdc++.h>
using namespace std;
int main(){
	char c;
	int cot=0;
	while(cin.get(c)){	
		if(c=='"'){
			cot++;
			if(cot%2==1){
				cout<<"``";
			}
			else{
				cout<<"''";
			}
		}
		else{
			cout<<c;
		}
	}
}