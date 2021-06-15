# 33138-Capteur UV GROVE

LED RVB GROVE [33138](https://www.pierron.fr/interface-arduino-uno-5949.html)

<div style="text-align: justify">Ce module est utilisé pour détecter l’intensité du rayonnement ultraviolet (UV) incident. Cette forme de rayonnement électromagnétique a des longueurs d’onde plus courtes que le rayonnement visible. Le capteur Grove - UV est basé sur le capteur GUVA-S12D qui a une large plage spectrale de 200 à 400nm. Le module émet un signal électrique qui varie avec l’intensité UV.</div>

Caractéristiques techniques :
- Alimentation : 3.3 à 5 V
- Consommation : 0,31 mA
- Plage de mesure : 240 à 370 nm
- Temps de réponse : 20 à 30 s
- Température de service : -30 à +85 °C

![L-33138](/img/L-33138.jpg)

# Usage :
Pour l’utilisation de ce module, référez-vous aux indications présentes sur le circuit imprimé GROVE.

# Schémas :

![SCH-33138](/img/SCH-33138.jpg)
![BRD-33138](/img/BRD-33138.jpg)

# RESSOURCES À TÉLÉCHARGER :

Ressource utilisation : [GUVA-S12D](https://github.com/pierron-asco-celda/33138-Capteur_uv_GROVE/blob/main/src/Datasheet_GUVA-S12D.pdf)

# Exemple :
### Arduino / C++
```cpp
/*
 *   ** Mesure indice UV module Grove **
       PIN A0 Module shield GROVE
       Baud rate 9600 -> Moniteur série
*/

void setup() {

  Serial.begin(9600);
}

void loop()
{
  int sensorValue;
  long  sum = 0;
  for (int i = 0; i < 1024; i++)
  {
    sensorValue = analogRead(A0);
    sum = sensorValue + sum;
    delay(2);
  }
  long meanVal = sum / 1024;
  Serial.print("Indice UV :");
  Serial.print((meanVal * 1000 / 4.3 - 83) / 21);
  Serial.print("\n");
  delay(20);
}
```
## À propos :

PIERRON ASCO-CELDA (https://www.pierron.fr).
