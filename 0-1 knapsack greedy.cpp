#include<bits/stdc++.h>
using namespace std;
struct item{
	int value,weight;
	item(int value,int weight): value(value),weight(weight)
	{}
};
bool compare(item a,item b){
	float r1 = a.value/a.weight;
	float r2 = b.value/b.weight;
	return r1>r2;
}
int fract_knap(item a[],int w,int n){
	sort(a,a+n,compare);
	int current = 0;     // knapsack current weight
	float final = 0;
	for(int i=0;i<n;i++){
		if((current+a[i].weight)<=w){
			current+=a[i].weight;
			final = final+a[i].value;
		}
		else{
			int remain = w-current;
			final+=a[i].value*((float)remain/a[i].weight);
			break;
		}
	}
	return final;
}
int main(){
	int w = 50;
	item a[] = {{60,10},{100,20},{120,30}};
	int n = sizeof(a)/sizeof(a[0]);
	cout<<fract_knap(a,w,n);
	return 0;
}
