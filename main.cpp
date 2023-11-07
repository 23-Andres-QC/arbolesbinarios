#include <iostream>
#include "arbolesbinarios.h"
using namespace std;

int main()
{
    arbolbinario arbol;
    arbol.addABB(30,arbol.get_head());
    arbol.addABB(19,arbol.get_head());
    arbol.addABB(50,arbol.get_head());
    arbol.addABB(40,arbol.get_head());
    arbol.addABB(51,arbol.get_head());
    arbol.addABB(18,arbol.get_head());
    arbol.addABB(27,arbol.get_head());
    arbol.addABB(23,arbol.get_head());
    arbol.addABB(29,arbol.get_head());

    /*arbol.inorder();
    arbol.show();
    cout<<endl;
    arbol.preorder();
    arbol.show();
    cout<<endl;
    arbol.postorder();
    arbol.show();*/
    arbol.printTree();
}
