#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
//ikili agactaki kok, sol alt dugum,sag alt dugum degerleri manuel olarak girildi
  printf("kok degeri: 10\n");
  printf("sol alt dugum degeri: 4\n");
  printf("sag alt dugum degeri: 5\n");
  
// ikili agacin dugum yapisi tanimlandi
struct dugum {
    int veri;
    struct dugum* sol;
    struct dugum* sag;
};
//ikili agacta yeni bir dugum olusturan fonksiyon tanimlandi
struct dugum* yenidugum(int veri) {
    struct dugum* dugum = (struct dugum*) malloc(sizeof(struct dugum));
    dugum->veri = veri;
    dugum->sol = NULL;
    dugum->sag = NULL;
    return(dugum);
}
// Alt agaclarin toplamini hesaplayan fonksiyon tanimlandi
int dugumtoplami(struct dugum* dugum) {
    if (dugum == NULL) {
        return 0;
    }
    return (dugum->veri + dugumtoplami(dugum->sol) + dugumtoplami(dugum->sag));
}
// Kok degeri tanimlandi ve alt agaclarin toplamini karsilastiran fonksiyon tanimlandi
void toplamkarsilastir(struct dugum* dugum) {
    int toplam = dugumtoplami(dugum->sol) + dugumtoplami(dugum->sag);
    if (dugum->veri == toplam) {
        printf("Agacin alt dugumleri koke esittir\n");
    }
    else {
        printf("Agacin alt dugumleri koke esit degildir\n");
    }
}
// Test islemine sokmak icin ornek bir agac olusturuldu
   struct dugum* kok = yenidugum(10);
    kok->sol = yenidugum(4);
    kok->sag = yenidugum(5);
    toplamkarsilastir(kok);	
  
  return 0;
}

