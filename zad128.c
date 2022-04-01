// Program treba provjerit je li matrica jedinicna.

#include <stdio.h>

int main()
{
    int A[10][10],B[10][10],i,j,m,n;
    int  jedinicna;

   printf("Unesi broj redaka: ");
        scanf("%d", &m);
        printf("\nUnesi broj stupaca: ");
        scanf("%d",&n);
        printf("\nUnesi vrijednosti matrice: \n");
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                 printf("\nUnesi element A[%d][%d] : ",i,j);
                 scanf("%d", &A[i][j]);
        }
    }

    /*
     	Provjeravamo jeli jedinicna matrica.
     */
    jedinicna = 1;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {

            if(i==j && A[i][j]!=1)
            {
                /* Elementi gl.dijagonale nisu jednkai 1 */
                jedinicna = 0;
            }
            else if(i!=j && A[i][j]!=0)
            {
                /* Drugi elementi nisu jednaki 0 */
                jedinicna = 0;
            }
        }
    }

    /*
     	Ako je jedinicna matrica.
     */
    if(jedinicna==1)
    {
        printf("\nDana matrica je jedinicna.\n");

        /*
         	Ispis jedinicne matrice.
         */
        for (i = 0; i < m; ++i)
        {
        for (j = 0; j < n; ++j)
        {
            printf("\t%d", A[i][j]);
        }
        printf("\n\n");
    }
    }
    else
    {
        printf("Dana matrica nije jedinicna matrica.");
    }

    return 0;
}
