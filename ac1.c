#include<stdio.h>
int main(){
    int n,t;
    scanf("%d",&n);
    int a[n-1];
    for(int i=0;i<n-1;i++){
        scanf("%d",&a[i]);
    }
    for(int i=1;i<=n;i++){
            t = 0;
        for(int j=0;j<n-1;j++){
            if(a[j] == i){
                t = 1;
                break;
            }
        }
        if( t == 0){
                printf("%d\n",i);
                break;
            }
    }


}
