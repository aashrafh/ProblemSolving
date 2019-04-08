#include"iostream"
using namespace std;
int N, Q, q;
long long int a[50000+5];
long long int binary_search_min(long long int val)
{
  long long int start = 0, end = N-1, ans = -1;
  while(start <= end)
  {
    long long int mid = start + (end-start)/2;
    if(a[mid]<val && a[mid]>ans)
    {
      ans = a[mid];
      start = mid+1;
    }
    else end = mid-1;
  }
  return ans;
}
long long int binary_search_max(long long int val)
{
  long long int start = 0, end = N-1, ans = a[N-1]+1;
  while(start <= end)
  {
    long long int mid = start + (end-start)/2;
    if(a[mid]>val && a[mid]<ans)
    {
      ans = a[mid];
      end = mid-1;
    }
    else start = mid+1;
  }
  return ans;
}
int main()
{
  cin>>N;
  for(int i=0; i<N; ++i) cin>>a[i];
  cin>>Q;
  for(int i=0; i<Q; ++i)
  {
    cin>>q;
    long long int mn = binary_search_min(q), mx = binary_search_max(q);
    if(mn == -1 && mx == a[N-1]+1) cout<<"X"<<" "<<"X"<<"\n";
    else if(mn != -1 && mx == a[N-1]+1) cout<<mn<<" "<<"X"<<"\n";
    else if(mn == -1 && mx != a[N-1]+1) cout<<"X"<<" "<<mx<<"\n";
    else if(mn != -1 && mx != a[N-1]+1) cout<<mn<<" "<<mx<<"\n";
  }
  //system("PAUSE");
  return 0;
}
