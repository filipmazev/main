/* Од стандарден елемент се вчитуваат број N и елементите во квадратна матрица (NxN).
Дадената матрица да се трансформира на начин што секој елемент во неа ќе биде заменет
со сумата на елементите на дијагоналата во која што припаѓа. Дијагоналите треба да бидат
паралелни на главната дијагонала.   Пример, матрицата:
1  2  3  4  5 2  3  4  5  6 0  1  1  2  5 5  5  5  5  5 7  8  9  7  7
би се  трансформирала во следната матрица:
17 13 13 10 5 15 17 13 13 10 14 15 17 13 13 13 14 15 17 13 7  13 14 15 17 */

#include <iostream>
using namespace std;

int main()
{
    int n; cin>>n; int A[n][n];

    // vnes na matrica
    for(int i=0; i<n; i++)
        { for(int j=0; j<n; j++) {
            cin>>A[i][j]; } } cout<<endl;

    //pechatenje na transformiranata matrica
    for(int i=0; i<n; i++) {
          for(int j=0; j<n; j++) {
            /* za da ne gi izgubime poziciite i, j, koga
            kje gi manipulirame podole, deklarirame
            promenlivi i2, j2, i3, j3, ednakvi na niv
            ova se deklarira na sekoj ciklus kaj jod,
            odnosno za sekoja pozicija, deklarirame
            i suma, sum, ednakva na 0 ( za da ne dade
            random broj, stavame sum = 0 ) */
            int i2 = i, j2 = j, j3 = j, i3 = i, sum=0;

            /* prv ciklus, while, koj se povtoruva se dodeka
            i2 ( pozicija i, redot ) e pomalo od n, ova go
            pravime za da ne izlezeme od granicite na matricata,
            zatoa shto dodavame na i, j ( i2++, j2++ ), treba
            da proveruvame dali toa e vo ramkite na matricata,
            pr. 3x3 matrica kje ima granica od 2 ( n-1, 0,1,2 ),
            pa se dodeka e < od 3, kje go povtoruva ciklusot */
            while ( i2 < n && j2 < n ) {
            //gi sobirame elementite so sum+= ( sum = sum + _____ )

            /*odime za edno mesto pogore i kaj i, i kaj j, eve zoshto:
            1 2 3 4  pr od 1, dijagonalno od toa e 6, od 6 e 2, od 2 e 7
            5 6 7 8  ako odime po glavna dijagonala, a poziciite se:
            9 1 2 3  1 e na A[0][0] pozicija, 6 e na A[1][1], 2 e na
            4 5 6 7  A[2][2] itn itn.*/
            sum+=A[i2][j2]; i2++; j2++; }

            while ( i3-1 >= 0 && j3-1 >= 0 ){
            /* gi sobirame elementite so sum+= ( sum = sum + _____ );

            1 2 3 4  za 7 na pozicija A[1][2], nad toa e 2 vo dijagonalata
            5 6 7 8  2 e na pozicija A[0][1], odnosno za 1 pomalo kaj i, j
            9 1 2 3  vazhi i za drugi kade ima povekje, pr kaj 2 A[2][2],
            4 5 6 7  nad toa ima 6 A[1][1] i 1 A[0][0], sekogash za 1 pomalku
            treba da proverime i dali ima element nagore od dijagonalata
            primer vo sluchajot na 7, vo dijagonalata ima i 2, i 3, 3 go
            naogjae so metodot pogre kade dodadavame na i, j, dodeka 2
            go naogjame so odzemanje, bidejki sekogash toj element e za
            1 pomalo na dvete pozicii, objasneto pogore kaj pr za matrica. */
            i3--; j3--; sum+=A[i3][j3]; }

            /*pechatenje na momentalnata suma, sum go vrakjame na 0
            za sledniot ciklus ( sum=0; ) */
            cout<<sum<<" "; sum=0; }
        cout<<endl; }

return 0;
}

