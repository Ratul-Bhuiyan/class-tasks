#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    } int sdl=0;
    for(int i=0;i<n;i++){
         sdl=0;
        int tem=arr[i][0];
        int clm=0;
        for(int j=1;j<n;j++){
            if(arr[i][j]<tem){
                tem=arr[i][j];
                clm=j;
            }
        }
        int isSdl=1;
        for(int k=0;k<n;k++){
            if(arr[k][clm]>tem){
                isSdl=0;
                break;
            }
        }
        if(isSdl){
            printf("Saddle point is %d at row %d colum %d\n",tem,i,clm);
            sdl=1;
        }
    }
    if(sdl == 0){
        printf("No Saddle Point\n");
    }


}
