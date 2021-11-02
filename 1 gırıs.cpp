#include <stdio.h>
#include <conio.h>
//#include<iostream>
//using namespace std;
int main(){
    FILE*p;
    char isim[20]={'H','a','s','a','n'};
    p=fopen("bib.txt","w");
    fprintf(p,"isminizi yaziniz :");
    fscanf (p,"%s",&isim);
    fprintf(p,"adiniz: %c",isim);
    fclose (p);
    getch ();
	return 0;
} 
