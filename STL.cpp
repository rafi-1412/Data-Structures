#include<bits/stdc++.h>
using namespace std;
void pairs()
{
	cout<<"pairs_demo\n";

	vector<int>v(5,5);
	pair<int,int>p[v.size()];
	// cout<<p.first;				//prins 1
	// cout<<p.second;				//prints 3
	for(int i=0;i<v.size();i++)
	{
		p[i]=make_pair(i,v[i]);
	}
	for(int i=0;i<v.size();i++)		//pairs of{i,v[i]}
	{
		cout<<p[i].first<<p[i].second<<" ";
	}


	//combining pair into a pair
	cout<<"\n";
	pair<int,pair<int,int>>pair_in_pair[v.size()];
	for(int i=0;i<v.size();i++)
	{
		pair_in_pair[i]=make_pair(i,p[i]);
	}
	for(int i=0;i<v.size();i++)  //pairs of {i,{p.first,p.second}}
	{
		cout<<pair_in_pair[i].first<<" "<<pair_in_pair[i].second.first<<pair_in_pair[i].second.second<<" ";
	}cout<<endl;

}
void vectors_demo()
{
	cout<<"vectors_demo\n";
	vector<int>v{3,1,4,2,6};   //begin() and end() points to first and last of vectors
	
	vector<int>::iterator it=v.begin(); //iterator points to first elem==>address of '3'

	sort(v.begin(),v.end());  //sorts elements 
	for(auto i=v.rbegin();i!=v.rend();i++)  //rbegin and rend reverse iterator points to last element
	{
		cout<<*i;
	}cout<<endl;
	cout<<v.empty()<<endl;  //Returns whether the container is empty here it will bo '0'
	cout<<v.size()<<endl; //size will be 5
	vector<int>v2(v); 
	v2.erase(v2.begin());  //erases 1st element 
	//for range erasing v2.erase(v2.begin()+1,v2.end()) does'nt include last one
	for(auto x:v2)
	{
		cout<<x<<" ";
	}
	cout<<endl;
//inserting at particular position 
	vector<int>v3(2,100);
	v3.insert(v3.begin(),300); //insertin at first position
	v3.insert(v3.begin()+1,400); //at position 2
	for(auto x:v3)
	{
		cout<<x<<" ";
	}cout<<endl;

//push_back()
// 	pop_back()
// clear()
// v1.swap(v2)
// clear()

}

void deque_demo()
{
	cout<<"deque_demo\n";
	deque<int>dq;
	dq.push_back(12);
	dq.push_back(45);
	dq.push_back(56);
	dq.push_front(11);  //element at front side
	dq.push_back(22);   //element at back side
	cout<<dq.front()<<endl;   // 11
	cout<<dq.back()<<endl;	//22

}

void stack_demo()
{
	cout<<"stack_demo\n";
	stack<int>s;         //LAST in FIRST OUT
	s.push(12);
	s.push(34);
	s.push(54);
	s.push(66);
	cout<<s.empty()<<endl;   //'0' as stack is not empty
	cout<<s.top()<<endl;     //top element is 66
	cout<<s.size()<<endl;	//stack size is 4
	s.pop();				//top element removed
	cout<<s.top()<<endl;	//top will be 54


}

void queue_demo()
{

	cout<<"queue_demo\n";
	queue<int>q;		//FIRST in FIRST out
	q.push(12);
	q.push(34);
	q.push(54);
	q.push(66);
	cout<<q.front()<<endl;        //12
	cout<<q.back()<<endl;			//66
}
void priority_Q()
{
	cout<<"priority queue_demo\n";
	priority_queue<int>pq;   //MAXIMUM Heap
	pq.push(5);
	pq.push(2);
	pq.push(10);
	pq.push(7);
	while(!pq.empty())
	{
		cout<<pq.top()<<" ";  //{10,7,5,2}
		pq.pop();
	}

	// priority_queue<int,vector<int>,greater<int>>pq;  //MINIMUM Heap
}
 void set_demo()
 {
 	cout<<"\nset_demo\n";
 	set<int>s;
 	s.insert(1);
 	s.insert(5);
 	s.insert(1);
 	s.insert(10);
 	s.insert(5);
 	auto it=s.find(10);
 	s.erase(it);
 	cout<<s.size();
 	cout<<endl<<s.count(10); //will be '0' as no element
 	auto p=s.lower_bound(1);  //points to first occurence
 	auto q=s.upper_bound(5);  //points to next of the occurence
 	cout<<*p<<*q;
 }

 void multiset_demo()
 {
 	cout<<"\nmultiset_demo\n";
 	multiset<int>ms;
 	ms.insert(2);
 	ms.insert(2);
 	ms.insert(3);
 	ms.insert(4);
 	ms.insert(4);
 	ms.insert(5);
 	ms.insert(4);
	ms.erase(2);		//erases all 2's 
	cout<<ms.count(2)<<endl;
	cout<<ms.count(4);    //set contains all duplicates also so count '3'
	ms.erase(ms.find(4));
	cout<<endl<<ms.count(4);  //only erases one element
 }
 void map_demo()
 {		
 	cout<<"\nmap_demo\n";
 		//key - value pair
 		map<int,int>mp;				//order of elements
 		// map<pair<int,int>,int>mp  here mp[{1,2}]=4  pair(key) - value mapping
 		mp[33]=50;
 		mp[24]=40;
 		mp[41]=60;
 		mp.insert({27,80});
 		for(auto x:mp)
 		{
 			cout<<x.first<<" "<<x.second<<endl;
 		}
 //we can use erase swap size empty lower_bound upper_bound find		
 // lower_bound upper_bound works whenever datastructure is sorted 


 //MULTIMAP ==>> similar to map but also stores duplicates of key-value 's
 }


void extra_stuff()
{
	cout<<"extra stuff_demo\n";
	int a[]={12,44,67,88,123,555,23},n=7;
	cout<<"MAX:"<<*max_element(a,a+n)<<endl;
	sort(a,a+n);				//sorts elements in acending order
	// sort(a,a+n,greater<int); 	//sorts elements in descending fashion 
	int num=7;
	int cnt=__builtin_popcount(num);  //return no.of set bits in binary form 
									  //in 7 ==>>1 1 1 so it return 3
	long long num2=13244345;
	int cnt2=__builtin_popcountll(num2);  //for long long data types

	cout<<cnt<<" "<<cnt2<<endl;


	//next permutation i.e dictinory order
	string s="146";
	do{

		cout<<s<<endl;
	}while(next_permutation(s.begin(),s.end()));
	//it there is no such order then it will return false
	//also works for arrays vectors ==>>> next_permutation(a,a+n) 



}


int main()
{

	pairs();
	vectors_demo();
	deque_demo();
	stack_demo();
	queue_demo();
	priority_Q();
	set_demo();
	multiset_demo();
	map_demo();
	extra_stuff();
	return 0;
}
