#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
     int arr[n],c=1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(i>0 && arr[i] == arr[i-1]){
            c++;
        } else if(i>0) {
            printf("%d is %d times\n",arr[i-1],c);
            c=1;
        }
    }
    printf("%d is %d times\n",arr[i-1],c); // could use this inside the if condition by creating this condition if(i<n)

}