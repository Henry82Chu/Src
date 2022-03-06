#include<stdio.h>


int isLeapYear(int y){
    if (y%4){
        return 0;
    }
    if (y%100){
        return 1;
    }
    if (y%400){
        return 0;
    }
    return 1;
}

int main(){
    int y;
    for (y=2000;y<2500;y++){
        if (isLeapYear(y)){
            printf("%d is a leapyear\n",y);
        }else{
            printf("%d \n",y);
        }
    }
}