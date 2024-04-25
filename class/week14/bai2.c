#include<stdio.h>
typedef struct
{
	int total;
	int high;
	int low;
	int average;
} weather;
int main()
{
	weather month[12];
	for (int i = 0; i < 12; i++)
	{
		scanf("%d%d%d",&month[i].total,&month[i].high,&month[i].low);
	}
	int max,min,sum;
	min=50;
	max=-40;
	sum=0;
	for (int i = 0; i < 12; i++)
	{
		sum+=month[i].total;
		min=min<month[i].low?min:month[i].low;
		max=max>month[i].high?max:month[i].high;
	}
	printf("Tong luong mua trong nam: %d\n",sum);
	printf("Luong mua trung binh trong nam: %.2f\n",(float)sum/12);
	printf("Nhiet so cao nhat: %d\n",max);
	printf("Nhiet so thap nhat: %d\n",min);
	return 0;
}