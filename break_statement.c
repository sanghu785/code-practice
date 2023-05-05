#include<stdio.h>
int main(){
    for(int i = 0 ; i < 8 ; i++ ){
        printf("%d ",i);
        if(i==5){
        break; // exit 
        }
    }
    printf("outside loop");
    return 0;
}
