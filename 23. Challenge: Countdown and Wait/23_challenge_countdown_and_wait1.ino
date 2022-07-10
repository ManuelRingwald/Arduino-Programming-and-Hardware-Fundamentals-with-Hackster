// C++ code
//

int i;

void setup()
{
  Serial.begin(9600);
  
  /* Using a while-loop
  
  while ( i >= 0 ) {
    Serial.println(i);
    i++;
  } */
  
  // Using a for-loop
  for ( i = 30 ; i >= 0 ; i--) {
    Serial.println(i);
  }
}

void loop()
{
}