#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int tarr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
            if( i == j && arr[i][j] == 0){
                    printf("Not diagonal\n");
                break;
            }

        }
    } printf("Diagonal\n");
}
