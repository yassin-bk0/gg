
#define GAS_SENSOR A1  
#define BUZZER 8       
#define LED 7          
#define THRESHOLD 50   

void setup() {
    pinMode(GAS_SENSOR, INPUT);
    pinMode(BUZZER, OUTPUT);
    pinMode(LED, OUTPUT);
    Serial.begin(9600); 
}

void loop() {
    int sensorValue = analogRead(GAS_SENSOR); 
    Serial.print("Gas Sensor Value: ");
    Serial.println(sensorValue);

    if (sensorValue > THRESHOLD) { 
        digitalWrite(BUZZER, HIGH); 
        digitalWrite(LED, HIGH);   
    } else {
        digitalWrite(BUZZER, LOW);  
        digitalWrite(LED, LOW);    
    }

   
}
