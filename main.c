#include <stdio.h>
#include <stdlib.h>
#define YOL 450
int main()
{
    //Bir arabanin ankara'dan Istanbul(450 km'a) var�� zaman�n� saat
    //cinsinden girdi olarak alan ve araban�n ortalama h�z�n� hesapla
    //-yan bir C program� yaz�n�z.
    float ortalama_hiz,saat;
    printf("Ankara-Istanbul arasinda kac saat gecirdin ?\n");
    scanf("%f",&saat);
    ortalama_hiz=YOL/saat;
    printf("Arabanin ortalama hizi : %f",ortalama_hiz);

}
