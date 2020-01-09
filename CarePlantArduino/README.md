# CarePlant projet

## Introduction
Pour ce premier projet en Internet des objets, nous avons décidé de créer un pot de fleur connecté. Ce pot de fleur sera muni de:
- un capteur d'humidité
- un capteur de niveau d'eau
- un capteur de température (où thermistor)
- une carte Arduino
- un moteur pour une pompe à eau.

## Etape de fabrication
### Etape1
#### Fabrication de la pompe à eau:
Pour fabriquer cette pompe, il nous a fallu :
- des bouchons de bouteille pour fabriquer l'hélice et le mini réservoir de la pome
- des tuyaux en plastic pour faire circuler l'eau du réservoir à la plante
- de la colle forte résistante à l'eau.

Nous rencontrons beacoup de difficulté concernant la fabrication de la pompe.
1) la soudure ne tiens pas, il nous a fallut pour l'instant, souder 3 fois les fils au moteur
2) au démarrage de la pome, cette dernière n'aspirait pas car l'hélice était bloqué
Nous allons donc tester une seconde fois avec une nouvelle pompe créée en espérant qu cela fonction.

### Etape2
#### Utilisation des capteurs
Nous avons réalisé quelque achat pour notre projet. Il nous a fallut acheter un capteur d'humidité et de niveau.
Mais nous somme très déçu car les valeurs renvoyées en les utilisants ne répondent pas du tout à nos attente et sont parfois même très incohérente.
Comme il ne nous reste qu'une seule semaine avant de rendre le projet, nous sommes contraint d'utiliser ces capteurs et de manipuler du mieux que l'on peut ces valeurs.

Exemple : 
- Capteur de niveau d'eau : quand le réservoir est vide, le capteur renvoie des valeurs <25, quand on ajoute 2mm d'eau le capteur renvoie des valeurs comprises entre 410 et 420, quand on est à la moitié du réservoir le capteur renvoi des valeurs entre 488 et 532 et quand il est plein, on a des valeurs qui ne dépasse pas pas les 600 (alors qu'one est censé aller jusqu'à 1023 et ce soit des valeurs très proches que celle qu'on obtient quand le réservoir est à moitié plein).
- Capteur d'humidité : quand le capteur est planté dans de la terre sèche -> valeur entre 923 et 985, quand le capteur est plongé dans l'eau -> valeur entre 537 et 586 (alors qu'on devrait etre provhe de 0), quand le capteur est dans le sol humide -> valeurs entre 430 et 577 (ce qui est encore plus bah que quand le capteur est dans l'eau).

### Etape 3
#### ESP32
Pour envoyer des données depuis notre base de donnée vers l'arduino, on voulait utiliser l'ESP32, mais on n'arrive pas à téléverser le code vers l'ESP32.
