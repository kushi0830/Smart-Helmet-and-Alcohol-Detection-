#include <REG51.H>

#define LCD P0

sbit RS = P3^0;
sbit RW = P3^1;
sbit EN = P3^2;

sbit HELMET = P1^0;
sbit ALCOHOL = P1^1;

sbit GREEN = P2^0;
sbit RED = P2^1;
sbit BUZZER = P2^2;
sbit RELAY = P2^3;

unsigned char previous_state = 255;

void delay(unsigned int ms)
{
    unsigned int i,j;
    for(i=0;i<ms;i++)
        for(j=0;j<1275;j++);
}

void lcd_cmd(unsigned char cmd)
{
    LCD = cmd;

    RS = 0;
    RW = 0;
    EN = 1;
    delay(2);
    EN = 0;

    if(cmd==0x01)
        delay(5);
}

void lcd_data(unsigned char dat)
{
    LCD = dat;

    RS = 1;
    RW = 0;
    EN = 1;
    delay(2);
    EN = 0;
}

void lcd_string(char *str)
{
    while(*str)
    {
        lcd_data(*str++);
    }
}

void lcd_init()
{
    lcd_cmd(0x38);
    lcd_cmd(0x0C);
    lcd_cmd(0x06);
    lcd_cmd(0x01);
    delay(10);
}

void displayHelmet()
{
    lcd_cmd(0x01);
    lcd_string("WEAR HELMET");
    lcd_cmd(0xC0);
    lcd_string("IGNITION OFF");
}

void displayAlcohol()
{
    lcd_cmd(0x01);
    lcd_string("ALCOHOL");
    lcd_cmd(0xC0);
    lcd_string("DETECTED");
}

void displaySafe()
{
    lcd_cmd(0x01);
    lcd_string("SAFE TO RIDE");
    lcd_cmd(0xC0);
    lcd_string("IGNITION ON");
}

void main()
{
    lcd_init();

    GREEN=0;
    RED=0;
    BUZZER=0;
    RELAY=0;

    delay(50);

    while(1)
    {
        delay(5);

        if(HELMET==0)
        {
            if(previous_state!=0)
            {
                GREEN=0;
                RED=1;
                BUZZER=1;
                RELAY=0;

                displayHelmet();

                previous_state=0;
            }
        }

        else if(ALCOHOL==0)
        {
            if(previous_state!=1)
            {
                GREEN=0;
                RED=1;
                BUZZER=1;
                RELAY=0;

                displayAlcohol();

                previous_state=1;
            }
        }

        else
        {
            if(previous_state!=2)
            {
                GREEN=1;
                RED=0;
                BUZZER=0;
                RELAY=1;

                displaySafe();

                previous_state=2;
            }
        }

        delay(10);
    }
}`