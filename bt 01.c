#include<stdio.h>
void main()
{
    int a[20],i,min,max,n;
    printf("nhap n:");
    scanf("%d",&n);
    for (i=0;i<n;i++)
    {
        printf("a[%d]=",i);
        scanf("%d",&a[i]);
    }
    min=a[1];
    max=a[1];
    for (i=1; i<n; i++)
    {
        if (a[i]>max) max=a[i];
        if (a[i]<min) min=a[i];
    }
    printf("\nso lon nhat: %d", max);
    printf("\nso nho nhat: %d", min);
}
