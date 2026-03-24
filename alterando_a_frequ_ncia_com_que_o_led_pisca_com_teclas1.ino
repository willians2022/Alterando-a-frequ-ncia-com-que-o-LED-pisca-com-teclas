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


// ===== versão comentado ===== //

/*
//// Define o pino 2 como LED vermelho
  #define Led_vermelho 2 

// Define o pino 3 como LED amarelo
#define Led_amarelo 3

// Define o pino 4 como LED verde
#define Led_verde 4

// Variável para armazenar o comando recebido pela serial
char opcao;

// Função executada uma vez ao iniciar o Arduino
void setup (){

  // Define o pino do LED verde como saída
  pinMode(Led_verde, OUTPUT);

  // Define o pino do LED amarelo como saída
  pinMode(Led_amarelo, OUTPUT);

  // Define o pino do LED vermelho como saída
  pinMode(Led_vermelho,OUTPUT);

  // Inicia a comunicação serial com velocidade de 9600 bps
  Serial.begin(9600);
}

// Função que roda continuamente
void loop (){

  // Verifica se existe algum dado disponível na serial
  if(Serial.available()){

    // Lê o caractere enviado pelo usuário
    opcao = Serial.read();
    
    // Estrutura para verificar qual comando foi enviado
    switch(opcao){

      // Se receber 'G', liga o LED verde
      case 'G':
      digitalWrite (Led_verde, HIGH);
      break;

      // Se receber 'g', desliga o LED verde
      case 'g':
      digitalWrite (Led_verde, LOW);
      break;
      
      // Se receber 'Y', liga o LED amarelo
      case 'Y':
      digitalWrite (Led_amarelo, HIGH);
      break;

      // Se receber 'y', desliga o LED amarelo
      case 'y':
      digitalWrite (Led_amarelo, LOW);
      break;
      
      // Se receber 'R', liga o LED vermelho
      case 'R':
      digitalWrite (Led_vermelho, HIGH);
      break;

      // Se receber 'r', desliga o LED vermelho
      case 'r':
      digitalWrite (Led_vermelho, LOW);
      break;
      
      // Caso o comando não seja reconhecido
      default:
      Serial.println ("Opcao Invalida");
    }
  }
}
*/
