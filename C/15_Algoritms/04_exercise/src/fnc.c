#include "..\include\fnc.h"
#include<stdio.h>

int main(){
int a[20],n,i,max,j,k=0,l=0;
printf("enter limit of array ");
scanf("%d",&n);
printf("enter the elements ");

for (i=0;i<n;i++){
    scanf("%d",&a[i]);
}

max=a[0];
for (i=0;i<n;i++){
    if (a[i]>max){
        max=a[i];
    }
}
int b[max],c[n],count=0;

for (j=2;j<=max;j=j+2){
    c[k++]=j;
    count++;
}
for (i=0;i<n;i++){
    for (j=0;j<count;j++){
        if (a[i]==c[j])
        b[l++]=a[i];
    }
}
for (i=0;i<count;i++){
    printf("evne numbers are %d ",b[i]);
}

return 0;
}
