#include <stdio.h>
int pertambahan();
int pengurangan();
float perkalian();
float pembagian();
main()
{
int pilihan;
printf("=============== Pilih Menu =================");
printf("\n1. Pertambahan 2 Bilangan");
printf("\n2. Pengurangan 2 Bilangan");
printf("\n3. Perkalian 2 Bilangan");
printf("\n4. Pembagian 2 Bilangan");
printf("\n==========================================");
printf("\nTentukan Pilihan = "); scanf("%d",&pilihan);
switch(pilihan){
case 1:pertambahan(); break;
case 2:pengurangan(); break;
case 3:perkalian(); break;
case 4:pembagian(); break;
default:printf("Mohon periksa lagi, pilih angka antara 1-4");

}}
int pertambahan(){
int t1,t2,hasilt, genapt;
printf("========= Menu Pertambahan ==========");
printf("\nMasukan Bilangan Pertama = "); scanf("%d",&t1);
printf("\nMasukan Bilangan Kedua = "); scanf("%d",&t2);
hasilt=t1+t2;
printf("\n=====================================================================");
printf("\nHasil dari %d", t1); printf(" di tambah %d", t2); printf(" adalah = %d", hasilt);
if(hasilt%2==0)  
        printf("\nBilangan yang dihasilkan merupakan bilangan Genap\n\n");  
    else  
        printf("\nBilangan yang dihasilkan merupakan bilangan Ganjil\n\n");
printf("\n=====================================================================");
printf("\n\n\n\n");
}
int pengurangan(){
int k1,k2,hasilk;
printf("========= Menu Pengurangan ==========");
printf("\nMasukan Bilangan Pertama = "); scanf("%d",&k1);
printf("\nMasukan Bilangan Kedua = "); scanf("%d",&k2);
hasilk=k1-k2;
printf("\n=====================================================================");
printf("\nHasil dari %d", k1); printf(" di tambah %d", k2); printf(" adalah = %d", hasilk);
if(hasilk%2==0)  
        printf("\nBilangan yang dihasilkan merupakan bilangan Genap\n\n");  
    else  
        printf("\nBilangan yang dihasilkan merupakan bilangan Ganjil\n\n");
printf("\n=====================================================================");
printf("\n\n\n\n");
}
float perkalian(){
float x1,x2,hasilx;
printf("========= Menu Perkalian ==========");
printf("\nMasukan Bilangan Pertama = "); scanf("%f",&x1);
printf("\nMasukan Bilangan Kedua = "); scanf("%f",&x2);
hasilx=x1*x2;
printf("\n=====================================================================");
printf("\nHasil dari %d", x1); printf(" di tambah %d", x2); printf(" adalah = %f", hasilx);
printf("\n=====================================================================");
printf("\n\n\n\n");
}
float pembagian(){
float b1,b2,hasilb;
printf("========= Menu Pembagian ==========");
printf("\nMasukan Bilangan Pertama = "); scanf("%f",&b1);
printf("\nMasukan Bilangan Kedua = "); scanf("%f",&b2);
hasilb=b1/b2;
printf("\n======================================================================");
printf("\nHasil dari %f", b1); printf(" di tambah %f", b2); printf(" adalah = %f", hasilb);
printf("\n======================================================================");
printf("\n\n\n\n");
}
