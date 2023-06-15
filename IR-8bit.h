
void IR_38kHz_OSC(unsigned long t,uint8_t pin){
    for(unsigned long i=0;i<t;i+=26){
        digitalWrite(pin,HIGH);
        delayMicroseconds(9);
        digitalWrite(pin,LOW);
        delayMicroseconds(10);
    }
}
