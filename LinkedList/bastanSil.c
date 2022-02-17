#include <stdio.h>
#include <stdlib.h>


struct node {
    int data;
    struct node* next;
};

struct node* start = NULL;
struct node* temp = NULL;
struct node* q = NULL;

void basaEkle(int veri);
void bastanSil();
void yazdir();


int main() {


    int secim, durum;

    while (1 == 1) {
        printf("\nEklemek icin 1'i Silmek icin 2'yi \n");
        scanf("%d", &durum);

        switch (durum)
        {
        case 1:
            printf("\nBir Tane Sayi Giriniz... \n");
            scanf("%d", &secim);
            basaEkle(secim);
            break;
        case 2:
            bastanSil();
            break;

        default: NULL;
            break;
        }
        yazdir();
    }

}



void basaEkle(int veri) {

    struct node* eklenecek = (struct node*)malloc(sizeof(struct node));

    eklenecek->data = veri;
    eklenecek->next = NULL;


    if (start == NULL) {

        start = eklenecek;

    }
    else {

        eklenecek->next = start;
        start = eklenecek;
    }


};

void bastanSil() {

    q = start->next;
    free(start);
    start = q;


}

void yazdir() {
    q = start;

    while (q->next != NULL) {
        printf("%d=>", q->data);
        q = q->next;
    };
    printf("%d", q->data);
}
