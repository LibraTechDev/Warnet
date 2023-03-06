#include <stdio.h>
int main() {
typedef struct {int jj; int mm; int dd} jam;
jam j1,j2,j3;
int detik1, detik2, selisih, biaya;
 printf("Jam Awal : (jj:mm:dd) :"); scanf("%d:%d:%d", &j1.jj, &j1.mm, &j1.dd);
 printf("Jam Akhir : (jj:mm:dd) :"); scanf("%d:%d:%d", &j2.jj, &j2.mm, &j2.dd);

 detik1=(j1.jj*3600)+ (j1.mm*60) + j1.dd;
 detik2=(j2.jj*3600)+ (j2.mm*60) + j2.dd;
 selisih=detik2-detik1;

 j3.jj=selisih/3600;
 j3.mm=(selisih%3600)/60;
 j3.dd=(selisih%3600)%60;
 biaya=((j3.jj*60)+j3.mm)*500;
 printf("Biaya : %d\n", biaya);
return 0;
}
