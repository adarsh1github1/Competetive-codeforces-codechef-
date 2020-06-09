#include<iostream>
#include<vector>
#include<set>
#include<map>
#include<utility>
#include<algorithm>
using namespace std;
bool f(int x, int y){
	return x>y;
}
void vector_demo(){
	vector<int> A = {11, 2, 3, 4};
	sort(A.begin(), A.end());
	bool present = binary_search(A.begin(),A.end(), 4);
	bool absent = binary_search(A.begin(),A.end(), 23);
	cout<<present<<endl;
	cout<<absent<<endl;
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(100);
	A.push_back(150);
	vector<int>::iterator it = lower_bound(A.begin(), A.end(), 100);
	// to save time we need not write the whole iterator syntax we could just use auto :-
	auto it2 = upper_bound(A.begin(), A.end(), 100);
	cout<<*it<<" "<<*it2<<endl;
	cout<<it2-it; // O(1) - to get count of that element i.e it
	// to decide how we want to sort a vector
	sort(A.begin(),A.end(), f);
	vector<int>::iterator it3;
	sort(A.begin(),A.end(),f);
	cout<<endl;
	for(it3 = A.begin();it3<A.end();it3++)
	cout<<*it3<<" ";
	cout<<endl;
	// another method to type
	for(int x:A)
	cout<<x<<" ";
	// if we want to change the values of the vector using the x above we coulf just pass the x by reference  	
	for(int &x: A){
		x++;
	}
	cout<<endl;
	for(int x: A)
	cout<<x<<" ";
}
void set_demo(){
	set<int> S;
	// automatically inserts in ascending order --- insert operations are in log(n) time
	S.insert(1);
	S.insert(12);
	S.insert(-4);
	S.insert(3);
	for(int x: S)
	cout<<x<<" ";
	cout<<endl;
	// to find an element
	auto it = S.find(12);
	// if not present it takes the iterator to the end
	if(it == S.end())
	cout<<"not present"<<endl;
	else{
		cout<<"present"<<endl;
		cout<<*it;
	}
	cout<<endl;
	// to find an elemnt greater than or less than any number
	auto it2 = S.lower_bound(3);
	auto it3 = S.upper_bound(3);
	cout<<*it2<<" "<<*it3;
	// if we try to find upper bound or lower bound of an element that is not present it takes iterator to end
	auto it4 = S.upper_bound(34);
	if(it4 == S.end())
	cout<<"\n no such element present";
	// to erase an element from set use erase the op. is done in O(log N) 
	S.erase(-4);
	cout<<endl;
	for(int x : S)
	cout<<x<<" ";
	cout<<endl;
}
void map_demo(){
	// operations take log(n) time
	map<int,int> M;
	M[1] = 100;
	M[2] = -1;
	M[3] = 200;
	M[1000232] = 1;
	cout<<M[1000232]<<" "<<M[3]<<endl;
	map<char,int> C;
	string s = "adarsh Singh";
	for(char x : s)
	C[x]++; // to know the frequency of characters in the name
	cout<<C['a']<<" "<<C['s']<<" "<<C['z']<<endl; 
}
void powerofstl(){
	// Q. need to insert some intervals and find in which interval an element lies
	// we have a set of pairs
	set<pair<int , int>> s;   /// eg - pairs are <3,35> ...etc
	//insering 
	s.insert({2,3});
	s.insert({10,20});
	s.insert({30,400});
	s.insert({401,450});
	// comparision between pairs -- eg. compare {a,b} and {c,d} if a>c then ist pair
	// is greater if a == c then compare b and d ... set inserts pairs in sorted order 
	int point = 403;
	auto it = s.upper_bound({point, INT_MAX});
	if(it == s.begin()){
		cout<<"element not present\n";
		return;
	}
	
	it--;
	pair<int, int > current  = *it;
	if(current.first<= point && point <= current.second)
	cout<<"Elemrnt is present in {"<<current.first<<" ,"<<current.second<<"}"<<endl;
	else
	cout<<"Element not present"<<endl;
}
int main(){
	vector_demo;
	set_demo();
	map_demo();
	powerofstl();
			return 0;
}
