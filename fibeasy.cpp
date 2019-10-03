#include<bits/stdc++.h>
using namespace std;
#define ulli unsigned long long int
#define lli long long int
	int main(){
	int a[120];
	a[0]=0;
	a[1]=1;
	for(int i=2;i<60;i++){
	a[i]=((a[i-1]%10)+a[i-2]%10)%10;
	}
	lli t;ulli n;
	cin>>t;
	while(t--){
	cin>>n;
	ulli x=pow(2.0,(ulli)log2(n));
	if(x==60){x=60;}
	else{x=x%60;}
	cout<<a[x-1]<<endl;
	}
	return 0;
}