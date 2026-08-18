#include <iostream>
using namespace std;
#include <list>
#include <vector>

class Graph {
public:
    int v;
    list<int> *l;

    Graph(int v) {
        this->v = v;
        l = new list<int>[v];
    }

    void add(int src, int dest) {
        l[src].push_back(dest);
        l[dest].push_back(src);
    }

    bool dfshelper(int src, int par, vector<bool> &vis) {

        vis[src] = true;

        for (int v : l[src]) {

            if (!vis[v]) {
                if (dfshelper(v, src, vis)) {
                    return true;
                }
            }
            else if (v != par) {
                return true;
            }
        }

        return false;
    }

    bool dfs() {

        vector<bool> vis(v, false);

        for (int i = 0; i < v; i++) {

            if (!vis[i]) {
                if (dfshelper(i, -1, vis)) {
                    return true;
                }
            }
        }

        return false;
    }
};

int main() {

    Graph g(5);

    g.add(0, 1);
    g.add(1, 2);
    g.add(1, 3);
    g.add(2, 4);

    cout << g.dfs();

    return 0;
}