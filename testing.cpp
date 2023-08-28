#include <iostream>
#include <string>
using namespace std;

class Vertice {
    private:
        char nome;
        Vertice* prox;

    public:
        Vertice(char nome, Vertice* prox){
            this->nome = nome;
            this->prox = prox;
        }

        char getNome(){
            return nome;
        }

        void setNome(char nome){
            this->nome = nome;
        }

        Vertice* getProx(){
            return prox;
        }

        void setProx(Vertice* prox){
            this->prox = prox;
        }
};

class Grafo {
    private:
        Vertice* lista;
        int tamanho;
    
    public:
        Grafo(int tamanho){
            this->tamanho = tamanho;
            this->lista = (Vertice*)malloc(sizeof(Vertice) * tamanho);
            for(int i = 0; i < tamanho; i++){
                Vertice v((char)(65 + i), nullptr);
                lista[i] = v;
            }
        }

        void printVertices(){
            for(int i = 0; i < tamanho; i++){
                cout << i << " " << lista[i].getNome();
                cout << "\n";
            }
        }

        void printGrafo(){
            for(int i = 0; i < tamanho; i++){
                for(Vertice* j = &lista[i]; j != 0; j = j->getProx()){
                    cout << j->getNome() << "->";
                }
                cout << "\n";
            }
        }

        void addAresta(char n1, char n2){
            for(int i = 0; i < tamanho; i++){
                if(n1 == lista[i].getNome()){
                    Vertice* v = (Vertice*)malloc(sizeof(Vertice));
                    v = new Vertice(n2, lista[i].getProx());
                    lista[i].setProx(v);
                }
            }
        }
};

int main(){
    Grafo grafo(5);
    grafo.addAresta('A','C');
    grafo.addAresta('A','B');
    grafo.addAresta('A','D');
    grafo.addAresta('A','E');
    grafo.printGrafo();
}