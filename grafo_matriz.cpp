#include <iostream>
#include <string>
using namespace std;
class Vertice
{
private:
    string nome;
    int inicio;
    int termino;

public:
    Vertice(string nome, int inicio, int termino)
    {
        this->nome = nome;
        this->inicio = inicio;
        this->termino = termino;
    }

    string getNome(){
        return nome;
    }

    void setNome(string nome){
        this->nome = nome;
    }

    int getInicio(){
        return inicio;
    }

    void setInicio(int inicio){
        this->inicio = inicio;
    }

    int getTermino(){
        return termino;
    }

    void setTermino(int termino){
        this->termino = termino;
    }
};

class Grafo
{
private:
    int **matriz;
    Vertice* vertice;
    int tamanho;
    int i;

public:
    Grafo(int tamanho)
    {
        i = 0;
        this->tamanho = tamanho;
        matriz = (int **)malloc(sizeof(int *) * tamanho);
        for (int i = 0; i < tamanho; i++)
        {
            matriz[i] = (int *)malloc(sizeof(int) * tamanho);
        }
        for (int i = 0; i < tamanho; i++)
        {
            for (int j = 0; j < tamanho; j++)
            {
                matriz[i][j] = 0;
            }
        }
        vertice = (Vertice*)malloc(sizeof(Vertice) * tamanho);
        vertice[0].setNome("A");
        vertice[1].setNome("B");
        vertice[2].setNome("C");
        vertice[3].setNome("D");
        vertice[4].setNome("E");
    }

    void addAresta(int i1, int i2){
        matriz[i1][i2]++;
        matriz[i2][i1]++;
    }

    void printMatriz(){
        for(int i = 0; i < tamanho; i++){
            cout << vertice[i].getNome() << " ";
            for(int j = 0; j < tamanho; j++){
                cout << matriz[i][j] << " ";
            }
            cout << "\n";
        }
    }

};

int main(){
    Grafo grafo(5);
    grafo.addAresta(1,2);
    grafo.printMatriz();
}