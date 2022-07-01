#include <stdio.h>
main()
{ 
 char nomfich[21] ;
 int n ;
 FILE * sortie ;
 printf ("nom du fichier à créer : ") ;
 scanf ("%20s", nomfich) ;
 sortie = fopen (nomfich, "w") ;
 
 do { printf ("donnez un entier : ") ;
 scanf ("%d", &n) ;
 if (n) fwrite (&n, sizeof(int), 1, sortie) ;
 }
 while (n > 100 ) ;
 
 fclose (sortie) ;
}
