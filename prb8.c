#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int tarr[n][n],t=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            tarr[i][j] = arr[j][i];
        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(arr[i][j] != tarr[i][j]){
                t=1;
                break;
            }
      }

    } if(t == 0){
        printf("Symmetric\n");
    } else {
        printf("Not Symmetric\n");
    }
}
