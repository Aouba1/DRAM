#ifndef PINS_H
#define PINS_H

// Pin 20 is reserved for SDA
// Pin 21 is reserved for SCL

// Controlling Signals.
#define W 40    // Digital Pin 44
#define RAS 41  // Digital Pin 45
#define CAS 42  // Digital Pin 46
#define G 43    // Digital Pin 47

// Address Pins.
#define ADD0 22   // Digital Pin 22
#define ADD1 23   // Digital Pin 23
#define ADD2 24   // Digital Pin 24
#define ADD3 25   // Digital Pin 25
#define ADD4 26   // Digital Pin 26
#define ADD5 27   // Digital Pin 27
#define ADD6 28   // Digital Pin 28
#define ADD7 29   // Digital Pin 29
#define ADD8 30   // Digital Pin 30
#define ADD9 31   // Digital Pin 31

// Data Pins.
// Lower Nibble.
#define DA1 32   // Digital Pin 34
#define DA2 33   // Digital Pin 35
#define DA3 34   // Digital Pin 36
#define DA4 35   // Digital Pin 37

// Higher Nibble.
#define DA5 36   // Digital Pin 38
#define DA6 37   // Digital Pin 39
#define DA7 38   // Digital Pin 40
#define DA8 39   // Digital Pin 41

// Keypad Pins.
// Rows.
#define R1 44   // Digital Pin 44
#define R2 45   // Digital Pin 45
#define R3 46   // Digital Pin 46
#define R4 47   // Digital Pin 47

// Columns.
#define C1 48   // Digital Pin 48
#define C2 49   // Digital Pin 49
#define C3 50   // Digital Pin 50
#define C4 51   // Digital Pin 51

#endif