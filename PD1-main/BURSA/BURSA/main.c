//
//  main.c
//  BURSA
//
//  Created by my computer on 12.01.2023.
//

#include <stdio.h>
void func(char dizi[], char atama[]);
int main(int argc, const char * argv[]) {
    // insert code here...
   
    char atama[11];
    
    char dizi[11];
    for(int i =0;i<5;i++){
        scanf("%c",&dizi[i]);
    }
    
func(dizi,atama);
    for(int i =0;i<10;i++){
        printf("%c",atama[i]);
    }
    
    
    return 0;
}
void func(char dizi[], char atama[]){
    int a =0;
   
    for(int i =0;i<11;i+=2){
        atama[i]=dizi[a];
        atama[i+1]= dizi[a];
        a++;
    }
}
