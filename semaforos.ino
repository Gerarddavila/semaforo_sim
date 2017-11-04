// Constantes
const int RETARDO_VERDE = 4000;
const int RETARDO_PARPADEO_VERDE = 500;
const int RETARDO_AMARILLO = 2000;

// Conexiones
int verde_semaforo1 = 2;
int amarillo_semaforo1 = 3;
int rojo_semaforo1 = 4;
int verde_semaforo2 = 5;
int amarillo_semaforo2 = 6;
int rojo_semaforo2 = 7;
int verde_semaforo3 = 8;
int amarillo_semaforo3 = 9;
int rojo_semaforo3 = 10;
int verde_semaforo4 = 11;
int amarillo_semaforo4 = 12;
int rojo_semaforo4 = 13;

void setup() {
  // Inicialización
  digitalWrite(verde_semaforo1,LOW);
  digitalWrite(rojo_semaforo1,HIGH);
  digitalWrite(amarillo_semaforo1,LOW);
  digitalWrite(verde_semaforo2,LOW);
  digitalWrite(rojo_semaforo2,HIGH);
  digitalWrite(amarillo_semaforo2,LOW);
  digitalWrite(verde_semaforo3,LOW);
  digitalWrite(rojo_semaforo3,HIGH);
  digitalWrite(amarillo_semaforo3,LOW);
  digitalWrite(verde_semaforo4,LOW);
  digitalWrite(rojo_semaforo4,HIGH);
  digitalWrite(amarillo_semaforo4,LOW);

  pinMode(verde_semaforo1,OUTPUT);
  pinMode(amarillo_semaforo1,OUTPUT);
  pinMode(rojo_semaforo1,OUTPUT);
  pinMode(verde_semaforo2,OUTPUT);
  pinMode(amarillo_semaforo2,OUTPUT);
  pinMode(rojo_semaforo2,OUTPUT);
  pinMode(verde_semaforo3,OUTPUT);
  pinMode(amarillo_semaforo3,OUTPUT);
  pinMode(rojo_semaforo3,OUTPUT);
  pinMode(verde_semaforo4,OUTPUT);
  pinMode(amarillo_semaforo4,OUTPUT);
  pinMode(rojo_semaforo4,OUTPUT);
}

void loop() {
  // Secuencia para semaforo 1
  digitalWrite(verde_semaforo1,HIGH);
  digitalWrite(amarillo_semaforo1,LOW);
  digitalWrite(rojo_semaforo1,LOW);
  delay(RETARDO_VERDE);
  digitalWrite(verde_semaforo1,LOW);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo1,HIGH);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo1,LOW);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo1,HIGH);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo1,LOW);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo1,HIGH);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo1,LOW);
  digitalWrite(amarillo_semaforo1,HIGH);
  delay(RETARDO_AMARILLO);
  digitalWrite(amarillo_semaforo1,LOW);
  digitalWrite(rojo_semaforo1,HIGH);

  // Secuencia semaforo 2
  digitalWrite(verde_semaforo2,HIGH);
  digitalWrite(amarillo_semaforo2,LOW);
  digitalWrite(rojo_semaforo2,LOW);
  delay(RETARDO_VERDE);
  digitalWrite(verde_semaforo2,LOW);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo2,HIGH);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo2,LOW);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo2,HIGH);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo2,LOW);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo2,HIGH);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo2,LOW);
  digitalWrite(amarillo_semaforo2,HIGH);
  delay(RETARDO_AMARILLO);
  digitalWrite(amarillo_semaforo2,LOW);
  digitalWrite(rojo_semaforo2,HIGH);


  // Secuencia semaforo 3
  digitalWrite(verde_semaforo3,HIGH);
  digitalWrite(amarillo_semaforo3,LOW);
  digitalWrite(rojo_semaforo3,LOW);
  delay(RETARDO_VERDE);
  digitalWrite(verde_semaforo3,LOW);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo3,HIGH);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo3,LOW);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo3,HIGH);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo3,LOW);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo3,HIGH);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo3,LOW);
  digitalWrite(amarillo_semaforo3,HIGH);
  delay(RETARDO_AMARILLO);
  digitalWrite(amarillo_semaforo3,LOW);
  digitalWrite(rojo_semaforo3,HIGH);
 

  // Secuencia semaforo 4
  digitalWrite(verde_semaforo4,HIGH);
  digitalWrite(amarillo_semaforo4,LOW);
  digitalWrite(rojo_semaforo4,LOW);
  delay(RETARDO_VERDE);
  digitalWrite(verde_semaforo4,LOW);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo4,HIGH);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo4,LOW);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo4,HIGH);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo4,LOW);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo4,HIGH);
  delay(RETARDO_PARPADEO_VERDE);
  digitalWrite(verde_semaforo4,LOW);
  digitalWrite(amarillo_semaforo4,HIGH);
  delay(RETARDO_AMARILLO);
  digitalWrite(amarillo_semaforo4,LOW);
  digitalWrite(rojo_semaforo4,HIGH);
}
