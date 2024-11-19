#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n],ar[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            ar[i][n-1-j] = arr[i][j];
        }
    } for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",ar[i][j]);
      }  printf("\n");
    }

}
