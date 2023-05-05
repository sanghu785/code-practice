// 75 >= A, , marks > 50 and marks < 75 -> b , marks  50 <= -> c
#include<stdio.h>
int main(){
    int marks = 30;
    if (marks >=75){
        printf("your grade is A");
    }else if(marks < 75 &&  marks > 50){
        printf("your grade is B");
    }else if(marks <=50 &&  marks >= 33){
        printf("ypour grade is C");
    
    }else{
        printf("u r fail");
    }
    return 0;
}