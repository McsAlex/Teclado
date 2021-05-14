/*
 * File:   main.c
 * Author: 20185561
 *
 * Created on 5 de Maio de 2021, 14:01
 */


#include "config.h"
#include <xc.h>
#include "LCD4vias.h"
#include "delay.h"
#include "TECLADO.h"

void main(void)
{
    char str[] = "Tecla:    ";
    dispLCD_init();
    Teclado_init();
    
    dispLCD(0,0,"SENAI");
    while( 1 )
    {
        str[7] = Teclado();
        if( str[7] == 0 )
            str[7] = ' ';
        dispLCD( 1,0, str );

    }
}