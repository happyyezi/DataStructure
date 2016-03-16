#include <iostream>
#include "BinaryTree.h"
#include <stdio.h>
#include <queue>
using namespace std;

int main() {
    freopen("/Users/Alina/ClionProjects/DataStructure/input/tree","r",stdin);
    BinaryTree<string> tree;
    string *r ;
    r = tree.PreOrderVisit();
    for(int i=0;i<tree.GetNodeNum();i++){
        cout<<r[i]<<" ";
    }
    cout<<endl;
    r = tree.MidOrderVisit();
    for(int i=0;i<tree.GetNodeNum();i++){
        cout<<r[i]<<" ";
    }
    cout<<endl;
    r = tree.PostOrderVisit();
    for(int i=0;i<tree.GetNodeNum();i++){
        cout<<r[i]<<" ";
    }
    cout<<endl;
    r = tree.LevelOrder();
    for(int i=0;i<tree.GetNodeNum();i++){
        cout<<r[i]<<" ";
    }
    cout<<endl;
    r = tree.LevelOrderWithLineNum();
    for(int i=0;i<tree.GetNodeNum()+tree.GetTreeDepth();i++){
        if(r[i]=="#"){
            cout<<endl;
        }else{
            cout<<r[i]<<" ";
        }
    }
    cout<<endl;
    return 0;
}