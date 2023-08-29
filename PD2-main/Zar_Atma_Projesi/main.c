//
//  main.c
//  Zar_Atma_Projesi
//
//  Created by my computer on 2.03.2023.
//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main (){
    
    int deneme;
    int degerimiz ;
    int hamleSayisi = 1;
      
      
        int zar1 = 0,zar2 = 0;
        srand(time (NULL));
        zar1 = 1 + rand() % 6;
        zar2 = 1 + rand() % 6;
    printf("zar1 %d\n",zar1);
    printf("zar2 %d\n",zar2);
        if(hamleSayisi == 1){
            if(zar1+zar2==7 || zar1+zar2==11){
                
                printf(" OYUNUCU OYUNU İLK SEFERDE KAZANDI");
                
            }
            
        }
    
    if(hamleSayisi == 1){
        if(zar1+zar2==2 || zar1+zar2==3 || zar1+zar2==12 ){
            
            printf(" OYUNUCU OYUNU İLK SEFERDE KAYBETTİ");
            
        }
        
    }
    degerimiz = zar1+zar2;
    printf("degerimiz %d\n",degerimiz);
    hamleSayisi+=1;
   
        if(hamleSayisi!=1){
            
            while(zar1+zar2!=7){
                
                
                    
                    zar1 = 1 + rand() % 6;
                    zar2 = 1 + rand() % 6;
                    
                    printf("zar1 %d\n",zar1);
                    printf("zar2 %d\n",zar2);
                    
                    deneme =zar1+zar2;
                printf(" deneme %d\n",deneme);
                    if(deneme == degerimiz){
                        
                        printf("OYUNCU OYUNU %d DENEMEDE KAZANDI\n",hamleSayisi);
                        
                        break;
                    
                }
                
                hamleSayisi++;
                
                
                
                
            }
            if(deneme != degerimiz && zar1+zar2 ==7){
                printf("OYUNCU OYUNU KAYBETTİ");
            }
            
          
       
        
    }
    return 0;
    
}
