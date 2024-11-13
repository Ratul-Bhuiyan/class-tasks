#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
     int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        /*as a shortcut i could use this trick here,
        scanf("%d",&arr[n-1-i]);*/
    }
    for(int i=0;i<n/2;i++){
        int tem = arr[i];
        arr[i] = arr[n-1-i];
        arr[n-1-i] = tem;
    }
    for(int i=0;i<n;i++){
        printf("%d\n",arr[i]);
    }

}