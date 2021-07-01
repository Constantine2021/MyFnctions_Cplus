#include <iostream>
#include <iomanip>
#include <fstream>
#include <istream>
#include "myfunctions.h"
#include <windows.h>
#include "myclasses.h"

using namespace std;
//================ CLASS arD===================LR13
arD::arD(int m) {
	nx = m; x = new int[nx];
}
void arD::set() {
	for (int i = 0; i < nx; i++)
		cin >> x[i];
}
void arD::set(int xmin, int xmax) {
	myrnd(x, nx, xmin, xmax); 
}
void arD::srt(bool inc) { 
	mysrt(x, nx, true); 
}
int* arD::min_() {
	return mymin(x, nx);
}
int *arD::max_() {
	return mymax(x, nx);
}
void arD::get(int nr) {
	myout(x, nx, nr);
}
arD::~arD() { delete[]x; }