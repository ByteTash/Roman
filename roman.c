#include <stdio.h>
#include <stdint.h>

int main(void)
{
    unsigned int deci = 0;
    char roman = 0;

    roman = 'I';
    deci = 1;
    printf( "Roman %c = Decimal %d\n", roman, deci);

    roman = 'V';
    deci = 5;
    printf( "Roman %c = Decimal %d\n", roman, deci);

    roman = 'X';
    deci = 10;
    printf( "Roman %c = Decimal %d\n", roman, deci);

    roman = 'L';
    deci = 50;
    printf( "Roman %c = Decimal %d\n", roman, deci);

    roman = 'C';
    deci = 100;
    printf( "Roman %c = Decimal %d\n", roman, deci);

    roman = 'D';
    deci = 500;
    printf( "Roman %c = Decimal %d\n", roman, deci);

    roman = 'M';
    deci = 1000;
    printf( "Roman %c = Decimal %d", roman, deci);
    
    return 0;
}