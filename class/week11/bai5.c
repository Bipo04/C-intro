#include<stdio.h>

void doi(int* a, int* b, int* c)
{
    int tmp = *a;
    *a = *c;
    *c = *b;
    *b = tmp;
}
void doi1(int** a, int** b, int** c)
{
    int *tmp = *a;
    *a = *c;
    *c = *b;
    *b = tmp;
}
int main()
{
    int a, b, c;
    int *p = &a, *q = &b, *r = &c;
    scanf("%d %d %d", &a, &b, &c);
    printf("a b c = %d %d %d \n",a,b,c);
    printf("p q r = %p %p %p \n",p,q,r);
    printf("*p *q *r = %d %d %d \n",*p,*q,*r);
    doi(&a,&b,&c);
    printf("a b c = %d %d %d \n",a,b,c);
    printf("p q r = %p %p %p \n",p,q,r);
    printf("*p *q *r = %d %d %d \n",*p,*q,*r);
    doi1(&p,&q,&r);
    printf("a b c = %d %d %d \n",a,b,c);
    printf("p q r = %p %p %p \n",p,q,r);
    printf("*p *q *r = %d %d %d \n",*p,*q,*r);
}