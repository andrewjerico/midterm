#include<stdio.h>
#include<string.h>
char bulan[12][20] ={"january","february","march","april","mei","june",
"july","august","september","october","november","desember"};

bool validBul(char *month){
    if(strcmp(month,bulan[0])==0||
    strcmp(month,bulan[1])==0 ||
    strcmp(month,bulan[2])==0 ||
    strcmp(month,bulan[3])==0 ||
    strcmp(month,bulan[4])==0 ||
    strcmp(month,bulan[5])==0 ||
    strcmp(month,bulan[6])==0 ||
    strcmp(month,bulan[7])==0 ||
    strcmp(month,bulan[8])==0 ||
    strcmp(month,bulan[9])==0 ||
    strcmp(month,bulan[10])==0 ||
    strcmp(month,bulan[11])==0){
        return true;
    }
    return false;
}