#include<bits/stdc++.h>

using namespace std;
int main()
{
    int array[100]={-1,2,4,-3,5,2,-5,2};
    int n=8,a,best=0,sum=0;
    for(a=0;a<=n;a++)
    {
      // sum=0;
      // for(b=a;b<=n;b++)
      // {
      //   sum=max(array[b],sum+array[b]);
      //   best=max(best,sum);
      // }

      sum=max(array[a],sum+array[a]);
      best=max(best,sum);
    }
  cout<<best;
  return 0;
}
