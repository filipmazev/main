#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, bigger, smaller, max=0; scanf("%d", &n);
    int A[n];

    for(int i=0; i<n; i++){ scanf("%d", &A[i]);  }

    for(int i=0; i<n-1; i++)
    {
        for(int j=i; j<n; j++){
            bigger = A[i]; smaller = A[j];
            if(A[j] > A[i]){ bigger = A[j]; smaller = A[i]; }
            if( (bigger-smaller) > max ){ max = (bigger-smaller); } }

        for(int j=i; j>=0; j--){
            bigger = A[i]; smaller = A[j];
            if(A[j] > A[i]){ bigger = A[j]; smaller = A[i]; }
            if( (bigger-smaller) > max ){ max = (bigger-smaller); }}
    }

    printf("Najgolema razlika: %d", max);

    return 0;
}
