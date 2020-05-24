#include<bits/stdc++.h>
using namespace std;
// naive method brute force
/*int equilibriumPoint(int a[], int n) {
int i,k;
int flag = 0;
int sum1,sum2;
if(n==1){
    flag = 1;
}
for(i=1;i<n;i++){
    sum1 = 0;
    sum2 = 0;
    for(k=0;k<i;k++){
        sum1+=a[k];
    }
    for(k=i+1;k<n;k++){
        sum2+=a[k];
    }
    if(sum1==sum2)
    {
        flag = 1;
        return i+1;
        break;
    }
}
if(flag == 0)
return -1;
    // Your code here
}
*/
int equilibriumpoint(int a[], int n,int sum){
    int lsum=0;
	int i;
	for(i=0;i<n;i++){
		sum-=a[i];
		if(lsum==sum)
		return i+1;
		lsum+=a[i];
	}
	return -1;	
}
int main(){
	int n;
	cin>>n;
	int a[n];
	int sum=0;
	for(int i=0;i<n;i++){
		cin>>a[i];
		sum+=a[i];
	}
	cout<<equilibriumpoint(a,n,sum);
	return 0;
}
