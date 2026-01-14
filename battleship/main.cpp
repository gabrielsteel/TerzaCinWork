#define DIM 10

#include <iostream>
#include <ctime>
using namespace std;

void inizializzaMatrice(char matrice[DIM][DIM]){
    for(int i = 0;i<DIM;i++){
        for(int j = 0;j<DIM;j++){
            matrice[i][j] = '-';   
        }
    } 
}

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

void PlaceShips(char matrice[DIM][DIM]){
    PlaceShip(matrice,2);
    PlaceShip(matrice,2);
    PlaceShip(matrice,3);

}

void play(char matrice[DIM][DIM]){
    while (true) {
        string shot;
        stampaMatrice(matrice);
        cout<<"inserisci le cordinate del colpo: ";
        cin>> shot;
        int riga = shot[0] - 'A';
        int colonna = stoi(shot.substr(1)) - 1;
        if(matrice[riga][colonna] == '*'){
            cout<<"colpito!" << endl;
            matrice[riga][colonna] == 'X';
        }
        else{
            cout<<"mancato" << endl;
            matrice[riga][colonna] == 'O';
        }


    }
}

int main()
{
    srand(time(0));
    char m[DIM][DIM];
    
    inizializzaMatrice(m);
    PlaceShips(m);
    play(m);
}