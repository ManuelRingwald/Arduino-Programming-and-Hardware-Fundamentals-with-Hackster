// C++ code
//

int counter = 1;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  // Check if "counter" is a multiple of 3
  // by using modulo
  if ( (counter % 3) != 0 ) {
    Serial.println(counter);
  } else {
    Serial.println("Fizz");
  }
  
  // wait for 0.5 sec and add +1 to a
  delay(500);
  counter++;
}