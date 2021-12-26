#include <stdio.h>

int main()
{
    int T, p = 0;
    char buffer[21000], c;
    
    scanf ("%d", &T);
    int arrR[T];
    
    for ( int i = 0; i < T; i++ ) {
        scanf ("%d ", &arrR[i]);
        
        do{
            c = getchar();
            buffer[p++] = c;
        }
        while ( c != '\n' );
    }
    
    p = 0;
    
    for ( int i = 0; i < T; i++ ) {
        while ( buffer[p] != '\n' ) {
            for ( int j = 0; j < arrR[i]; j++ ) {
                printf ("%c", buffer[p]);
            }
            p++;
        }
        p++;
        printf ("\n");
    }
    return 0;
}
