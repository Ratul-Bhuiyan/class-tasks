#include<stdio.h>
int main(){
     int n;
    scanf("%d",&n);
    int arr[n][n];
    int uarr[n][n];
    int larr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j<=i){
                uarr[i][j] = 0;
            } else {
                uarr[i][j] = arr[i][j];
            }
        }
    }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(j>=i){
                larr[i][j] = 0;
            } else {
                larr[i][j] = arr[i][j];
            }
        }
    } for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",uarr[i][j]);
      }  printf("\n");
    } printf("\n\n");
      for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",larr[i][j]);
      }  printf("\n");
     }
    }

