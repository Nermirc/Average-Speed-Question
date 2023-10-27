#include <stdio.h>
#include <stdlib.h>
#define YOL 450
int main()
{
    //Bir arabanin ankara'dan Istanbul(450 km'a) varýþ zamanýný saat
    //cinsinden girdi olarak alan ve arabanýn ortalama hýzýný hesapla
    //-yan bir C programý yazýnýz.
    float ortalama_hiz,saat;
    printf("Ankara-Istanbul arasinda kac saat gecirdin ?\n");
    scanf("%f",&saat);
    ortalama_hiz=YOL/saat;
    printf("Arabanin ortalama hizi : %f",ortalama_hiz);

}
