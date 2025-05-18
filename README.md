# PepinPHP - Installation et utilitaires

---

## Description

PepinPHP est un framework léger HMVC pour créer rapidement des sites PHP.  
Ce dépôt contient aussi des scripts et petits programmes pour faciliter l’installation et la personnalisation du projet.

---

## Installation et lancement de PepinPHP

### Scripts disponibles

- **Windows** : double-clic sur `installPepinPHP.bat`  
  - Clone le dépôt PepinPHP depuis GitHub  
  - Ouvre Visual Studio Code dans le dossier du projet  
  - Lance le serveur PHP intégré qui sert le dossier `public_html/public`

- **Linux** : lance `installPepinPHP.sh` depuis un terminal (après avoir fait `chmod +x installPepinPHP.sh` une fois)  
  - Clone le dépôt PepinPHP  
  - Ouvre VS Code  
  - Lance le serveur PHP intégré

---

## Prérequis

- Git, PHP et Visual Studio Code doivent être installés et accessibles depuis la ligne de commande (`PATH`).
- Le serveur PHP intégré sert le contenu depuis `public_html/public`.
- Pour arrêter le serveur PHP, presse `Ctrl + C` dans la console.

---

## Programme de renommage du projet

Un petit programme en C est fourni (`rename_project.c`) pour renommer facilement le dossier `PepinPHP` en un nom personnalisé.

### Compilation

- **Windows (MinGW)** :

```bash
gcc -o rename_project.exe rename_project.c
```

- **Linux / macOS** :

```bash
gcc -o rename_project rename_project.c
```

### Utilisation

1. Place le binaire compilé dans le dossier parent contenant `PepinPHP`.
2. Lance le programme (double-clic sous Windows, terminal sous Linux/macOS).
3. Saisis le nouveau nom du projet.
4. Le dossier `PepinPHP` est renommé automatiquement.

---

## Notes importantes

- Sur **Linux**, le double-clic sur un script `.sh` **n’est pas fiable**, il faut l’exécuter **dans un terminal**.
- **Windows** est plus simple pour ce genre d’automatisation grâce aux scripts `.bat` et aux `.exe`.
- Tu peux compiler les programmes en C pour chaque OS afin de faciliter l’installation.

---

## Licence

Libre d’utilisation et modification.

---

## Auteur

WebSiteMaker
