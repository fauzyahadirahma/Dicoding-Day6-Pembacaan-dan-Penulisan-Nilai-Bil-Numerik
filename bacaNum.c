/* File         : bacaNum.c */
/* Penulis      : Fauzyah Hadirahma, email faubelajar@gmail.com */
/* Deskripsi    : contoh membaca nilai numerik */
/* Bilangan bulat dan bilangan rill */
/* Kemudian menuliskan nilai yang dibaca */

#include <stdio.h>
int main () 
{
    /* KAMUS */
    int a;
    float x;
    
    /* PROGRAM */
    printf ("Contoh membaca dan menulis, ketik nilai integer: ");
    scanf ("%d", &a); /* membaca nilai a yang bertype integer, perhatikan bahwa nama variable ditulis dengan &a */
    printf ("Nilai yang dibaca: %d \n", a);
    
    printf ("ketik nilai sebuah bilangan rill: ");
    scanf ("%f", &x); /* membaca nilai x yang bertipe float */
    printf ("Nilai yang dibaca: %f \n", x);
    
    return 0;
}
