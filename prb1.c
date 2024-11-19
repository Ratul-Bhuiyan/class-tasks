#include<stdio.h>
int main(){
    int n;
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
            tarr[i][j] = arr[j][i];
        }
    } printf("Your Matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("|%d\t",arr[i][j]);
      }  printf("\n");
       for(int j=0;j<n;j++){
            printf("------");
      }  printf("\n");
    }
        printf("The Transposed Matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("|%d\t",tarr[i][j]);
      }  printf("\n");
       for(int j=0;j<n;j++){
            printf("------");
      }  printf("\n");
    }
}
