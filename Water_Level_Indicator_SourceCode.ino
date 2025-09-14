int level;
const int analog_0=0;
int l1=13;
int l2=12;
int l3=11;
int l4=10;
 
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(l1,OUTPUT);
  pinMode(l2,OUTPUT);
  pinMode(l3,OUTPUT);
  pinMode(l4,OUTPUT);
 pinMode(8,OUTPUT);
}

void loop() {
  
  // put your main code here, to run repeatedly:
level=analogRead(analog_0);
Serial.println(level);
if(level<200)
{ digitalWrite(l1, HIGH);
  digitalWrite(l2, LOW);
   digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    digitalWrite(8, LOW);
  
  }
else if(level>200&&level<350)
 {
  digitalWrite(l1, LOW);
  digitalWrite(l2, HIGH);
   digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    digitalWrite(8, LOW);
  
  }

else if(level>350&&level<450)
 {
  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
   digitalWrite(l3, HIGH);
    digitalWrite(l4, LOW);
    digitalWrite(8, LOW);
  
  }

else if(level>450)
 {
  digitalWrite(l1, LOW);
  digitalWrite(l2, LOW);
   digitalWrite(l3, LOW);
    digitalWrite(l4, LOW);
    digitalWrite(8, HIGH);
  }

}

