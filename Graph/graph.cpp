#include <iostream>
#include <list>
#include <queue>
#include <vector>
using namespace std;

class Graph {
private:
    int vertix;
    list<int> *l;
public:
    // constructor whicj accept the vertix and make a grapg of size of vertix
    Graph(int v) : vertix(v) {
        if(v < 0) throw invalid_argument("Number of vertices must me positive");
        l = new list<int> [vertix];
    }

    void addEdge(int u, int v) {
        if(u<0 || u>=vertix || v<0 || v>=vertix) throw out_of_range("index is out of bond");
        l[u].push_back(v);
        l[v].push_back(u);
        cout << "successfully added\n";
    }


    // display the graph 
    void display() {

        for(int i=0; i<vertix; i++) {
            cout << i << " : ";
            for(int neighbour : l[i]) {
                cout << neighbour << " ";
            }
            cout << endl;
        }

    }

    void BFS(int startingIndex) {
        if(startingIndex < 0 || startingIndex > vertix) {
            cout << "Invalid Starting Index\n";
        }
        queue<int> q;
        vector<bool> visited(vertix, false);

        visited[startingIndex] = true;
        q.push(startingIndex);

        while(!q.empty()) {
            int value = q.front();
            q.pop();
            cout << value << " : ";

            for(int neighbour : l[value]) {
                cout << neighbour << " ";
            }
            cout << endl;
        }

    }



    // destuctor that prevent from memory leakage 
    ~Graph() {
        delete[] l;
    }
};

int main() {
    try {
        Graph g(5);
        g.addEdge(0, 4);
        g.addEdge(0, 2);
        g.display();
        g.BFS(4);



    } catch (const exception& e) {
        cout <<"Error Agaya Bhaiyaa kuch to garbadh ha \nYe raha ap ka error \n\t" << e.what();
    }
    
    return 0;
}
