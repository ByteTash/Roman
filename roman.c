#include <stdio.h>
#include <stdint.h>

int main(void)
{
    unsigned int deci = 0;
    char roman = 0;
    char userInput;
    printf("Enter Roman number in CAPITAL letter:\n");
    scanf("%c", &roman);
    scanf("%c", &userInput);

    if(roman == 'I'){
      deci = 1;
      printf( "Roman %c = Decimal %d\n", roman, deci);
      return 0;
    }


    if(roman == 'V'){
      deci = 5;
      printf( "Roman %c = Decimal %d\n", roman, deci);
      return 0;
    }
  if(roman == 'X'){
       deci = 10;
           printf( "Roman %c = Decimal %d\n", roman, deci);
           return 0;
    }
    if(roman == 'L'){
       deci = 50;
           printf( "Roman %c = Decimal %d\n", roman, deci);
           return 0;
    }
    if(roman == 'C'){
       deci = 100;
           printf( "Roman %c = Decimal %d\n", roman, deci);
           return 0;
    }
    if(roman == 'D'){
       deci = 500;
           printf( "Roman %c = Decimal %d\n", roman, deci);
           return 0;
    }
    if(roman == 'M'){
       deci = 1000;
           printf( "Roman %c = Decimal %d\n", roman, deci);
           return 0;
    }
    

     if(userInput != roman){
      printf( "Erroneous letter");
      return 0;
    }

   
    
    
    
    
    
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