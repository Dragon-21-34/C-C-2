#include <stdio.h>
#include <conio.h>
#include<iostream>
using namespace std;
int main(){
	char a[10]={'1','2','3','4','5','6','7','8','9','a'};
	FILE*s;
	s=fopen("p.txt","w");
//	fwrite (a,1,10,s);
    fprintf(s,"selam hasan");
	fclose(s);
	FILE*d;
	d=fopen("p.txt","r");
	fprintf(d,"selam");
	fclose(d);
	return 0;
    getch ();
} 
