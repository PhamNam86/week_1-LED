#include<16F887.h>
#DEVICE *=16 ADC=10 
#FUSES HS,NOWDT,NOPUT,NOLVP 
#USE DELAY(CLOCK=16M) 
#include<luutinh.h>
void main()
{
set_tris_b(0x00);  // khai bao port b la output 
set_tris_a(0b00000000); 
set_tris_c(0b00000000); 
set_tris_d(0b00000000); 
set_tris_e(0b00000000); 
while(TRUE){
output_b(0x00);
delay_ms(500);
output_b(0x11);
delay_ms(500);
output_b(0x22);
delay_ms(500);
output_b(0x33);
delay_ms(500);
output_b(0x44);
delay_ms(500);
output_b(0x55);
delay_ms(500);
output_b(0x66);
delay_ms(500);
output_b(0x77);
delay_ms(500);
output_b(0x88);
delay_ms(500);
output_b(0x99);
delay_ms(500);
output_b(0xAA);
delay_ms(500);
output_b(0xBB);
delay_ms(500);
output_b(0xDD);
delay_ms(500);
output_b(0xFF);
delay_ms(500);
/*
output_high(pin_b0); 
output_low(pin_b1); 
output_high(pin_b2); 
output_low(pin_b3); 
output_high(pin_b4) ;
output_low(pin_b5);
output_high(pin_b6); 
output_low(pin_b7);
*/
}
}