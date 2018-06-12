int ruedaA = 3;                 //Rueda: A y B son para
int ruedaB = 5;                 //motor derecho
int ruedaC = 6;                 //Rueda: C y D son para
int ruedaD = 9;                 // motor izquierdo
int sensor1 = 10;               // sensor derecho externo
int sensor2 = 11;               // sensor izquierdo externo
int sensor3 = 13;               // sensor izquierdo interno
int sensor4 = 12;               // sensor derecho interno

void setup() {
  pinMode(ruedaA, OUTPUT);      // define  Rueda A, B, C y D
  pinMode(ruedaB, OUTPUT);      // como salidas 
  pinMode(ruedaC, OUTPUT);      //
  pinMode(ruedaD, OUTPUT);      //
  pinMode(sensor1, INPUT);      // define sensor 1, 2, 3 y 4
  pinMode(sensor2, INPUT);      // como entradas
  pinMode(sensor3, INPUT);      //
  pinMode(sensor4, INPUT);      //
}

void loop() {
  int a = digitalRead(sensor1); // Asigna el valor tomado de
  int b = digitalRead(sensor2); // cada sensor y lo almacena
  int c = digitalRead(sensor3); // en una variable
  int d = digitalRead(sensor4);

  // Cuando el sensor pase por blanco seria 0, y 1 cuando pase por negro
  // En este caso 0 es LOW y 1 es HIGH

 /* if(a==LOW && b==LOW && c==LOW && d==LOW){  
    
    analogWrite(ruedaA, 80);
    analogWrite(ruedaB, 0);
    analogWrite(ruedaC, 80);
    analogWrite(ruedaD, 0);
  }
  */
  if(a==LOW && b==LOW && c==HIGH && d==HIGH){
    analogWrite(ruedaA, 80);
    analogWrite(ruedaB, 0);
    analogWrite(ruedaC, 80);
    analogWrite(ruedaD, 0);
    }

  if(a==LOW && b==HIGH && c==LOW && d==LOW){
    analogWrite(ruedaA, 110);
    analogWrite(ruedaB, 0);
    analogWrite(ruedaC, 0);
    analogWrite(ruedaD, 160);
    }

    if(a==LOW && b==HIGH && c==HIGH && d==LOW){
    analogWrite(ruedaA, 110);
    analogWrite(ruedaB, 0);
    analogWrite(ruedaC, 0);
    analogWrite(ruedaD, 160);
    }

    if(a==LOW && b==HIGH && c==HIGH && d==HIGH){
    analogWrite(ruedaA, 110);
    analogWrite(ruedaB, 0);
    analogWrite(ruedaC, 0);
    analogWrite(ruedaD, 160);
    }

    if(a==HIGH && b==LOW && c==LOW && d==LOW){
    analogWrite(ruedaA, 0);
    analogWrite(ruedaB, 110);
    analogWrite(ruedaC, 160);
    analogWrite(ruedaD, 0);
    }

    if(a==HIGH && b==LOW && c==LOW && d==HIGH){
    analogWrite(ruedaA, 0);
    analogWrite(ruedaB, 110);
    analogWrite(ruedaC, 160);
    analogWrite(ruedaD, 0);
    }

    if(a==HIGH && b==LOW && c==HIGH && d==HIGH){
    analogWrite(ruedaA, 0);
    analogWrite(ruedaB, 110);
    analogWrite(ruedaC, 160);
    analogWrite(ruedaD, 0);
    }

    if(a==HIGH && b==HIGH && c==LOW && d==LOW){
    analogWrite(ruedaA, 80);
    analogWrite(ruedaB, 0);
    analogWrite(ruedaC, 80);
    analogWrite(ruedaD, 0);
    }

    if(a==HIGH && b==HIGH && c==HIGH && d==HIGH){
    analogWrite(ruedaA, 80);
    analogWrite(ruedaB, 0);
    analogWrite(ruedaC, 80);
    analogWrite(ruedaD, 0);
    }

   
}

