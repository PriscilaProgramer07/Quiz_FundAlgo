#include<stdio.h>

int main(){
int length,  width;

    printf("Enter the length of the rectandulo \t");
    scanf("%d",&length);
    printf("Enter the width of the rectandulo  \t");
    scanf("%d",&width);
    if(length==width){
        printf("The figure is a square, its area is: %d \n", length*width);
        
    }else{
        printf("The figure is a rectangle, its area is: %d \n", length*width);
    }
}