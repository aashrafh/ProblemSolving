#include<iostream>
#include<cmath>
using namespace std;

struct point{
  double x;
  double y;
};

struct Rect
{
  point p1, p2, p3, p4;
};

Rect rect[15];
double area[15];
int i=0, j=0;

void set_points(Rect &rect)
{
  rect.p1.x = rect.p4.x;
  rect.p1.y = rect.p2.x;
  rect.p3.x = rect.p2.x;
  rect.p3.y = rect.p4.x;
}
double calc_area(Rect rect)
{
  double len = sqrt(pow((rect.p1.x - rect.p4.x), 2) + pow((rect.p1.y - rect.p4.y), 2));
  double width = sqrt(pow((rect.p1.x - rect.p2.x), 2) + pow((rect.p1.y - rect.p2.y), 2));

  return len*width;
}
double tri_area(point p1, point p2, point p3)
{
  double a = sqrt(pow((p1.x-p2.x), 2) + pow((p1.y-p2.y), 2));
  double b = sqrt(pow((p1.x-p3.x), 2) + pow((p1.y-p3.y), 2));
  double c = sqrt(pow((p2.x-p3.x), 2) + pow((p2.y-p3.y), 2));
  double s = (a+b+c)/2;

  double area = sqrt((s-a)*(s-b)*(s-c)*s);
  return area;
}
void In_fig(point p, int l)
{
  bool flag = false;
  for(int k=0; k<i; ++k)
  {
    double tri_1 = tri_area(p, rect[k].p1, rect[k].p2);
    double tri_2 = tri_area(p, rect[k].p3, rect[k].p2);
    double tri_3 = tri_area(p, rect[k].p3, rect[k].p4);
    double tri_4 = tri_area(p, rect[k].p1, rect[k].p4);

    double total_aree = tri_1 + tri_2 + tri_3 + tri_4;
    if(total_aree == area[k])
    {
      flag = true;
      cout<<"Point "<<j+1<<" is contained in figure "<<k+1<<endl;
    }
  }

  if(!flag) cout<<"Point "<<j+1<<" is not contained in any figure\n";
}

int main()
{
  char ch;

  cin>>ch;
  while(ch != '*')
  {
    double X4, Y4, X2, Y2;
    cin>>X4>>Y4>>X2>>Y2;
    rect[i].p4.x = X4;
    rect[i].p4.y = Y4;
    rect[i].p2.x = X2;
    rect[i].p2.y = Y2;
    set_points(rect[i]);
    //area[i] = calc_area(rect[i]);
    i++;
    cin>>ch;
  }

  point p;
  cin>>p.x>>p.y;
  while(true)
  {
    if(p.x == 9999.9 && p.y == 9999.9) break;
    bool flag = false;
    for(int k=0; k<i; ++k)
    {
      if(p.x > rect[k].p4.x && p.x < rect[k].p2.x && p.y > rect[k].p2.y && p.y < rect[k].p4.y)
      {
        flag = true;
        cout<<"Point "<<j+1<<" is contained in figure "<<k+1<<endl;
      }
    }
    if(!flag) cout<<"Point "<<j+1<<" is not contained in any figure\n";
    j++;
    cin>>p.x>>p.y;
  }

  return 0;
}
