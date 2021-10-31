#include<bits/stdc++.h>
using namespace std;
int main(){
	long long sum[51];
	sum[1]=1,sum[2]=2,sum[3]=4;
	for(int i=4;i<=50;i++){
		sum[i]=sum[i-3]+sum[i-2]+sum[i-1]; 
	}
	int n;
	while(cin>>n){
		cout<<sum[n]<<endl;
	}
}
