#include<stdio.h>
int main(){
    int t,n,a;
    scanf("%d",&t);
    int arr[a];
    for(int i=0;i<t;i++){
        int c=0;
        scanf("%d",&a);
        int arr[a];
        for(int j=0;j<a;j++){
            scanf("%d",&n);
            arr[i] = n;
        }
        for(int k=0;k<a;k++){
           if(arr[k] == arr[a-1-k]){
                    c++;
                }
        } printf("%d\n",c);
    }
}