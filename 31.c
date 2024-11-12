#include<stdio.h>
int main(){
    int a,*pa;
    float b,*pb;
    char c,*pc;
    scanf("%d %f %c",&a,&b,&c);
    pa=&a,pb=&b,pc=&c;
    printf("value= %d %d %d",pa,pb,pc);
    pa++,pb++,pc++;
    printf("value= %d %d %d",pa,pb,pc);
}