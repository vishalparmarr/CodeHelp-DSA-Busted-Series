#include <iostream>
using namespace std;

class Kqueue {

    private:

        int *arr;
        int *front;
        int *rear;
        int *next;
        int freeSpot;
        int n, k;

    public:

        Kqueue(int n, int k){

            this -> n = n;
            this -> k = k;
            arr = new int[n];

            front = new int[k];
            rear = new int[k];
            
            for (int i = 0; i < k; i++){
                front[i] = -1;
                rear[i] = -1;
            }

            next = new int[n];

            for (int i = 0; i < n; i++)
                next[i] = i+1;

            next[n-1] = -1;
            freeSpot = 0;
        }

        void enqueue (int data, int qn){

            //checking condition for overflow
            if (freeSpot == -1){
                cout << "Queue is Overflow" << endl;
                return;
            }

            //find first free index
            int index = freeSpot;

            //update freespot
            freeSpot = next[index];

            //check whether first element
            if(front[qn - 1] == -1)
                front[qn - 1] = index;

            else    
                //link new element to prev element
                next[rear[qn - 1]] = index;
                next[index] = -1;
                rear[qn - 1] = index;
                arr[index] = data; 
        }

        int dequeue (int qn) {

            //checking condition of underflow
            if (front[qn - 1] == -1){
                cout << "Queue is underflow" << endl;
                return -1;
            }

            //find the index to pop
            int index = front[qn - 1];

            //front to aage badhao
            front[qn - 1] = next[index];

            //manage freeSpot
            next[index] = freeSpot;
            freeSpot = index;
            return arr[index];
        }
};

int main () {

    Kqueue k(10,3);

    k.enqueue(10,1);
    k.enqueue(12,1);
    k.enqueue(15,2);
    k.enqueue(14,1);

    cout << k.dequeue(1) << endl;
    cout << k.dequeue(2) << endl;
    cout << k.dequeue(1) << endl;
    cout << k.dequeue(1) << endl;
    cout << k.dequeue(1) << endl;
}