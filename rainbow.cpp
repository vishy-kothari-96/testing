#include<bits/stdc++.h>
using namespace std;
#define lli long long int
int main()
{ 	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t1,n;
	cin>>t1;
	while(t1>0){
		//cout<<t1<<endl;
		cin>>n;
		set<int>a;
		int max;
		//bool odd=false,even=false;
		int z[101]={0};
		int z1[101];
		set <int> :: iterator itr;
		if(n<7){cout<<"no"<<endl;}
		else{
			 for(int i=0;i<n;i++){
				//int s;
				cin>>z[i];
				z1[i]=z[i];
				a.insert(z[i]);
				//a.push_back(s);
			 }
			 sort(z1,z1+n);
			 max=z1[n-1];
			 //cout<<max<<"MAX ";
			 int sum=0;
			 int real=(max*(max+1))/2;
			 //}
			 for (itr = a.begin(); itr != a.end(); ++itr) 
				{ 
					sum+=(*itr); 
					//cout<<*itr<<" ";
				}
			//cout<<sum<<" "<<real<<endl;
			 if(sum==real){
				int a1=0,a2=n-1;
				//cout<<a1<<endl;
				//cout<<a2<<endl;
				if(n&1){if(z[n/2]!=max){cout<<"no"<<endl;}//break;}
				else{while(a1!=a2){
					if(z[a1]==z[a2]){
					a1++;
					a2--;
									}
					else{cout<<"no"<<endl;break;}
						}
						if(a1==a2){cout<<"yes"<<endl;}
				  }
				}
				else{if((z[(n/2)-1]!=max)||(z[n/2]!=max)){cout<<"no"<<endl;}//break;}
				else{while(a1<=a2){
					if(z[a1]==z[a2]){
					a1++;
					a2--;
									}
					else{cout<<"no"<<endl;break;}
						}
						if(a1>a2){cout<<"yes"<<endl;}
				 }
				}
			   }
			  else{cout<<"no"<<endl;}
			}	
			/*
			if(n&1){
				odd=true;
			for(int i=0;i<=n/2;i++){
					z[a.at(i)]=1;
				}
				max=a.at(n/2);
			}
			else{even=true;
				
				for(int i=0;i<n/2;i++){
					z[a.at(i)]=1;
				}
				max=a.at((n/2)-1);
			}
			
			int a1=0,a2=n-1;
			cout<<a1<<endl;
			cout<<a2<<endl;
			if(!(n&1)){
			while(a1!=a2){
					int x1=abs(z[a1]-z[a1+1]);
					int x2=abs(z[a2]-z[a2-1]);
					bool diff=true;
					if(x1==x2){
						if(x1>=2){diff=false;}
					}
				if((z[a1]==z[a2])&&diff){
					a1++;
					a2--;
				}
				else{break;}
			  }
			}
			else{
				while(a1!=a2){
					int x1=abs(z[a1]-z[a1+1]);
					int x2=abs(z[a2]-z[a2-1]);
					int diff=abs(x1-x2);
				if((z[a1]==z[a2])&&(diff<2)){
					a1++;
					a2--;
				}
				else{break;}
			  }
			}
			if(a1!=a2&&check(z,even,max)){cout<<"no"<<endl;}
		}
		*/
		--t1;
	}
	return 0;
 }
/*
bool check(int a[],bool p,int max){
	if(p){
		for(int i=0;i<)
	}
	else{
		
	}
}
*/