//
//  main.c
//  HOMEWORK1 Q6
//
//  Created by my computer on 10.12.2022.
//

#include <stdio.h>

int main(int argc, const char * argv[]) {
    // Write C code to convert the length in feet to centimeter.
    int feet;
    float centim ;
    printf("Bir feet degeri giriniz");
    scanf("%d",&feet);
    
    centim = feet*30.48;
    printf("%d feet = %f santim",feet,centim);
    return 0;
}
