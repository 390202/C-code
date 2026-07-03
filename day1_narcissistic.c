#include <stdio.h>
int main(){
    int number=0;
    for(int a=100;a<=999;a++){
        int hum=a/100;
        int ten=(a/10)%10;
        int one=a%10;
        if((hum*hum*hum)+(ten*ten*ten)+(one*one*one)==a){
        number++;
        printf("%d\n",a);
        }
    }
    printf("%d",number);
    return 0;
}
