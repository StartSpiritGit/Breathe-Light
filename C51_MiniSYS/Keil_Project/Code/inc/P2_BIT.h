#ifndef P2_BIT_H
#define P2_BIT_H

/*
Attention: This file must be placed in the inc folder of the Keil project to be compiled by Keil.

The path of the Keil project is:
**\Keil_v5\C51\INC

/* Define the data type of P2_BIT */
typedef enum
{
    Low,
    High
}bool_Type;

#define P2_PORT_PIN_COUNT 8
#define P2_PORT_PIN_0 0
#define P2_PORT_PIN_1 1
#define P2_PORT_PIN_2 2
#define P2_PORT_PIN_3 3
#define P2_PORT_PIN_4 4
#define P2_PORT_PIN_5 5
#define P2_PORT_PIN_6 6
#define P2_PORT_PIN_7 7

bool_Type P2_BIT[P2_PORT_PIN_COUNT] = {High, High, High, High, High, High, High, High};

#endif