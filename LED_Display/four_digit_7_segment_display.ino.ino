float delays=4;
void setup() {
  for(int i =1; i<= 12; ++i){
    pinMode(i,OUTPUT);
  }

}

void display_zero(){
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,LOW);
  delay(delays);
}
void display_one(){
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(delays);
}

void display_two(){
  /* Display 2 */
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,LOW);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  delay(delays);
}
void display_three(){
  /* Display 3 */
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,HIGH);
  delay(delays);
}

void display_four(){
  /* Display 4 */
  digitalWrite(1,LOW);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(delays);
}

void display_five(){
  /* Display 5 */
  digitalWrite(1,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(delays);
}

void display_six(){
  /* Display 6 */
  digitalWrite(1,HIGH);
  digitalWrite(2,LOW);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(delays);
}

void display_seven(){
  /* Display 7 */
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,LOW);
  digitalWrite(5,LOW);
  digitalWrite(6,LOW);
  digitalWrite(7,LOW);
  delay(delays);
}

 void display_eight(){
  /* Display 8 */
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,HIGH);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(delays);
 }

 void display_nine(){
  /* Display 9 */
  digitalWrite(1,HIGH);
  digitalWrite(2,HIGH);
  digitalWrite(3,HIGH);
  digitalWrite(4,HIGH);
  digitalWrite(5,LOW);
  digitalWrite(6,HIGH);
  digitalWrite(7,HIGH);
  delay(delays);
 }

void select_LED(int i){
  if (i==1){
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,HIGH);
    digitalWrite(8,LOW);
  }
  else if (i==2){
    digitalWrite(11,HIGH);
    digitalWrite(10,HIGH);
    digitalWrite(9,LOW);
    digitalWrite(8,HIGH);  
  }
  else if (i==3){
    digitalWrite(11,HIGH);
    digitalWrite(10,LOW);
    digitalWrite(9,HIGH);
    digitalWrite(8,HIGH);  
  }
  else if (i==4){
  digitalWrite(11,LOW);
  digitalWrite(10,HIGH);
  digitalWrite(9,HIGH);
  digitalWrite(8,HIGH);  
  }
}

void display_digit(int i){
  if(i==0){
    display_zero();
  }
  if(i==1){
    display_one();
  }
  else if(i==2){
    display_two();
  }
  else if(i==3){
    display_three();
  }
  else if(i==4){
    display_four();
  }
  if(i==5){
    display_five();
  }
  else if(i==6){
    display_six();
  }
  else if(i==7){
    display_seven();
  }
  else if(i==8){
    display_eight();
  }
  else if(i==9){
    display_nine();
  }
  else if(i==0){
    display_zero();
  }
}

void loop() {
  select_LED(3);
  display_digit(1);
  select_LED(4);
  display_digit(2);

  for(int g=0; g<=99990; ++g){
    int i=g/10;
    int ones= i %10 ;
    int tens = (int(i/10)) % 10;
    int hundred = (int(i/100)) % 10;
    int thousand = (int(i/1000)) % 10 ;
    select_LED(4);
    display_digit(ones);
    select_LED(3);
    display_digit(tens);
    select_LED(2);
    display_digit(hundred);
    select_LED(1);
    display_digit(thousand);
  }
}
