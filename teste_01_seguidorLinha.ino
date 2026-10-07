void setup() {
// motor direito
pinMode(7, OUTPUT);
pinMode(6, OUTPUT);
//motor esquerdo
pinMode(5, OUTPUT);
pinMode(4, OUTPUT);

//sensor direito
pinMode(A3, INPUT);
//sensor esquerdo
pinMode(A4, INPUT);

Serial.begin(9600); //pra imprimir no monitor serial

}

void loop() {
int leftOptic = analogRead(A4);
int rightOptic = analogRead(A3);
int pwm = 120; // define a rotaçao dos motores ,vai de 0 a 255
Serial.print(leftOptic)
Serial.print(" ")
Serial.print(rightOptic)
if(leftOptic < 300 && rightOptic < 300){ //(preto eh maior q 300 e branco eh menor) se ver branco vai reto
analogWrite(7, pwm);
digitalWrite(6, LOW);
analogWrite(5, pwm);
digitalWrite(4, LOW);
}
if(leftOptic => 300 && rightOptic > 300){ // se o esquerdo detectar preto vira p esquerda
analogWrite(7, pwm);
digitalWrite(6, LOW);
digitalWrite(5, LOW);
digitalWrite(4, pwm);
}
if(leftOptic < 300 && rightOptic => 300){ // se o direito detectar preto vira p direita
digitalWrite(7 , LOW);
analogWrite(6 , pwm);
analogWrite(5 , pwm);
digitalWrite(4 , LOW);
}
}
