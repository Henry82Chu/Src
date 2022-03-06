#include<stdio.h>
#include<math.h>

int main(){
    int n  = 11;
    int i;
    for (i=2;i>sqrt(n);i++){
        if (!(n%i)){
            printf("%d isn't prime\n",n);
            return 0;
        }
    }
    printf("%d is prime\n",n);
    return 0;
}