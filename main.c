//
//  main.c
//  poklesla_podposloupnost
//
/*Budeme zkoumat konečné posloupnosti celých čísel. Podposloupností délky K vybranou ze zadané posloupnosti rozumíme libovolnou uspořádanou K-tici čísel takovou, že všechna její čísla se nacházejí v původní posloupnosti a navíc pořadí čísel v K-tici je stejné jako pořadí těchto čísel v původní posloupnosti.
 
 O posloupnosti čísel a[1], a[2], …, a[K] řekneme, že je nejvýše s jedním poklesem, jestliže buď a[i] ≤ a[i+1] pro všechna i od 1 do K-1, nebo pokud existuje jediný index j z rozmezí od 1 do K-1, pro který platí a[j] > a[j+1].

 Napište program, který určí délku nejdelší takové podposloupnosti vybrané ze zadané posloupnosti N celých čísel, aby byla nejvýše s jedním poklesem. Na prvním řádku standardního vstupu programu bude zadáno kladné celé číslo N, N ≤ 10 000. Na druhém řádku je pak uvedena celá zkoumaná posloupnost N celých čísel, čísla jsou od sebe oddělena vždy jednou mezerou. Program vypíše na standardní výstup jedno celé číslo - nalezenou délku.

 Příklad:
 Pro vstup ve tvaru

 9
 5 9 7 3 7 8 2 4 1
 bude výsledkem číslo 6, neboť nejdelší vybraná podposloupnost s nejvýše jedním poklesem je tvořena šesti prvky: 5 7 7 8 2 4.*/
//  Created by Natálie Smolíková on 25.11.2021.
//

#include <stdio.h>
#include<stdlib.h>

int pole[10000];
int pom[10000];

 
int main() {
    int N, max1;
    int *t, *p;
    int i, k, j;
    
    scanf("%d", &N);
    if (N ==0) printf("%d ", 0);
    else{
        t = malloc(sizeof(int)*N);
        p = malloc(sizeof(int)*N);
        //načtení do pole posloupnost
        for (i =0; i<=N-1;i++)
        {
            scanf("%d", &pole[i]);
        }
        for (k= 0;k<=N-1;k++)
        {  t[k] = 1;
            p[k] = 0;
            
        }
        max1 = 1;
    
    }
    
    for(i =N-1; i>=0; i--)
    {    for(j = i+1; j < N; j++)
        {
            if (pole[i] > pole[j] )
            {   if (p[i] < t[j] +1)
                    {   p[i] = t[j] +1;
                        if (p[i]>max1)
                            max1 = p[i];
                    }
                
            }
            else{
                if (t[i] < (t[j]+1) )
                {   t[i]=t[j]+1;
                    if (t[i] > max1)  max1=t[i];
                }
                if (p[i] < p[j]+1 )
                {   p[i]=p[j]+1;
                    if (p[i] > max1) max1=p[i];}
                
            }
        }
        
    }
        printf("%d ", max1);
    
    return 0;
}

