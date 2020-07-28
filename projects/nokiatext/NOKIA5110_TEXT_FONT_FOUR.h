// ASCII font file : Seven Segment 4 by 8 

// Define the ASCII table as Data array
// cols left to right 0x00 is  off 0xFF is all on
// Each character is five bytes wide one byte height. 
// so ! is 0x36 0 0  0 0 , Also in code adds two blank lines on either side so in effect 0 36 0 0 0 0 0 
// Each character is in a 6 by 8 pixel box 

#ifndef NOKIA5110_TEXT_FONT_FOUR_H
#define NOKIA5110_TEXT_FONT_FOUR_H

const unsigned char ASCII_FOUR[92][4] = {
	{0x00,0x00,0x00,0x00}, //  
	{0x36,0x00,0x00,0x00}, // !
	{0x06,0x00,0x00,0x06}, // "
	{0x36,0x49,0x49,0x36}, // #
	{0x06,0x49,0x49,0x30}, // $
	{0x36,0x49,0x49,0x36}, // %
	{0x36,0x49,0x49,0x36}, // &
	{0x06,0x00,0x00,0x00}, // '
	{0x36,0x41,0x41,0x00}, // (
	{0x41,0x41,0x36,0x00}, // )
	{0x06,0x09,0x09,0x06}, // *
	{0x36,0x08,0x08,0x00}, // +
	{0x30,0x00,0x00,0x00}, // ,
	{0x08,0x08,0x00,0x00}, // -
	{0x30,0x00,0x00,0x00}, // .
	{0x30,0x08,0x08,0x06}, // /
	{0x36,0x41,0x41,0x36}, // 0
	{0x36,0x00,0x00,0x00}, // 1
	{0x30,0x49,0x49,0x06}, // 2
	{0x49,0x49,0x36,0x00}, // 3
	{0x06,0x08,0x08,0x36}, // 4
	{0x06,0x49,0x49,0x30}, // 5
	{0x36,0x49,0x49,0x30}, // 6
	{0x01,0x01,0x36,0x00}, // 7
	{0x36,0x49,0x49,0x36}, // 8
	{0x06,0x49,0x49,0x36}, // 9
	{0x36,0x00,0x00,0x00}, // :
	{0x36,0x00,0x00,0x00}, // ;
	{0x36,0x41,0x41,0x00}, // <
	{0x48,0x48,0x00,0x00}, // =
	{0x41,0x41,0x36,0x00}, // >
	{0x30,0x09,0x09,0x06}, // ?
	{0x36,0x49,0x49,0x36}, // @
	{0x36,0x09,0x09,0x36}, // A
	{0x36,0x49,0x49,0x36}, // B
	{0x36,0x41,0x41,0x00}, // C
	{0x30,0x48,0x48,0x36}, // D
	{0x36,0x49,0x49,0x00}, // E
	{0x36,0x09,0x09,0x00}, // F
	{0x36,0x49,0x49,0x30}, // G
	{0x36,0x08,0x08,0x36}, // H
	{0x36,0x00,0x00,0x00}, // I
	{0x40,0x40,0x36,0x00}, // J
	{0x36,0x08,0x08,0x36}, // K
	{0x36,0x40,0x40,0x00}, // L
	{0x36,0x01,0x01,0x36}, // M
	{0x36,0x01,0x01,0x36}, // N
	{0x36,0x41,0x41,0x36}, // O
	{0x36,0x09,0x09,0x06}, // P
	{0x06,0x09,0x09,0x36}, // Q
	{0x36,0x01,0x01,0x00}, // R
	{0x06,0x49,0x49,0x30}, // S
	{0x36,0x48,0x48,0x00}, // T
	{0x36,0x40,0x40,0x36}, // U
	{0x36,0x40,0x40,0x36}, // V
	{0x36,0x40,0x40,0x36}, // W
	{0x36,0x08,0x08,0x36}, // X
	{0x06,0x08,0x08,0x36}, // Y
	{0x30,0x49,0x49,0x06}, // Z
	{0x36,0x41,0x41,0x00}, // [
	{0x06,0x08,0x08,0x30}, // "\"
	{0x41,0x41,0x36,0x00}, // ]
	{0x06,0x01,0x01,0x06}, // ^
	{0x40,0x40,0x00,0x00}, // _
	{0x06,0x00,0x00,0x00}, // `
	{0x30,0x49,0x49,0x36}, // a
	{0x36,0x48,0x48,0x30}, // b
	{0x36,0x41,0x41,0x00}, // c
	{0x30,0x48,0x48,0x36}, // d
	{0x36,0x49,0x49,0x00}, // e
	{0x36,0x09,0x09,0x00}, // f
	{0x06,0x49,0x49,0x36}, // g
	{0x36,0x08,0x08,0x30}, // h
	{0x36,0x00,0x00,0x00}, // i
	{0x40,0x40,0x36,0x00}, // j
	{0x36,0x08,0x08,0x36}, // k
	{0x36,0x00,0x00,0x00}, // l
	{0x36,0x01,0x01,0x36}, // m
	{0x36,0x01,0x01,0x36}, // n
	{0x36,0x41,0x41,0x36}, // o
	{0x36,0x09,0x09,0x06}, // p
	{0x06,0x09,0x09,0x36}, // q
	{0x36,0x01,0x01,0x00}, // r
	{0x06,0x49,0x49,0x30}, // s
	{0x36,0x48,0x48,0x00}, // t
	{0x36,0x40,0x40,0x36}, // u
	{0x36,0x40,0x40,0x36}, // v
	{0x36,0x40,0x40,0x36}, // w
	{0x36,0x08,0x08,0x36}, // x
	{0x06,0x48,0x48,0x36}, // y
	{0x30,0x49,0x49,0x06}, // z
};

#endif
