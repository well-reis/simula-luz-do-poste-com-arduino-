# define ldr A0 //Pino do LDR conectado a porta analógica A0
# define pinled 7 //Pino do led conectado a porta digital 2
int vldr =0; //variável criada para armazenar o valor lido pelo LDR

void setup() {
  
  pinMode (ldr,INPUT);  //inicializa o componente LDR, como entrada digital
  pinMode (led, OUTPUT); //inicializa o componente led, como saída digital
  Serial.begin (9600);  // inicializa a comunicação serial para monitoramento dos valores lidos 

}

void loop() {
  vldr = analogRead (ldr);  //variavel vldr recebendo o que está chegando do LDR
  if (vldr>500){  // Condicional que monitora o valor da variável vldr, caso ela seja maior que 500, o led deve permanecer apagado
    digitalWrite (led,LOW);
    }else {
    digitalWrite (led,HIGH); // Caso o valor seja menor que 500 o LED acende
     }
    Serial.println (vldr); //Exibe no monitor serial o valor lido. 
    delay (100); //intervalo de 100 milissegundos
}
