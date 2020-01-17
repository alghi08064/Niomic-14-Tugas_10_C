#include <iostream>
#include <conio.h>
#include <math.h>
#include <iomanip>
#include <string.h>
#include <time.h>
#include <windows.h>
#include <stdlib.h>

using namespace std;

void setcolor(unsigned short color)
{
HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);
SetConsoleTextAttribute(hCon,color);
}

void welcome() {
	cout<<"Selamat Datang ";
	}

void perkalian() {
	cout<<"Di Fungsi Perkalian";
}

int main()
{
    setcolor(5);
	welcome();
	setcolor(3);
	perkalian();
	return 0;
}
	

