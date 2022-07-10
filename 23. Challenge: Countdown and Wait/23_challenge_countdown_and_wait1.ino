// C++ code
//

int i;
int a = 30;

void setup()
{
  Serial.begin(9600);
  
  /* Using a while-loop
  
  while ( i <= 30 ) {
    Serial.println(a);
    i++;
    a--;
    delay(1000);
  } */
  
  // Using a for-loop
  for ( i = 0 ; i <= 30 ; i++) {
    Serial.println(a);
    a--;
    delay(1000);
  }
}

void loop()
{
}