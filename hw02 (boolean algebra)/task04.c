#include <stdio.h>

int main()
{
     int A, B, boolEXP1, boolEXP2;
        
     printf("| A | B | (!A||B) | (A&&B)||(!A&&!B) |\n");
     printf("--------------------------------------\n");

        for(A=0; A<2; A++)
        {
            for(B=0; B<2; B++)
            {
                boolEXP1 = !A||B;   //implication
                boolEXP2 = (A&&B)||(!A&&!B);    //equivalent                
                printf("| %d | %d |    %d    |         %d        |\n", A, B, boolEXP1, boolEXP2);
            };
        };
        
     printf("--------------------------------------\n");
        
        return 0;
}

