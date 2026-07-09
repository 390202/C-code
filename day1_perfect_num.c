//找出1到1000的所有完数，6=2+3+1
#include <stdio.h>
int main(){
int i=0;
int j=0;
int sum=0;
for(i=2;i<=1000;i++){
    sum=0;
for(j=1;j<=(i/2);j++){
    if(i%j==0){
        sum+=j;}
    }
    if(sum==i){
        printf("%d\n",i);
    }

}
return 0;
}