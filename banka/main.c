#include <stdio.h>
#include <stdlib.h>

int main()
{
    int bakiye = 1000;
    int tutar;
    int islem;

    printf("bakiyeniz: %d\n",bakiye);
    printf("1.para cekme\n");
    printf("2.para yatirma\n");
    printf("3.bakiye sorgulama\n");
    printf("4.kart ieade\n");

    printf("isleminizi seciniz: ");
    scanf("%d",&islem);

    switch(islem){
    case 1:
        printf("bakiyeniz bu kadar: %d \n",bakiye);
        printf("cekmek istediğiniz tutari giriniz: ");
        scanf("%d",&tutar);
        if(tutar>1000){
            printf("yetersiz bakiye tekrar giriniz\n");
            scanf("%d",&tutar);
        }
        bakiye-=tutar;
        printf("yeni bakiyeniz: %d ",bakiye);
        break ;


    case 2:
        printf("yatirmak istediğiniz tutari giriniz: ");
        scanf("%d",&tutar);
        bakiye+=tutar;
        printf("yeni bakiyeniz: %d",bakiye);
         break;
    }
}









