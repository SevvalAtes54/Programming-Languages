//
//  main.c
//  öğrenci ortalamasi
//
//  Created by my computer on 12.01.2023.
//

#include <stdio.h>
void func(int dizi[][3]);
int main(int argc, const char * argv[]) {
    int dizi[10][3];
    for(int i=0;i<10;i++){
        for(int j =0;j<3;j++){
            
            scanf("%d",&dizi[i][j]);
        }
    }
    func(dizi);
   
    return 0;
}
void func(int dizi[][3]){
    int a =0;
    int sonuc1; //
    for(int i=0;i<3;i++){
        sonuc1=0;
        for( int j=0 ;j<10;j++){
            sonuc1 += dizi[j][a];
           
        }
        printf("%d\n",sonuc1/10);
        a++;
    }
    
    
    
}
