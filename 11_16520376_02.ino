int sensePin = A0;
int sensorInput;
double temp;

void setup(){
    Serial.begin(9600);
}

void loop(){
    sensorInput = analogRead(sensePin);
    temp = (double)sensorInput / 1024;
    temp*=5;
    temp-=0.5;
    temp*=100;

    Serial.print("Suhu: ");
    Serial.print(temp);
    Serial.println(" Celcius");
}
