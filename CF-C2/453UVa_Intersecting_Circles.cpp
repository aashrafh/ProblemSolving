#include<bits/stdc++.h>
#define Endl "\n"
#define ll long long
using namespace std;
inline void init() { cin.tie(0); cout.tie(0); std::ios::sync_with_stdio(false);}
const double EPS = 1e-4;
struct point{
   double x,y;
   point(double x=0,double y=0):x(x),y(y){}
   point operator -(point p){
     return point(x-p.x,y-p.y);
   }
   point operator +(point p){
     return point(x+p.x,y+p.y);
   }
   bool operator ==(point p){
     return fabs(x-p.x) <EPS&&fabs(y-p.y) <EPS;
   }
   bool operator <(point p){
     return  (x  < p.x -EPS || (fabs(x-p.x) <EPS && y <p.y -EPS));
   }
};
double  Angle(point v){
  return atan2(v.y,v.x);
}
double fixangle(double t){
  return t >1?1:t<-1?-1:t;
}
int dcmp(double x,double y){
  return fabs(x-y)<EPS?0:x>y?1:-1;
}
double dot(point v1,point v2){
 return v1.x*v2.x+v1.y*v2.y;
}
double get_angle(double a,double b,double c){
   double t=b*b+c*c-a*a;
   t/=(2*b*c);
   return acos(fixangle(t));
}
double length(point v){
   return sqrt((v.x*v.x)+(v.y*v.y));
}
vector<point>circleInter(point &c1,double r1,point &c2,double r2){
  if(c1==c2&&dcmp(r1,r2)==0&&r1>EPS)return vector<point>();
    double ang1=Angle(c2-c1),ang2=get_angle(r2,length(c2-c1),r1);
    if(isnan(ang2))ang2=0;
    point v=point(r1*cos(ang1+ang2),r1*sin(ang1+ang2));
    vector<point>ret;
    ret.push_back(v+c1);
    if(dcmp(dot(ret[0]-c1,ret[0]-c1),r1*r1)!=0||
       dcmp(dot(ret[0]-c2,ret[0]-c2),r2*r2)!=0)
        return vector<point>(3,point());

    v=point(r1*cos(ang1-ang2),r1*sin(ang1-ang2));
    ret.push_back(v+c1);
    if(ret[0]==ret[1]){
     ret.pop_back();
    }
    return ret;
}
int main()
{
  init();
  point pt1,pt2;
    double r1,r2;
    while(scanf("%lf %lf %lf",&pt1.x,&pt1.y,&r1)==3){
         if(scanf("%lf %lf %lf",&pt2.x,&pt2.y,&r2)!=3)break;
         vector<point>ret=circleInter(pt1,r1,pt2,r2);
         if((int)ret.size()==0){
          printf("THE CIRCLES ARE THE SAME\n");
         }else if((int)ret.size()==3){
           printf("NO INTERSECTION\n");
         }else{
           sort(ret.begin(),ret.end());
           for(point f:ret){
             printf("(%.3f,%.3f)",f.x+EPS,f.y+EPS);
           }
           puts("");
         }
    }
  return 0;
}
