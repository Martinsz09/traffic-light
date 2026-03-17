const unsigned int LED_RED = 8;
const unsigned int LED_YELLOW = 9;
const unsigned int LED_GREEN = 10;
unsigned long previous_time = 0;
int interval = 1000;
unsigned int state = 0;
void setup()
{
  pinMode(LED_RED, OUTPUT);
  pinMode(LED_YELLOW, OUTPUT);
  pinMode(LED_GREEN, OUTPUT);
}

void loop()
{
  unsigned long now = millis();
  if(now - previous_time >= interval) {
  	previous_time = now;
    if(state == 0) {
      	digitalWrite(LED_RED, HIGH);
    	digitalWrite(LED_RED, LOW);
        digitalWrite(LED_YELLOW, LOW);
  		digitalWrite(LED_GREEN, LOW);
      	state = 1;
    } else if(state == 1) {
    	digitalWrite(LED_YELLOW, HIGH);
    	digitalWrite(LED_YELLOW, LOW);
    	state = 2;
    } else if(state == 2) {
    		digitalWrite(LED_GREEN, HIGH);
    		digitalWrite(LED_GREEN, LOW);
    		state = 0;	
    }
    }
  
  
  
}
