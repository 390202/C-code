//用于验证*P++和（*p）++的区别
#include <stdio.h>
int main(){
int arr1[]={10,20,30};
int *p1=arr1;
printf("%d\n",*p1);
printf("%d\n",*p1++); //取值后在数组内实现指针移位
printf("%d\n",*p1);

printf("======分割线======\n");

int arr2[]={10,20,30};
int *p2=arr2;
printf("%d\n",*p2);
printf("%d\n",(*p2)++); //取值后对数值进行数值+1
printf("%d\n",*p2);

return 0;
}