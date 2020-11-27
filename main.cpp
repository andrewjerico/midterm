#include<stdio.h>
#include<string.h>
#include<stdio.h>
#include"../controller/controllers.h"
#include"../controller/validate.h"


void Addperson(){
    struct Orang temp;
    do{
        scanf("%d %s %d - %[^\n]",&temp.day,temp.month,&temp.year,temp.name);
        getchar();
     }while(temp.day<1 || temp.day>31 || !validBul(temp.month) ||
    temp.year<1900 || temp.year>2020 );
    
    // do{
    //     scanf("%s",&temp.month);
    //     getchar();
    // }while(!validBul(temp.month));

    // do{
    //     scanf("%d",&temp.year);
    //     getchar();
    // }while(temp.year<1900 || temp.year>2020);

    // scanf("%[^\n]",temp.name);
    // getchar();
}

int main(){
    int angs,cure;
    scanf("%d %d",&angs,&cure);
    getchar();
    while(angs--){
        Addperson();
    }
    while(cure--){
        removePQ();
    }
    print();
    return 0;
}