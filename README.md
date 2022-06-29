# 42sh

Le but de ce projet est de créer un Shell, qui est le plus au niveau du système Unix, c'est un programme qui va permettre d'interpréter une commande, qui va ensuite la parser et l'exécuter.

Le but va être d'en boucle toutes les entrées de l'utilisateur; puis parser la commande inscrite par l'utilisateur, exécuter la commande.

Il va falloir faire une gestion de l'environnement, implémenter les builtins et faire une gestion erreurs.


Le but du projet, 42sh est d'enrichir notre projet minishell1 et minishell2 en ajoutant :
          * Les && , &, ||.
          * Gérer les guillemets.
          * Gérer les parenthèses "()", ainsi que les globbings "*", "?", "[]"
          * Ajouter les fonctions where, repeat, if, which, foreach.
          * Ajouter les Alias.
          
La gestion des priorités est un élément clé de ce projet avec un bon systéme de parsing.


## But du programme

Minishell : créer un shell, et interpreter des commandes qui doit avoir les mêmes caractèristiques que TCSH. (reproduction de BAsh).

## Fonctions autorisées

```
	• malloc, free, exit, opendir, readdir, closedir, getcwd, chdir
	• fork, stat, lstat, fstat, open, close, getline, strtok, strtok_r
	• read, write, execve, access, isatty, wait, waitpid
	• wait3, wait4, signal, kill, getpid, strerror, perror, strsignal
	• pipe, dup, dup2
	
```

## Mise en route

Ces instructions vous permettront d'obtenir une copie du projet opérationnel sur votre machine locale à des fins de développement et de test.

### Pré-requis

De quoi avez-vous besoin pour installer le logiciel et comment l'installer ?

```
gcc
make
```

### Installation

Compilation du projet

```
make
```

Lancement du projet

```
./42sh

```

## Captures d'écrans

Exemple execution d'une commande :
![Screenshot](screenshots/screen2.png)




