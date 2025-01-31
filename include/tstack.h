// Copyright 2021 NNTU-CS
#ifndef INCLUDE_TSTACK_H_
#define INCLUDE_TSTACK_H_

template<typename T, int size>
class TStack {
   private:
    T arr[100];
    int top;
 
   public:
    TStack(): top(-1) { }
    T get() {
    if (!isEmpty())
      return arr[top];
    else
    throw "Empty!";
    }
    void pop() {
      if (!isEmpty())
      top--;
    }
    void push(T value) {
      if (isFull())
        throw "Full!";
      else
        arr[++top] = value;
     }
     bool isEmpty() const {
       return top == -1;
     }
     bool isFull() const {
       return top == size - 1;
     }
};

#endif  // INCLUDE_TSTACK_H_
TStack<char, 100> stack11;
TStack<int, 100> stack22;
