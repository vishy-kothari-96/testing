#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t>0){
		int n,k;
		cin>>n>>k;
		int a[1000000];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int count=1;
		int val=0;
		for(int val=0;val<n-1;val++){
			if(count==k){count=(count%k)+1;}
			
			if(a[val]==-1){
				if(a[val]==a[val+1])
				a[val]=count++;
			}
			else{
				if(a[val]<=k){continue;}
				else{cout<<"NO"<<endl;break;}
			}
		}
		if(val==m){}
		--t;
	}
	return 0;
}