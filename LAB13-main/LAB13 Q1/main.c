//
//  main.c
//  LAB13 Q1
//
//  Created by my computer on 3.01.2023.
//

#include <stdio.h>
int kare_al(int a,int b);

int main(int argc, const char * argv[]) {
    int d  = kare_al(2,5);
    printf("%d",d);
    return 0;
}

int kare_al(int a,int b){
    int z=1;
    for(int i = 0;i<b;i++){
        z= z*a;
        
    }
    return z;
}
