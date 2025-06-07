#include<iostream>
using namespace std;
class list {
private:
    int *p, current, size;
public:
    list() {
        current=-1;
        size=0;
        p=NULL;
    }
    void insert(int x) {
        if(size==0) {
            p=new int[1];
            p[0]=x;  
        }
        else {
            int *temp=new int[size+1];
            for(int i=0;i<=current;i++) 
                temp[i]=p[i];
            temp[current+1]=x;
            for(int i=current+1;i<size;i++) 
                temp[i+1]=p[i];
            delete[] p;
            p=temp;
        }
        current++;
        size++;
    }
};
int main(){
    list l;
    l.insert(1);
    return 0;
}