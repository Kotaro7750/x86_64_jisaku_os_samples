#ifndef _FBCON_H_
#define _FBCON_H_

void putc(char c);
void puts(char *s);
void putd(unsigned long long val, unsigned char num_digits);
void move_cursor(unsigned int x, unsigned int y);

#endif
