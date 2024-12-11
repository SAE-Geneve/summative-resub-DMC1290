[![Review Assignment Due Date](https://classroom.github.com/assets/deadline-readme-button-22041afd0340ce965d47ae6ef1cefeee28c7c493a6346c4f15d667ab976d596c.svg)](https://classroom.github.com/a/N99FWaEs)
# Summative-4FSC0PF001-Resubmissiom
## Pirate Game : collect the treasures

Creer un jeu dans lequel vous pilotez un bateau pirate et vous chercherez à ramasser un certain nombre de trésors.
## Regles du jeu
  - Si le bateau se superpose à un trésor, le trésor disparait et le score augmente d'un nombre aléatoire 
  - Une fois tous les trésors collectés, on fait reapparaitre les trésors a des emplacements differents et le chrono est relancé.
  - A chaque nouvelle apparition des trésors, il y a de plus en plus de trésors
  - A chaque nouvelle apparition des trésors, le chrono est relance
  - Si le chronometre aarrive à 0, la partie s'arrete

## Contraintes
- Creer une classe **Game** pour gerer l'affichage des differents elements, et assurer le respect des regles du jeu
  - Elements à afficher
    - Trésors
    - Bateau
    - Score
    - Chronomètre
    - Mer
- Creer une classe **PirateShip** pour piloter le bateau avec les combinaisons de touche suivante : touches directionelles ou WASD
  - Les touches **Haut/Bas** pour avancer
  - Les touches **Gauche/Droite** pour faire pivoter le bateau
- Creer une classe **Treasure** pour gerer les fonctionnalites suivantes
  - Afficher les trésors
  - Permettre la collecte de ces trésor
  - Determiner le score attribuer à chaaue trésor  



## Informations
Pour appliquer une rotation, et faire bouger le bateau *vers l'avant* :

``` c++
// Forward direction (local +x direction in global space)
float angleRad = sprite.getRotation() * (3.14159265358979323846f / 180.0f);
sf::Vector2f forward(std::cos(angleRad), std::sin(angleRad));
```
