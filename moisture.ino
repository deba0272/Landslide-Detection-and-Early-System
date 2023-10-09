// Define the analog pin for the soil moisture sensor
const int soilMoisturePin = A0;

void setup() {
  Serial.begin(9600); // Initialize serial communication
}

void loop() {
  // Read the analog value from the soil moisture sensor
  int soilMoistureValue = analogRead(soilMoisturePin);

  // Map the analog value to a moisture percentage (adjust these values for your sensor)
  int moisturePercentage = map(soilMoistureValue, 0, 1023, 0, 100);

  // Print the moisture percentage to the serial monitor
  Serial.print("Soil Moisture: ");
  Serial.print(moisturePercentage);
  Serial.println("%");

  // Add a delay before taking the next reading
  delay(1000); // Adjust the delay as needed
}
