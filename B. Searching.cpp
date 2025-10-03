#include<bits/stdc++.h>
using namespace std;
int main(){
	 int n;
	 cin>>n;
	 long long a[n];
	 for(int i=0;i<n;i++){
		cin>>a[i];
	 }

      long long s;
	 cin>>s;

	 long long found=-1;
	 for(int i=0;i<=n;i++){

		if(s==a[i]){
		found=i;
		break;
		}
	 }
	   if (found != -1)cout<<found;
else
	cout<<"-1";
return 0;
}
