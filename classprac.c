#include<stdio.h>
int main(){
    int n,c=0;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        scanf("%d",&n[i]);
        if(a[i]%2 == 0){
            c++;
        }
    }
    printf("%d\n",c);
}