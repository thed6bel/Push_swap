# Projet Push_swap - École 42

## Description
Push_swap est un projet de l'École 42 qui consiste à créer un programme de tri de données sur une pile, avec un ensemble limité d'instructions, en utilisant le moins d'opérations possible. L'objectif est de développer un algorithme de tri efficace et d'optimiser son exécution.

## Objectifs
- Implémenter un algorithme de tri efficace
- Manipuler différentes structures de données (piles)
- Optimiser le code pour minimiser le nombre d'opérations
- Gérer les cas d'erreur et les entrées invalides

## Fonctionnalités
- Tri d'une pile d'entiers en utilisant deux piles (a et b)
- Utilisation d'un ensemble limité d'opérations pour manipuler les piles
- Affichage de la liste des opérations nécessaires pour trier la pile
- Programme bonus "checker" pour vérifier si une série d'opérations trie correctement la pile

## Opérations autorisées
- `sa` : swap a - échange les 2 premiers éléments au sommet de la pile a
- `sb` : swap b - échange les 2 premiers éléments au sommet de la pile b
- `ss` : sa et sb en même temps
- `pa` : push a - prend le premier élément au sommet de b et le met sur a
- `pb` : push b - prend le premier élément au sommet de a et le met sur b
- `ra` : rotate a - décale d'une position vers le haut tous les éléments de la pile a
- `rb` : rotate b - décale d'une position vers le haut tous les éléments de la pile b
- `rr` : ra et rb en même temps
- `rra` : reverse rotate a - décale d'une position vers le bas tous les éléments de la pile a
- `rrb` : reverse rotate b - décale d'une position vers le bas tous les éléments de la pile b
- `rrr` : rra et rrb en même temps

## Compilation et utilisation
1. Clonez ce dépôt :
   ```
   git clone https://github.com/thed6bel/push_swap.git
   ```
2. Naviguez dans le dossier du projet :
   ```
   cd push_swap
   ```
3. Compilez le projet :
   ```
   make
   ```
4. Exécutez le programme avec une liste de nombres à trier :
   ```
   ./push_swap 4 67 3 87 23
   ```

## Format de sortie
Le programme affiche la liste des opérations nécessaires pour trier la pile, une opération par ligne.

## Programme bonus : Checker
Le programme checker prend en entrée la pile à trier et lit sur l'entrée standard une liste d'instructions. Il exécute ces instructions et vérifie si la pile est correctement triée à la fin.

## Performances
Le nombre d'opérations est limité en fonction de la taille de la pile :
- 3 nombres : ≤ 3 opérations
- 5 nombres : ≤ 12 opérations
- 100 nombres : 
  - ≤ 700 opérations : 5 points
  - ≤ 900 opérations : 4 points
  - ≤ 1100 opérations : 3 points
  - ≤ 1300 opérations : 2 points
  - ≤ 1500 opérations : 1 point
- 500 nombres :
  - ≤ 5500 opérations : 5 points
  - ≤ 7000 opérations : 4 points
  - ≤ 8500 opérations : 3 points
  - ≤ 10000 opérations : 2 points
  - ≤ 11500 opérations : 1 point

## Gestion des erreurs
Le programme gère correctement les erreurs, notamment :
- Arguments non numériques
- Nombres en dehors de la plage des entiers
- Doublons dans la liste d'entrée

En cas d'erreur, le programme affiche "Error" suivi d'un retour à la ligne sur la sortie d'erreur.
