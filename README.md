# podposloupnost

CZ:
Budeme zkoumat konečné posloupnosti celých čísel. Podposloupností délky K vybranou ze zadané posloupnosti rozumíme libovolnou uspořádanou K-tici čísel takovou, že všechna její čísla se nacházejí v původní posloupnosti a navíc pořadí čísel v K-tici je stejné jako pořadí těchto čísel v původní posloupnosti.
 
 O posloupnosti čísel a[1], a[2], …, a[K] řekneme, že je nejvýše s jedním poklesem, jestliže buď a[i] ≤ a[i+1] pro všechna i od 1 do K-1, nebo pokud existuje jediný index j z rozmezí od 1 do K-1, pro který platí a[j] > a[j+1].

 Napište program, který určí délku nejdelší takové podposloupnosti vybrané ze zadané posloupnosti N celých čísel, aby byla nejvýše s jedním poklesem. Na prvním řádku standardního vstupu programu bude zadáno kladné celé číslo N, N ≤ 10 000. Na druhém řádku je pak uvedena celá zkoumaná posloupnost N celých čísel, čísla jsou od sebe oddělena vždy jednou mezerou. Program vypíše na standardní výstup jedno celé číslo - nalezenou délku.

 Příklad:
 Pro vstup ve tvaru

 9
 5 9 7 3 7 8 2 4 1
 bude výsledkem číslo 6, neboť nejdelší vybraná podposloupnost s nejvýše jedním poklesem je tvořena šesti prvky: 5 7 7 8 2 4.

 EN:
 We will examine finite sequences of integers. A subsequence of length K selected from a given sequence is defined as any ordered tuple of K numbers such that all of its numbers are present in the original sequence, and the order of the numbers in the tuple is the same as their order in the original sequence.

A sequence of numbers a[1], a[2], ..., a[K] is said to have at most one descent if either a[i] ≤ a[i+1] for all i from 1 to K-1 or if there exists a unique index j in the range from 1 to K-1 for which a[j] > a[j+1].

Write a program that determines the length of the longest subsequence selected from a given sequence of N integers, which has at most one descent. The first line of the program's standard input will contain a positive integer N, N ≤ 10,000. The second line will then provide the entire sequence of N integers to be examined, with each number separated by a single space. The program should output a single integer to the standard output - the length of the longest subsequence found.

Example:
For input in the format:

9
5 9 7 3 7 8 2 4 1
the expected output is 6, as the longest selected subsequence with at most one descent consists of six elements: 5 7 7 8 2 4.
