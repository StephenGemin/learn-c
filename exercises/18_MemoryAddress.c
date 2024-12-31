#include <stdio.h>

int main(int argc, char const *argv[])
{
    // memory = an array of bytes within RAM (street)
    // memory block = a single unit (byte) within memory, used to hold some value ( house storing a person)
    // memory address = the address of where a memory block is located (house address)
    char a = 'A';
    char b = 'B';
    char c = 'C';
    short d = 0;
    int e = 0;
    double f = 12;
    char g[4];
    double h[4];

    printf("%-2ld bytes @ %p\n", sizeof(a), &a);
    printf("%-2ld bytes @ %p\n", sizeof(b), &b);
    printf("%-2ld bytes @ %p\n", sizeof(c), &c);
    printf("%-2ld bytes @ %p\n", sizeof(d), &d);
    printf("%-2ld bytes @ %p\n", sizeof(e), &e);
    printf("%-2ld bytes @ %p\n", sizeof(f), &f);
    printf("%-2ld bytes @ %p\n", sizeof(g), &g);
    printf("%-2ld bytes @ %p\n", sizeof(h), &h);
    
    return 0;
}
