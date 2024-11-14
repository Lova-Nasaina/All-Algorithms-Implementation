#include <stdio.h>
#include <stdlib.h>

void search_val(int val, int* tab, int n)
{
    int i;
    int inf = 1, sup = n, mil, pos = 0;

    while ( inf <= sup & pos == 0)
    {
        mil = (inf + sup) / 2;
        if (val == tab[mil])
        {
            pos = mil;
        }else{
            if (val == tab[mil])
            {
                sup = mil - 1;
            }else{
                inf = mil + 1;
            }
        }
    };

    if( pos == 0 )
    {
        printf("%d : ne se trouve pas dans le tableau", val);
    }else{
        printf("%d : se trouve a la position tab[%d]", val, pos);
    }

}

int main()
{
    int tab[100];
    int valeur, n, i;

    printf("entrer la dimension du tab en INTERGER : ");
    scanf("%d", &n);
    for(i=0 ; i < n ; i++)
    {
        printf("tab[%d] : ", i);
        scanf("%d", &tab[i]);
    }
    printf("\n valeur a chercher : ");
    scanf("%d", &valeur);


    search_val(valeur, &tab, n);

    return 0;
}
