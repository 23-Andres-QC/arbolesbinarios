#include "arbolesbinarios.h"

NodeABB::NodeABB(int v){
    this->valor=v;
    this->derecha=nullptr;
    this->izquierda=nullptr;
}
void arbolbinario::addABB(int v,NodeABB*padre){

    if(this->head==nullptr){
        NodeABB*p=new NodeABB(v);
        this->head=p;
    }else{

        if(v<padre->get_value()){
            //izquierda
            if(padre->get_izquierda()==nullptr){
                NodeABB*p=new NodeABB(v);
                padre->set_izquierda(p);
            }else{
                //si esta ocupado
                addABB(v,padre->get_izquierda());
            }
        }else {
            //derecha
            if(padre->get_derecha()==nullptr){
                NodeABB*p=new NodeABB(v);
                padre->set_derecha(p);
            }else{
                //si esta ocupado
                addABB(v,padre->get_derecha());
            }

        }
    }
}
void arbolbinario::show(){
    if (head == nullptr){
        head->showNodeABB();
    }
}
void arbolbinario::preorder(){
    if (head != nullptr) {
        head->preorder();
    }
}

void arbolbinario::postorder(){
    if (head != nullptr) {
        head->postorder();
    }
}

void arbolbinario::inorder(){
    if (head != nullptr) {
        head->inorder();
    }
}

void NodeABB::preorder(){
    this->showNodeABB();
    if (this->izquierda != nullptr) {
        this->izquierda->preorder();
    }
    if (this->derecha != nullptr) {
        this->derecha->preorder();
    }
}

void NodeABB::postorder(){
    if (this->izquierda != nullptr) {
        this->izquierda->postorder();
    }
    if (this->derecha != nullptr) {
        this->derecha->postorder();
    }
    this->showNodeABB();
}

void NodeABB::inorder(){
    if (this->izquierda != nullptr) {
        this->izquierda->inorder();
    }
    this->showNodeABB();
    if (this->derecha != nullptr) {
        this->derecha->inorder();
    }
}

















void NodeABB::printTree(int indent) {
    if (derecha != nullptr) {
        derecha->printTree(indent + 4);
    }
    if (indent > 0) {
        std::cout << std::setw(indent) << " ";
    }
    std::cout << get_value() << "\n";
    if (izquierda != nullptr) {
        izquierda->printTree(indent + 4);
    }
}

void arbolbinario::printTree() {
    if (head != nullptr) {
        head->printTree(0);
    }
}


