#include<stdio.h>

typedef struct {
	int tu;
	int mau;
} phanso;

void swap(int *a, int *b){
	int tmp = *a;
	*a = *b; 
	*b = tmp;
}

int cmp(phanso a, phanso b){
	if (a.tu * b.mau < b.tu * a.mau) return -1;
	if (a.tu * b.mau == b.tu * a.mau) return 0;
	if (a.tu * b.mau > b.tu * a.mau) return 1;
}
int main(){
	phanso ps[100];
	int n;
	scanf("%d",&n);
	for (int i = 0; i < n; i++){
		scanf("%d%d",&ps[i].tu,&ps[i].mau);
	}
	printf("Mang phan so:\n");
	for (int i = 0; i < n; ++i){
		printf("%d/%d ",ps[i].tu,ps[i].mau);
		swap(&ps[i].tu,&ps[i].mau);
	}
	printf("\nMang phan so sau khi nghich dao:\n");
	for (int i = 0; i < n; ++i){
		printf("%d/%d ",ps[i].tu,ps[i].mau);
	}
	phanso a,b;
	printf("\nNhap phan so a: "); scanf("%d%d",&a.tu,&a.mau);
	printf("Nhap phan so b: "); scanf("%d%d",&b.tu,&b.mau);
	if (cmp(a,b)==0) 
		printf("Hai phan so bang nhau");return 0;
	if (cmp(a,b)==-1) 
		printf("Phan so a nho hon phan so b");return 0;
	if (cmp(a,b)==1) 
		printf("Phan so a lon hon phan so b");return 0;
}