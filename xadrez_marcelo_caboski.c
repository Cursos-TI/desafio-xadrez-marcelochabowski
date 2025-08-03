#include <stdio.h> // biblioteca padrão

int main(){
    char tabuleiro[8][8] = { // usando char para criar tabulerio
        {'T','C','B','D','R','B','C','T'},
        {'P','P','P','P','P','P','P','P'},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {' ',' ',' ',' ',' ',' ',' ',' '},
        {'p','p','p','p','p','p','p','p'},
        {'t','c','b','d','r','b','c','t'}
    };
    for (int i = 0; i < 8; i++){
      for ( int j = 0; j < 8; j++) {
    // criando função de repetição
      printf(" [%c]", tabuleiro[i][j]);
      }
      printf("\n");
    }
    return 0;

}