#include<iostream>
using namespace std;

struct Rect{
	double x,y,w,h;
};

double overlap(Rect R1, Rect R2){
	double over;
	double left,right, bottom , top,height = 0,width = 0;


    if(R1.x > R2.x) left = R1.x; else left = R2.x;

	if(R1.x + R1.w > R2.x + R2.w) right = R2.x + R2.w; else right = R1.x + R1.w;

	if(R1.y > R2.y) bottom = R1.y; else bottom = R2.y;

    if(R1.y + R1.h > R2.y + R2.h) top =  R2.y + R2.h; else top = R1.y + R1.h;
    
    height = top - bottom;
	width = right - left;
    
	if(R1.w *3 <= R2.w) width = R1.w; 
	if(R2.w *3 <= R1.w) width = R2.w; 
	if(R1.h *3 <= R2.h) height = R1.h; 
	if(R2.h *3 <= R1.h) height = R2.h;
	
	
    over = height * width;
    
    if(over <= 0 ) over = 0;

	return over ;
}
