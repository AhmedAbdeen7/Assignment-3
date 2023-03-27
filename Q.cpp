#include "Q.h"
#include <iostream>
using namespace std;
template <typename T>
Queue<T>::Queue(int capacity) : capacity(capacity), size(0) , Front(0), Rear(-1) {
    elements = new T[capacity];
}

template <typename T>
Queue<T>::~Queue() {
    delete[] elements;
}

template <typename T>
void Queue<T>::enqueue(T element) {
    if (size == capacity) {
        return;
    }
 
    Rear = (Rear + 1) % capacity;
    elements[Rear] = element;
    size++;
}

template <typename T>
T Queue<T>::dequeue() {
    if (size == 0) {
        exit(0);
    }
    T element = elements[0];
 
    Front = ( Front + 1) % capacity;
    size--;
    return element;
}

template <typename T>
T Queue<T>::front() const {
    if (size == 0) {
       exit(0);
    }
    return elements[Front];
}

template <typename T>
bool Queue<T>::isEmpty() const {
    return size == 0;
}

template <typename T>
bool Queue<T>::isFull() const {
    return size == capacity;
}