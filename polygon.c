#include<cmath>
using namespace std;

struct point {
	double x;
	double y;
};

double cross_product(point a,point b){
	return a.x * b.y - a.y * b.x;
}
double area(point a,point b){
	return abs(cross_product(a,b)/2.0);
}