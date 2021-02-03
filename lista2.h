int x, y;
struct Element {
    int value;
    struct Element *next;
    struct Element *prev;
} *glowa, *ogon;

void nakoniec(int wartosc);

void napoczatek(int wartosc);

void wypiszodpoczatku();

void wypiszodkonca();

void pentla();

void pentla() {
    for (int i = 0; i < 5; i++) {
        printf("LISTA \n");
        nakoniec(i);
        wypiszodpoczatku();

    }
    scanf("%d", &x);
    nakoniec(x);
    wypiszodpoczatku();

}

void nakoniec(int wartosc) {
    struct Element *nowyElement = (struct Element *) malloc(sizeof(struct Element));
    nowyElement->value = wartosc;
    nowyElement->next = NULL;
    nowyElement->prev = NULL;

    if (glowa == NULL) {
        glowa = nowyElement;
        ogon = glowa;
    } else {
        ogon->next = nowyElement;
        ogon = nowyElement;
    }
}

void wypiszodpoczatku() {
    struct Element *it = glowa;
    while (it != NULL) {
        printf("%d ", it->value);
        it = it->next;
    }
    printf("\n");
}
