#include <vector>
#include <algorithm>
using namespace std;
class BestView
{
public:
int numberOfBuildings(vector<int> heights)
{
  int ret = 0;
  int n = heights.size();
  for (int i = 0; i < n; ++i)
  {
    int t = 0;
    double x = 1e+100;
    for (int j = i - 1; j >= 0; --j)
    {
      double k = double(heights[i] - heights[j]) / double(i - j);
      if (x > k)
      {
        t++;
        x = k;
      }
    }
    x = 1e+100;
    for (int j = i + 1; j < n; ++j)
    {
      double k = double(heights[i] - heights[j]) / double(j - i);
      if (x > k)
      {
        t++;
        x = k;
      }
    }
    ret >?= t;
  }
  return ret;
}
};
