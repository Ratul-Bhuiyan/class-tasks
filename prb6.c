#include<stdio.h>
int main(){
    int n,t=0;
    scanf("%d",&n);
    int arr[n][n];
    int tarr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
         for(int j=0;j<n;j++){
            if(i == j && arr[i][j] != 1){
                    t= 1;
                break;
            }
            if(i != j && arr[i][j] != 0){
                t =1;
                break;
            }

        }
    }
    if(t == 0){
        printf("Scaler\n");
    } else {
        printf("Not scaler\n");
    }

}
