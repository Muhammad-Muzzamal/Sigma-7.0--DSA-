#include <iostream>
#include <list>

using namespace std;

void insertAt(list<int> &list, int position, int value) {
    auto head = list.begin();
    for(int i=0; i<position; i++) {
        ++head;
    }
}

int main() {
        
    return 0;
}