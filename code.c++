// C++ code
//

int cliqueBotao = 0;
int pinoBotao = 5;
int pinoLed1 = 2;
int pinoLed2 = 4;

void setup()
{
  pinMode(pinoBotao,INPUT);	 
  pinMode(pinoLed1,OUTPUT);
  pinMode(pinoLed2,OUTPUT);	
}

void loop()
{
  delay(100);
  if (digitalRead(pinoBotao) == 1){
  	cliqueBotao++;
  }
  
  if (cliqueBotao == 1){
    digitalWrite(pinoLed1, 1);
  }
  if (cliqueBotao == 2){
    digitalWrite(pinoLed2, 1);
    digitalWrite(pinoLed1, 0);
  }
  if (cliqueBotao == 3){
    digitalWrite(pinoLed1, 0);
    digitalWrite(pinoLed2, 0);
    cliqueBotao = 0;
  }
}
