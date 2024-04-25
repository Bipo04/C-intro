#include<stdio.h>
typedef struct 
{
	int tu;
	int mau;
	int nguyen;
}phanso;
void swap(int *a, int *b)
{
	int tmp = *a;
	*a = *b; 
	*b = tmp;
}
void cmp(phanso a, phanso b)
{
	if (a.tu*b.mau < b.tu*a.mau) {printf("Phan so a nho hon phan so b\n");return;}
	if (a.tu*b.mau == b.tu*a.mau) {printf("Hai phan so bang nhau\n");return;}
	if (a.tu*b.mau > b.tu*a.mau) {printf("Phan so a lon hon phan so b\n");return;}
}
void chuyen(phanso a)
{
	printf("Phan so %d/%d = ",a.tu,a.mau);
	if (a.tu>=a.mau)
		a.nguyen = a.tu/a.mau;
	a.tu %= a.mau;
	printf("%d+%d/%d\n",a.nguyen,a.tu,a.mau);
}
int UCLN(int a, int b)
{
	int r;
	r = a%b;
	while (r!=0)
	{
		a = b;
		b = r;
		r = a%b;
	}
	return b;
}
void rutgon(phanso ps)
{
	int c=UCLN(ps.tu,ps.mau);
	ps.tu=ps.tu/c;
	ps.mau=ps.mau/c;
}
void tichps(phanso a,phanso b)
{
	phanso tich;
	tich.tu=a.tu*b.tu;
	tich.mau=a.mau*b.mau;
	rutgon(tich);
	printf("Tich phan so %d/%d va phan so %d/%d la: %d/%d\n",a.tu,a.mau,b.tu,b.mau,tich.tu,tich.mau);
}
void tongps(phanso a,phanso b)
{
	phanso tong;
	tong.tu=a.tu*b.mau+b.tu*a.mau;
    tong.mau=a.mau*b.mau;
	rutgon(tong);
	printf("Tong phan so %d/%d va phan so %d/%d la: %d/%d\n",a.tu,a.mau,b.tu,b.mau,tong.tu,tong.mau);
}
int main()
{
	phanso ps[100];
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		scanf("%d%d",&ps[i].tu,&ps[i].mau);
	}
	printf("Mang phan so:\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d/%d ",ps[i].tu,ps[i].mau);
		swap(&ps[i].tu,&ps[i].mau);
	}
	printf("\nMang phan so sau khi nghich dao:\n");
	for (int i = 0; i < n; ++i)
	{
		printf("%d/%d ",ps[i].tu,ps[i].mau);
	}
	phanso a,b;
	printf("\nNhap phan so a: "); scanf("%d%d",&a.tu,&a.mau);
	printf("Nhap phan so b: "); scanf("%d%d",&b.tu,&b.mau);
	cmp(a,b);
	chuyen(a);
	chuyen(b);
	tongps(a,b);
	tichps(a,b);
	return 0;
	
}