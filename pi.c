#include <stdio.h>

#define PREC 		10000
#define TABLE_LEN	8400
#define TEST        5
#define STR_START   "PI=3."

long i, j;

long resultat;
long retenue;
long table[TABLE_LEN + 1];
long tmp;
char start = 1;

int main(int argc, char *argv[])
{
    for (i = 0; i <= TABLE_LEN; ++i) {
        table[i] = PREC / 5;
    }

    for (j = TABLE_LEN / 14; j > 0; --j) {
    	resultat = 0;
    	for (i = j * 14; i > 0; --i) {
    		tmp = (resultat * i) + (table[i] * PREC);
    		resultat = tmp / ((2 * i) - 1);
    		table[i] = tmp % ((2 * i) - 1);
    	}
        if (!start) {
    	    printf("%.4ld", retenue + (resultat / PREC));
        }
        else {
            printf((char *)STR_START);
            start = 0;
        }
    	retenue = resultat % PREC;
    }

    return(0);
}
