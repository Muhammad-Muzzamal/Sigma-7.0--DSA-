#include <iostream>
#include <vector>
#include <list>
#include <queue>
using namespace std;

void print(int *arr, int size) {
    for(int i=0; i<size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void bubbleSort(int *arr, int size) {
    
    for(int i=0; i<size-1; i++) {
        for(int j=0; j<size-1-i; j++) {
            if(arr[j+1] < arr[j]) {
                swap(arr[j], arr[j+1]);
            }
        }
    }
    print(arr, size);
}
void selectionSort(int arr[], int n) {
    int min_idx;
    for(int i=0; i<n-1; i++) {
        min_idx = i;
        for(int j=i+1; j<n; j++) {
            if(arr[j] < arr[min_idx]) {
                min_idx = j;
            }
        }
        swap(arr[min_idx], arr[i]);
    }
    print(arr, n);
}

void insertionSort(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr) {
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = curr;
    }
    print(arr, n);
}

void insertionSort1(int arr[], int n) {
    for(int i=1; i<n; i++) {
        int curr = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > curr) {
            arr[prev+1] = arr[prev];
            prev--;
        }
        arr[prev+1] = curr;
    }
    print(arr, n);
}

void merge(vector<int>& arr, int start, int mid, int end) {
    int i = start;
    int j = mid + 1;

    vector<int> temp;

    while(i <= mid && j <= end) {
        if(arr[i] < arr[j]) {
            temp.push_back(arr[i]);
            i++;
        } else {
            temp.push_back(arr[j]);
            j++;
        }
    }

    while(i <= mid) {
        temp.push_back(arr[i]);
        i++;
    }
    while(j <= end) {
        temp.push_back(arr[j]);
        j++;
    }

    for(int idx = 0; idx < temp.size(); idx++) {
        arr[start + idx] = temp[idx];
    }
}

void mergeSort(vector<int>& arr, int start, int end) {
    if(start < end) {
        int mid = start + (end-start) / 2;
        mergeSort(arr, start, mid);
        mergeSort(arr, mid+1, end);

        merge(arr, start, mid, end);
    }
}
void display(vector<int> arr) {
    for(int val : arr) {
        cout << val << " ";
    }
    cout << endl;
}

class Graph {
    int v;
    list<int> *l;

public:
    Graph(int v) : v(v) {
        l = new list<int> [v];
    }
    ~Graph() {
        delete[] l;
    }

    void addEdge(int u, int v) {
        if(u < 0 || u >= this->v || v < 0 || v >= this->v) {
            cout << "Vertex index out of bounds\n";
            return;
        }
        l[u].push_back(v);
        l[v].push_back(u);
    }


    void display() {
        for(int i=0; i<v; i++) {
            cout << i << " : ";
            for(int neighbor : l[i]) {
                cout << neighbor << " ";
            }
            cout << endl;
        }
    }

    void BSF(int startingIndex) {
        // base case 
        if(startingIndex < 0 || startingIndex > v) {
            cout <<"Invalid Starting Index\n";
            return;
        }

        queue<int> q;
        vector<bool> visited(v, false);

        visited[startingIndex] = true;
        q.push(startingIndex);

        cout << "BFS starting from vertex " << startingIndex << ": ";

        while(!q.empty()) {
            
            int value = q.front();
            cout << value << " ";
            q.pop();

            for(int neighbours : l[value]) {
                if(!visited[neighbours]) {
                    
                    visited[neighbours] = true;
                    q.push(neighbours);
                }
            }
        }
        cout << endl;
    }

};

// class Graph2 {

//     int v;
//     list<pair <int, int>> *l;

// public:
//     Graph2(int v) {
//         this->v = v;
//         l = new list<pair <int, int>> [v];
//     }

//     void addEdge(int u, int v, int wt) {
//         l[u].push_back(v, wt);
//         l[v].push_back(u, wt);
//     }
// };


int main() { 
    
    Graph graph(6);
    graph.addEdge(5, 0);
    graph.addEdge(5, 2);
    graph.addEdge(0, 2);
    graph.addEdge(0, 1);
    graph.addEdge(1, 4);
    graph.addEdge(3, 4);
    graph.addEdge(2, 3);
    graph.addEdge(0, 3);
    graph.addEdge(1, 2);
    graph.addEdge(1, 3);
    
    graph.display();
    graph.BSF(1);

    return 0;
}