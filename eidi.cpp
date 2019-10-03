#include<bits/stdc++.h>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t>0){
		//cout<<"HELLO";
		int a1,a2,a3,c1,c2,c3;
		cin>>a1>>a2>>a3>>c1>>c2>>c3;
		multimap<int,int>match;
		match.insert(pair<int,int>(a1,c1));
		match.insert(pair<int,int>(a2,c2));
		match.insert(pair<int,int>(a3,c3));
		//sort(match.begin(),match.end());
		multimap <int, int> :: iterator itr;
int count=0;		
    for (itr = match.begin();count<match.size()-1; ++itr) 
    { 
       // cout  <<  '\t' << itr->first 
         //     <<  '\t' << itr->second << '\n';
		multimap <int, int> :: iterator j;
		j=itr;
		j++;
		count++;
		//cout  <<  '\t' << j->first 
         //     <<  '\t' << j->second << '\n';
			  
		if(itr->first<j->first){
			if(itr->second<j->second){continue;}
			else{cout<<"NOT FAIR"<<endl;break;}
		}
		else{
			if(itr->second==j->second){continue;}
			else{
				cout<<"NOT FAIR"<<endl;break;
			}
		}
	}
	//cout<<endl<<endl;
	++itr;
	//cout<<itr->first<<endl;
	//cout<<itr->second<<endl;
	if(itr==match.end()){cout<<"FAIR"<<endl;}
    cout << endl;	
		t--;
	}
return 0;}