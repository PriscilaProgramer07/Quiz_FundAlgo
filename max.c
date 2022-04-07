#include <stdio.h>

int main(){
    int x,y,z,max;
    printf("Enter the value of x: \t");
    scanf("%d",&x);
    printf("Enter the value of y: \t");
    scanf("%d",&y);
    printf("Enter the value of z: \t");
    scanf("%d",&z);
    if(x>y){
        if(x>z){
            max=x;
        }else{
            max=z;
        }
    }else{
        if(y>z){
            max=y;
        }else{
            max=z;
        }
    }
    printf("The largest of the 3 numbers is: %d \n",max);
}
