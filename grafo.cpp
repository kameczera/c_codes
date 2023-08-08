#include <iostream>
#include <string>
using namespace std;
class Vertice
{
private:
    string nome;
    int index;

public:
    Vertice(string nome, int index)
    {
        this->nome = nome;
        this->index = index;
    }

    string getNome(){
        return nome;
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
    }

    void addVertice(string nome){
        if(i < tamanho){
            Vertice v(nome, i);
            vertice[i] = v;
        }
    }

    void printVertice(int index){
        cout << vertice[index].getNome() << " " << i;
    }

    void addAresta(int i1, int i2, int val){
        matriz[i1][i2]
    }
};

int main(){
    Grafo grafo(5);
    grafo.addVertice("arroz");
    grafo.printVertice(0);
}