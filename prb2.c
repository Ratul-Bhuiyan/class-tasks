#include<stdio.h>
int main(){
     int n;
    scanf("%d",&n);
    int farr[n][n];
    int sarr[n][n];
    int narr[n][n];
    printf("Enter First Matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&farr[i][j]);
        }
    } printf("Enter Second Matrix\n");
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&sarr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
                narr[i][j] = 0;
            for(int k=0;k<n;k++){
                narr[i][j] += (farr[i][k]*sarr[k][j]);
           }
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            printf("%d\t",narr[i][j]);
      }  printf("\n");

    }

}
