#include<bits/stdc++.h>
using namespace std;
// slope function
struct point
{
	int x;
	int y;
	
	point(int x,int y)
	{
		this->x=x;
		this->y=y;
	}
};

void checkorien(point p1,point p2,point p3)
{
	float slope1=(p2.y-p1.y)/(p2.x-p1.x); // find slopes
	float slope2=(p3.y-p1.y/(p3.x-p1.x));
	
	if(slope2>slope1)
	{
		cout<<"Orientation is anti clockwise";
	}
	else if(slope2<slope1)
	{
		cout<<"Orientation is clockwise";
	}
	else
	{
		cout<<"Points are collinear";
	}
	return;
}
int main()
{
	
point p1=point(0,0);
point p2=point(4,4);
point p3=point(1,2); // why new keyword ggiving error?	

//cout<<p2.x;
checkorien(p1,p2,p3);	
}
