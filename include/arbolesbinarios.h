#ifndef ARBOLESBINARIOS_H
#define ARBOLESBINARIOS_H
#include <iomanip>

#include <iostream>
using namespace std;
class NodeABB
{
    public:
        NodeABB(int v);
        void showNodeABB(){cout<<valor<<" ";};
        void set_value(int v){this->valor=v;};
        int get_value(){return this->valor;};
        void set_derecha(NodeABB*c){this->derecha=c;};
        NodeABB*get_derecha(){return this->derecha;};
        void set_izquierda(NodeABB*d){this->izquierda=d;};
        NodeABB*get_izquierda(){return this->izquierda;};
        void preorder();
        void postorder();
        void inorder();
        void printTree(int indent);
    private:
        int valor;
        NodeABB*derecha;
        NodeABB*izquierda;
};
class arbolbinario
{
    public:
        arbolbinario(){this->head=nullptr;};
        void addABB(int v,NodeABB*padre);
        NodeABB*get_head(){return this->head;};
        void preorder();
        void postorder();
        void inorder();
        void show();
        void printTree() ;
    private:
        NodeABB*head;
};


#endif // ARBOLESBINARIOS_H
