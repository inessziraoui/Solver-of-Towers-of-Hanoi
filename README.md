# Solver-of-Towers-of-Hanoi
Implémentation récursive du problème des Tours de Hanoï en C, utilisant des listes chaînées pour simuler dynamiquement le mouvement des disques entre les piquets.

# Tours de Hanoï - Simulation en C

Ce projet est une implémentation du célèbre casse-tête mathématique des **Tours de Hanoï**. Contrairement aux approches utilisant de simples entiers, ce programme utilise une structure de **liste chaînée** pour représenter physiquement le déplacement des disques entre les trois piquets (Début, Temporaire, Fin).

##  Le Projet

L'objectif est de déplacer une pile de $n$ disques d'un piquet initial vers un piquet final en respectant trois règles :
1. Un seul disque peut être déplacé à la fois.
2. Chaque mouvement consiste à prendre le disque supérieur d'une pile et à le placer sur une autre pile.
3. Aucun disque ne peut être placé sur un disque plus petit que lui.

##  Fonctionnalités

* **Gestion dynamique :** Utilisation de structures (`struct`) et d'allocations dynamiques pour les disques.
* **Algorithme Récursif :** Résolution optimale du problème avec une complexité de $O(2^n - 1)$.
* **Suivi en console :** Affichage étape par étape des instructions de déplacement.

##  Structure du Code

Le code repose sur une structure de données simple :
```c
typedef struct disque {
    int taille;
    struct disque* suiv;
} disque;
```
# Installation et Utilisation
Prérequis :
-Un compilateur C (GCC, Clang, etc.)
-Un terminal

Compilation :
Utilisez la commande suivante pour compiler le projet : gcc main.c -o hanoi

# Exemple de sortie
Entrez le nombre de disques : 3.

Deplacez le disque 1 du piquet du debut au piquet de la fin.

Deplacez le disque 2 du piquet du debut au piquet de la fin.

...


