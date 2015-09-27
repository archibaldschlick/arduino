const int redPin = 11; 
const int greenPin = 10;
const int bluePin = 9;  
String comdata = "";
int lastLength = 0;

void setup()
{
         pinMode(redPin, OUTPUT);
         pinMode(greenPin, OUTPUT); 
         pinMode(bluePin, OUTPUT);
         Serial.begin(9600);
         Serial.print("Farbe der LED eingeben");
}

void loop()
{

  if(Serial.available()>0) 
  { 
    comdata = "";
    while (Serial.available() > 0) 
    {       
      comdata += char(Serial.read());
      delay(2);
    }
    Serial.println(comdata);
  }

    if(comdata == "red")
    {
    color(255, 0, 0);
    }
    else if(comdata == "green")
    {
    color(0,255, 255);
    }
    else if(comdata == "blue")
    {
    color(0, 0, 255);
    }
    else
    {
    color(0, 0, 0);
    }
}
    
void color (unsigned char red, unsigned char green, unsigned char blue)
{   
          analogWrite(redPin, red);  
          analogWrite(bluePin, blue);
          analogWrite(greenPin, green);
}
