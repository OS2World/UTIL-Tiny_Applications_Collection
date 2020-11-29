/*
 * Encrypts message using ROT13
 * $Id: rot13.c,v 1.3 2005/12/29 18:50:28 mina86 Exp $
 * Released to Public Domain
 */
#include <stdio.h>
void main(a){while(0>(a=~getchar()))putchar(~a-1/(~(a|32)/13*2-11)*13);}
