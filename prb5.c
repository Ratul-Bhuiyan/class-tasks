#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    int psum = 0,ssum = 0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            if(i == j){
               psum += arr[i][j];
            }
        }
        ssum += arr[i][n-1-i];
    }
    printf("%d\n",psum - ssum);
}

