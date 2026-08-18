#include <iostream>
#include <vector>
#include <queue>
#include <list>
using namespace std;

class graph{
    public:
    int v;
    list<int> *l;
    graph(int v){
        this->v = v;
        l = new list <int>[v]; 
    }

    void add(int a, int b){
        l[a].push_back(b);
        l[b].push_back(a);
    }

    void bfs(){
        vector<bool> vis(v, false);
        queue <int> q;

        q.push(0);
        vis[0] = true;

        while(q.size() > 0){
           int u = q.front();
           q.pop();
           cout << u << " ";

           for(int v : l[u]){
            if(!vis[v]){
                vis[v] = true;
                q.push(v);
            }
           }
        }
        cout << endl;

    }
};

int main(){
    int n = 5;
    graph g(5);

    g.add(0,1);
    g.add(1,2);
    g.add(1,3);
    g.add(2,4);
    g.bfs();

    return 0;
}

