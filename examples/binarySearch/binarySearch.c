#include<stdio.h>
int main(){

    int a[10],i,n,m,c=0,l,u,mid;

    printf("Enter the size of an array: ");
    scanf("%d",&n);

    printf("Enter the elements in ascending order: ");
    for(i=0;i<n;i++){
         scanf("%d",&a[i]);
    }

    printf("Enter the number to be search: ");
    scanf("%d",&m);

    l=0,u=n-1;
    while(l<=u){
         mid=(l+u)/2;
         if(m==a[mid]){
             c=1;
             break;
         }
         else if(m<a[mid]){
             u=mid-1;
         }
         else
             l=mid+1;
    }
    if(c==0)
         printf("The number is not found.");
    else
         printf("The number is found.");

    return 0;
}
