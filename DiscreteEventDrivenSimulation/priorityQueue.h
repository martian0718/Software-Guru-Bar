/*

  Author: Martin Wu
  Class: MWF 10:30 Data Structures and Algorithms class
  File: priorityQueue.h
  Description:
    Priority Queue implemented as a min Heap.

*/
#ifndef PRIORITYQUEUE_H
#define PRIORITYQUEUE_H


using namespace std;

template <typename T> //making it abstract
class PriorityQueue {
public:
  //constructor
  PriorityQueue(){
    N=0;
    for(int i = 1; i<=121; i++)
      pq[i]=0;
  }
  //returns if the priorityQueue is empty
  bool isEmpty(){ return N==0;}
  //returns size of the priorityQueue
  int size(){ return N;}

  void insert(T obj); //inserts objects into queue
  T deleteMin(); //deletes min
private:
  int N;
  T pq[121];
  void exch(int i, int j); //helper function to exchange positions
  void swim(int k); //to maintain the heap after inserting
  void sink(int k, int n); //to maintain the heap after deleting
  bool less(int i, int j){return pq[i] > pq[j];} //compares if one object is less than another
};

template <typename T>
void PriorityQueue<T>::exch(int i, int j){ //helper function for swapping positions in priority queue
  T obj = pq[i]; pq[i] = pq[j]; pq[j] = obj;
}
template <typename T>
void PriorityQueue<T>::swim(int k){
  while(k>1 && less(k/2,k)){
    exch(k,k/2);
    k = k/2;
  }
}
template <typename T>
void PriorityQueue<T>:: sink(int k, int n){
  while(2*k <= n){
    int j = 2*k;
    if(j < n && less(j, j+1))
      j++;
    if(!less(k,j))
      break;
    exch(k,j);
    k = j;
  }
}

//insert function for the priority queue
template <typename T>
void PriorityQueue<T>:: insert(T obj){
  pq[++N] = obj;
  swim(N);

}

//deletes the minimum of the priority queue
template <typename T>
T PriorityQueue<T>:: deleteMin(){
  T min = pq[1];
  exch(1, N--);
  sink(1, N);
  pq[N+1] = 0;
  return min;
}

#endif
