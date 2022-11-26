#include<bits/stdc++.h>
using namespace std;

main(){
	int n,cnt=0;
	cin>>n;
	for(int i=0;i<n;i++){
		char s[5];
		string h,m;
		cin>>s>>h>>m;
		char cors[]="send";
		if(s!=cors){
			cnt++;
			cout<<s<<"\n";
		}
	}

}
