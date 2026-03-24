#define Led_vermelho 2
#define Led_amarelo 3
#define Led_verde 4
char opcao;

void setup (){
  pinMode(Led_verde, OUTPUT);
  pinMode(Led_amarelo, OUTPUT);
  pinMode(Led_vermelho,OUTPUT);
  Serial.begin(9600);
}

void loop (){
  if(Serial.available()){
    opcao = Serial.read();
    
    switch(opcao){
      case 'G':
      digitalWrite (Led_verde, HIGH);
      break;
      case 'g':
      digitalWrite (Led_verde, LOW);
      break;
      
      case 'Y':
      digitalWrite (Led_amarelo, HIGH);
      break;
      case 'y':
      digitalWrite (Led_amarelo, LOW);
      break;
      
      case 'R':
      digitalWrite (Led_vermelho, HIGH);
      break;
      case 'r':
      digitalWrite (Led_vermelho, LOW);
      break;
      
      default:Serial.println ("Opcao Invalida");
    }
  }
}