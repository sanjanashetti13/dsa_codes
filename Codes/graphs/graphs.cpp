#include <iostream>
using namespace std;
#include <list>

class Graph{
    int v;
    list <int> *l;

    public:
    Graph(int v){
        this->v = v;
        l = new list <int> [v];
    }

    void add(int src, int dest){
        l[src].push_back(dest);
        l[dest].push_back(src); 
    }

    void print(){
        for(int i = 0; i < v; i++){
            cout << i << ":";
            
            for(int neigh : l[i]){
                cout << neigh <<" ";
            }
            cout << endl;
        }
    }
};

int main(){
    Graph g(5);
    g.add(0,1);
    g.add(1,2);
    g.add(1,3);
    g.add(2,3);
    g.add(2,4);
    g.print();
    return 0;
}