#include<stdio.h>
int dao1(int a[],int n){
    for(int i=0;i<(int)n/2;i++){
        int temp=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
int dao2(int a[],int n){
    for(int i=0;i<(int)n/2;i++){
        int temp=*(a+i);
        *(a+i)=*(a+n-1-i);
        *(a+n-1-i)=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d",a[i]);
    }
}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    dao1(a,n);
    printf("\n");
    dao2(a,n);
}