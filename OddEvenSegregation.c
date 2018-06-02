/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n = 2376, oe = 0, ctr, evenctr=0, oddctr = 0;
    int d, even[15], odd[15];
    while(n > 0){
        d = n % 10;
        n = n / 10;
       // printf("%d ",d);
        if(d % 2 == 0){
            even[evenctr] = d;
            evenctr++;
        }
        else{ 
            odd[oddctr] = d;
            oddctr++;
        }
        //i++;
    }
    //printf("%d", i);
    if(oe){
        for(ctr = evenctr-1; ctr >= 0; ctr--)
            printf("%d ", even[ctr]);
        for(ctr = oddctr-1; ctr >= 0; ctr--)
            printf("%d ", odd[ctr]);
    }
    else{
        for(ctr = oddctr -1; ctr >= 0; ctr--)
            printf("%d ", odd[ctr]);
        for(ctr = evenctr-1; ctr >= 0; ctr--)
            printf("%d ", even[ctr]);
        
    }

    return 0;
}
