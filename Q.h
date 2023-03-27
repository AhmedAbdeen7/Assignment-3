

template<typename T>
class Queue {
private:
    T* elements; // an array of elements of type T
    int capacity; // a variable to indicate the capacity of the queue
    int size; // a variable to show the current size of the queue
    int Front; // a variable to indicate the index of the front of the queue
    int Rear; // a variable to indicate the index of the rear of the queue 
public:
    Queue(int capacity = 10); // constructor 
    ~Queue(); // destructor to free the memory in the heap
    void enqueue(T element); // function to add another element to the queue
    T dequeue(); // function to delete an element from the queue
    T front() const; // function to return the element at the front of the array
    bool isEmpty() const; // function to detect if the queue is empty
    bool isFull() const; // function to detect if the queue is full
};
