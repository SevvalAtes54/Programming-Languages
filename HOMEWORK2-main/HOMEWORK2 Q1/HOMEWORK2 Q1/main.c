//
//  main.c
//  HOMEWORK2 Q1
//
//  Created by my computer on 11.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Write an algorithm and draw a flowchart that will read the two sides of a rectangle and calculate its area and perimeter.
    int taban,yukseklik,alan;
    printf("Taban giriniz");
    scanf("%d",&taban);
    printf("Yukseklik giriniz");
    scanf("%d",&yukseklik);
    alan= taban*yukseklik/2;
    printf("%d",alan);
    
    return 0;
}
