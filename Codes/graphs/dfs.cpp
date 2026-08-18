#include <iostream>
using namespace std;
#include <list>
#include <vector>

 /*     0
       / \
      1   2
         / \
        3   4          
*/

class Graph{
    public:
    int v;
    list <int> *l;

   
    Graph(int v){
        this->v = v;
        l = new list <int> [v];
    }

    void add(int src, int dest){
        l[src].push_back(dest);
        l[dest].push_back(src); 
    }

    void dfshelper(int u, vector <bool> &vis){
        cout << u << " ";
        vis[u] = true;

        for(int v : l[u]){
            if(!vis[v]){
                dfshelper(v, vis);
        }
        }
    }

    void dfs(){
        int src = 0; 
        vector <bool> vis(v, false);
        dfshelper(src, vis);
        cout << endl;
    }


};

int main(){
    Graph g(5);
 /*     0
       / \
      1   2
         / \
        3   4          
*/
    g.add(0,1);
    g.add(1,2);
    g.add(1,3);
    g.add(2,4);
    g.dfs();
    return 0;


}

