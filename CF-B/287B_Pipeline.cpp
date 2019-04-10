  #include<iostream>
  using namespace std;
  long long int n, k, ans;

  inline bool valid(long long int val)
  {
    if(n <= (1.0*(k+(k-val+1))*val/2)-(val-1))
    {
      ans = val;
      return true;
    }
    return false;
  }

  int main()
  {
    cin>>n>>k;
    if(n==1) cout<<"0\n";
    else if(n > ((2+k)*(k-1)/2)-(k-2)) cout<<"-1\n";
    else
    {
      long long int start = 1, end = k-1;
      while(start <= end)
      {
        long long int mid = start+(end-start)/2;
        if(valid(mid)) end = mid-1;
        else start = mid+1;
      }
      cout<<ans<<"\n";
    }
    //system("PAUSE");
  }
