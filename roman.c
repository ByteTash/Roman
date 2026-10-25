#include <stdio.h>
#include <stdint.h>

int main(void)
{
    unsigned int deci = 0;
    char roman = 0;
    printf("Enter Roman number in CAPITAL letter:\n");
    scanf("%c", &roman);

    switch(roman)
    {
      case 'I' : 
        deci = 1;
      break;

       case 'V' : 
        deci = 5;
      break;

      case 'X' : 
        deci = 10;
      break;

      case 'L' : 
        deci = 50;
      break;

      case 'C' : 
        deci = 100;
      break;

      case 'D' : 
        deci = 500;
      break;

      case 'M' : 
        deci = 1000;
      break;

      default:
         printf( "Erroneous input");
      return 0;     
    }

    printf( "Roman %c = Decimal %d\n", roman, deci);
    return 0;
  }