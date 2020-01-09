const int Temp = A0;
const int Level = A1;
const int Hum = A2;

const double a = 0.0011129148;
const double b = 0.000234125;
const double c = 0.0000000876741;

void setup() {
  Serial.begin(9600);
}

void loop() 
{
  Serial.println("On est ici!");
  //TEMPERATURE
  int bit_temperature = analogRead(Temp);
  double R = log(1000.0* (1024.0 / bit_temperature-1));
  double temperature = 1/(a + b*R + c*R*R*R);
  temperature = temperature - 273.15; 
  if(temperature < 7)
    Serial.println("Il fait trop froid pour la plante !");
  else if(temperature > 40)
    Serial.println("Il fait trop chaud pour la plante !");
  else{    
    Serial.print(temperature);
    Serial.println(" degre");
  }
  
  //NIVEAU D'EAU
  int niveauEau = analogRead(Level);
  if(niveauEau<30)
    Serial.println("Le réservoir est vide!");
  else if(niveauEau > 480 && niveauEau<535)
    Serial.prinln("Le réservoir est à moitié plein!");
  else if(niveauE>585)
    Serial.prinln("Le réservoir est plein!");
  else
  {
    Serial.print("niveau = ");
    Serial.println(niveauEau);
  }
  
  //HUMIDITE
    //résultat incohérent pendant la phase de calibrage à revoir ++++
  int humidite = analogRead(Hum);
  Serial.print("Humidite = ");
  Serial.println(humidite);
  delay(10000);
}
