#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t>0){
		int n;
		cin>>n;
		long long int c;
		cin>>c;
		int a[101];
		for(int i=0;i<n;i++){
			cin>>a[i];
		}
		int i=0;
		while(n>0){
			c-=a[i];
			--n;
			++i;
		}
		if(c>=0){
			cout<<"Yes"<<endl;
		}
		else{
			cout<<"No"<<endl;
		}
		--t;
	}
	return 0;
}