#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect,Rect);

int main(){
	float x , y , w ,h;
	cout << "Please input Rect 1 (x y w h): ";
	cin >> x >> y >> w >> h ;
	Rect A ={x, y, w ,h};
	cout << "Please input Rect 2 (x y w h): ";
	cin >> x >> y >> w >> h ;
	Rect B = {x,y,w ,h};
	cout << "Overlap area = " << overlap(A,B);	
	return 0;
}

double overlap(Rect a , Rect b){
	Rect ovl;
	double fin , min ,max, ra, rb;
	ra = a.x + a.w;
	rb =  b.x + b.w;
	min = ra > rb ? rb : ra; 
	max = a.x > b.x ? a.x : b.x;
	ovl.w = min - max ;

	ra = a.y - a.h; 
	rb = b.y - b.h;
	min = a.y > b.y ? b.y : a.y; 
	max = ra > rb ? ra : rb;
	ovl.h = min - max;
	double area = ovl.w * ovl.h;
	return area > 0 ? area : 0;
}