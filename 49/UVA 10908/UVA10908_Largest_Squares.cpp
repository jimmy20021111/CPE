#include<bits/stdc++.h>
using namespace std;
int main(){
	int t;
	cin>>t;
	string map[105];
	while(t--){
		int m,n,q;
		cin>>m>>n>>q;
		for(int i=0;i<m;i++){
			cin>>map[i];
		}
		cout<<m<<" "<<n<<" "<<q<<endl;
		while(q--){
			int r,c;
			cin>>r>>c;
			int ans=1;
			for(int i=1;i<=n || i<=m;i++){
				int ty=1;
				for(int j=r-i;j<=r+i;j++){
					for(int k=c-i;k<=c+i;k++){
						if(j<0 || j>=m || k<0 || k>=n){
							ty=0;
							break;
						}
						if(map[j][k]!=map[r][c]){
							ty=0;
							break;
						}
					}
				}
				if(ty==1){
					ans+=2;
				}
				else{
					break;
				}
			}
			cout<<ans<<endl;
		}
	}
}