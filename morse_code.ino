String letters[26]={".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..", ".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.", "...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." };

// A to I
//".-", "-...", "-.-.", "-..", ".", "..-.", "--.", "....", "..",
// J to R 
//".---", "-.-", ".-..", "--", "-.", "---", ".--.", "--.-", ".-.",
// S to Z
//"...", "-", "..-", "...-", ".--", "-..-", "-.--", "--.." 
//};

int dotDel = 100;
int dashDel = 500;
String morse_letter = "";

int led = 10; //digital pin connected to LED

String morse_message = "arduino";


void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  //get letter from morse_message
  for(int i = 0; i <= morse_message.length(); i++){
    Serial.print(morse_message[i]);
    Serial.print(" ");

    switch(morse_message[i]){
      case 'a':
        morse_letter = ".-";
        break;

      case 'b':
        morse_letter = "-...";
        break;
      case 'c':
        morse_letter = "-.-.";
        break;
      case 'd':
        morse_letter = "-..";
        break;
      case 'e':
        morse_letter = ".";
        break;
      case 'f':
        morse_letter = "..-.";
        break;
      case 'g':
        morse_letter = "--.";
        break;
      case 'h':
        morse_letter = "....";
        break;
      case 'i':
        morse_letter = "..";
        break;
      case 'j':
        morse_letter = ".---";
        break;
      case 'k':
        morse_letter = "-.-";
        break;
      case 'l':
        morse_letter = ".-..";
        break;
      case 'm':
        morse_letter = "--";
        break;
      case 'n':
        morse_letter = "-.";
        break;
      case 'o':
        morse_letter = "---";
        break;
      case 'p':
        morse_letter = ".--.";
        break;
      case 'q':
        morse_letter = "--.-";
        break;
      case 'r':
        morse_letter = ".-.";
        break;
      case 's':
        morse_letter = "...";
        break;
      case 't':
        morse_letter = "-";
        break;
      case 'u':
        morse_letter = "..-";
        break;
      case 'v':
        morse_letter = "...-";
        break;
      case 'w':
        morse_letter = ".--";
        break;
      case 'x':
        morse_letter = "-..-";
        break;
      case 'y':
        morse_letter = "-.--";
        break;
      case 'z':
        morse_letter = "--..";
        break;
    }

    //send morse letter to led output
    for(int j=0;j<=morse_letter.length(); j++){
      if(morse_letter[j] == '.'){
        digitalWrite(led, HIGH);
        delay(dotDel);
        digitalWrite(led, LOW);
      } 
      else if(morse_letter[j] == '-'){
        digitalWrite(led, HIGH);
        delay(dashDel);
        digitalWrite(led, LOW);
      }
      delay(1000);
      
    }


    
  }

}
