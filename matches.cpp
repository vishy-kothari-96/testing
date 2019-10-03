#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	int a1[]={6,2,5,5,4,5,6,3,7,6};
	while(t>0){
			long long int a,b,sum,n1,sum1=0,r;
			cin>>a>>b;
			sum=a+b;
			n1=sum;
			while(n1!=0){
				r=n1%10;
				sum1+=a1[r];
				n1=n1/10;
			}
			cout<<sum1<<endl;
			t--;
	}
	return 0;
}