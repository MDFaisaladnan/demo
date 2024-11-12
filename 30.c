#include<stdio.h>
int main(){
    int a,*pa;
    float b,*pb;
    char c,*pc;
    scanf("%d %f %c",&a,&b,&c);
    pa=&a,pb=&b,pc=&c;
    printf("size of a %d\n",sizeof(*pa));
    printf("size of b %d\n",sizeof(*pb));
    printf("size of c %d\n",sizeof(*pc));
}