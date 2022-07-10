// C++ code
//

int a = 0;

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  Serial.println(a);
  delay(1000);
  a++;
}