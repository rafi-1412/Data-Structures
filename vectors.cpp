#include<bits/stdc++.h>

using namespace std;



int main()
{
  string s="computer";
  int n=7;
  int a[]={4,2,5,3,5,8,3};
vector<int> v={2,1,4,5,6,3,6,2};
sort(v.rbegin(),v.rend());  //to sort in desecding order include  rbegin(),rend()
sort(a,a+n,greater<int>());   //to sort in desending order include  greater <int>()
sort(s.rbegin(),s.rend());  // in desending rbegin() rend()
cout<<"by using vectors:\n";
for(int i=0;i<v.size();i++)
{
cout<<v[i];
}
cout<<"\nby using arrays:\n";
for(int j=0;j<n;j++)
{
  cout<<a[j];
}

cout<<"\nsorted string is:"<<s;
return 0;

}
