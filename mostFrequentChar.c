#include <stdio.h>
#include <ctype.h>
#include <stdbool.h>

int main (void)
{
    char buffer[1000000];
    int count[26] = { 0 }, multi = 0;
    char answer, *p;
    int max = 0;
    
    p = buffer;
    scanf ("%s", p);
    for ( ; *p; p++ ) *p = toupper (*p);
    
    p = buffer;
    for ( ; *p; p++ ) count[*p - 'A']++;
    
    for ( int i = 0; i < 26; i++ )
        if ( count[i] > max )
            max = count[i];
    
    for ( int i = 0; i < 26; i++ )
        if ( count[i] == max ) {
            answer = i + 'A';
            multi++;
        }
    
    if ( multi != 1 )
        printf ("?\n");
    else
        printf ("%c\n", answer);
    
    return 0;
}
