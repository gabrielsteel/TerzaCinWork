#define DIM 10

#include <iostream>
#include <ctime>
using namespace std;

void stampaMatrice(char matrice[DIM][DIM]){
    cout<<endl<<"  ";
    for(int l = 1;l<=DIM;l++){
        cout<<l<<" ";
    }
    cout<<endl;
    for(int i = 0;i<DIM;i++){
        cout<<char('A'+i)<<" ";
        for(int j = 0;j<DIM;j++){
            cout<<matrice[i][j]<<" ";
            
        }
    cout<<endl;
    }

}
void PlaceShip(char matrice[DIM][DIM], int lenght){
    int riga = rand() % DIM;
    int colonna = rand() % (DIM-(lenght-1));
    for (int i = 0;i<lenght;i++) matrice[riga][colonna+i] = '*';
}
    


int main()
{
    srand(time(0));
    char m[DIM][DIM];
    
    for(int i = 0;i<DIM;i++){
        for(int j = 0;j<DIM;j++){
            m[i][j] = '-';
        }
    }

    PlaceShip(m,2);
    stampaMatrice(m);
}