//
//  main.c
//  H1 Q2 FUNC
//
//  Created by my computer on 6.01.2023.
//

#include <stdio.h>
#include <stdlib.h>
int circleCalculating(int a);
int main(int argc, const char * argv[]) {
    // Calculate the area of a circle with given radius
    int r;
    printf("bir r degeri giriniz");
    scanf("%d",&r);
int d = circleCalculating(r);
    printf("area = %d",d);
    
    return 0;
}

int circleCalculating(int a){
    
    int pi = 3;
    int area = pi*a*a;
    
    return area;
}
