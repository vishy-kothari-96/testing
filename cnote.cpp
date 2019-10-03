#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t>0){
		long long int x,y,k,n;
		cin>>x>>y>>k>>n;
		multimap<long long int,long long int>a;
		for(int i=0;i<n;i++){
			long long int p,c;
			cin>>p>>c;
			a.insert(pair<long long int,long long int>(p,c));
		}
		multimap<long long int,long long int>::iterator itr;
		bool f=false;
		for(itr=a.begin();itr!=a.end();++itr){
			if(((itr->second)<=k)&& (itr->first)>=(x-y)){cout<<"LuckyChef"<<endl;f=true;break;}
			else{f=false;continue;}
		}
		if(f==false){
			cout<<"UnluckyChef"<<endl;
		}
	--t;
	}
	return 0;
}
