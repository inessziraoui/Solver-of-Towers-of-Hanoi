#include <stdio.h>
#include <stdlib.h>

typedef struct disque {
    int taille;
    struct disque* suiv;
}disque;

struct disque* createdisque(int taille) {
    struct disque* newdisque = (struct disque*)malloc(sizeof(struct disque));
    newdisque->taille = taille;
    newdisque->suiv = NULL;
    return newdisque;
}

void moveDisque(struct disque** debut, struct disque** Fin) {
    struct disque* temp = *debut;
    *debut = (*debut)->suiv;
    temp->suiv = *Fin;
    *Fin = temp;
}

void resoudreHanoi(int n, struct disque** debut, struct disque** temporaire, struct disque** fin) {
    if (n == 1) {
        moveDisque(debut, fin);
        printf("Deplacez le disque 1 du piquet du debut au piquet de la fin\n");
        return; //cas de base
    }
    resoudreHanoi(n - 1, debut, fin, temporaire);
    moveDisque(debut, fin);
    printf("Deplacez le disque %d du piquet du debut au piquet de la fin\n", n);
    resoudreHanoi(n - 1, temporaire, debut, fin);
}

int main() {
    int NbrDisques;
    printf("Entrez le nombre de disques : ");
    scanf("%d", &NbrDisques);

    struct disque* debut = NULL;
    struct disque* temporaire = NULL;
    struct disque* fin = NULL;
    for (int i = NbrDisques; i >= 1; i--) {
        struct disque* newdisque = createdisque(i);
        newdisque->suiv = debut;
        debut = newdisque;
    }


    resoudreHanoi(NbrDisques, &debut, &temporaire, &fin);

    return 0;
}
