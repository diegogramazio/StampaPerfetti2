#include <stdio.h>

/* funzione che determina se un numero e' perfetto */
int isPerfetto(int numero) {
      int somma =0;                 // per contenere la somma dei divisori
      /* somma alla variabile somma ciascun numero fra 1 e numero-1 che divide numero */
      for(int i=1; i<numero; i++)
             if(numero%i==0)
                   somma+=i;
      return numero==somma;
}

/* applicazione che legge un numero e stampa tutti i
 * numeri perfetti compresi fra 1 e quel numero */
int main() {
      int limite;           // fino a che numero ti vuoi spingere

      /* INPUT */
      printf("Caro utente, fino a che cazzo di numero ti vuoi spingere brutto figlio di puttana?\n");
      scanf("%d", &limite);
      /* controlla ciascun numero fra 1 e limite; se perfetto, stampalo */
      for(int i=1; i<=limite; i++)
            if(isPerfetto(i))
                  printf("Ho trovato un numero perfetto: %d\n", i);
      system("PAUSE");
}
