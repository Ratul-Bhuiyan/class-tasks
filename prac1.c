// 20 29 7 35 140
#include<stdio.h>
int main(){
    int n=0,c,t=0,a[5];
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<5;i++){
        if(a[i]%10 == 0){
            n+=a[i];
            a[i] = -1;
            t++;
        }
    }

    for(int i=0;i<5;i++){
        int max=0;

        for(int j=0;j<5;j++){
            if(a[j] == -1){
            continue;
            }
            if((a[j]%10 > max)){
              max = a[j]%10;
              c = j;
            }

        }
        if(t<4){
             max = a[c]/10;
        max *= 10;
        n += (max + 10);
        a[c] = -1;
        t++;
        } else {

        n += a[c];
        break;
        }

    }
    printf("%d\n",n);
}
