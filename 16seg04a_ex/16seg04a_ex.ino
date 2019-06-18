 void setup() {
  for(int i = 1; i < 19; i++){
  pinMode(i, OUTPUT);//pin13は使わない
  }
}

const int digits[5][19] = {
  {1101100000100001001}, // R
  {1001110111000001001}, // E
  {1000000011001000011}, // I
  {0000010000111000000}, // W
  {0111010000010000000}, // A
};

void display_number(int num){  
  for(int w = 0; w <= 19; w++){
  digitalWrite(w, digits[num][w]);
  }
}
void all_ledoff(){
  for(int i = 1; i < 19; i++)
  digitalWrite(i, LOW);
  }

void loop() {
  for(int i = 0; i < 5; i++){
    display_number(i);
    delay(2000);
    all_ledoff();
    delay(50);
  }
}

