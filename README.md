Gilles COUTARD

Scanf

On désire améliorer le programme précédent de telle sorte que l'utilisateur puisse entrer interactivement la chaîne de caractères dont il faut calculer la longueur.

Utiliser la fonction scanf() pour entrer interactivement la chaîne de caractères depuis le terminal pendant l'exécution du programme. scanf() ressemble à printf() sauf qu'elle sert à lire des données au lieu de les afficher. Tapez: man scanf (ou cherchez sur Internet) pour voir comment utiliser cette fonction.

Noter que :

    Dans le format, %s indique une chaîne de caractères. %20s permet de spécifier la taille maximum de la chaîne (ici 20 caractères).
    Il faut lire la chaîne dans un tableau de caractères. Attention, il doit être suffisamment grand pour contenir tous les caractères qui vont être entrés (n'oubliez pas qiue le C ajoute un 0 à la fin des chaînes) !

