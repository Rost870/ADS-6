// Copyright 2026 <Your Name>
#ifndef INCLUDE_TPQUEUE_H_
#define INCLUDE_TPQUEUE_H_

struct SYM {
    char ch;
    int prior;
};

template <typename T>
struct Node {
    T data;
    Node* next;
    explicit Node(const T& d) : data(d), next(nullptr) {}
};

template <typename T>
class TPQueue {
 private:
    Node<T>* head;

 public:
    TPQueue() : head(nullptr) {}

    ~TPQueue() {
        while (!isEmpty()) {
            pop();
        }
    }

    bool isEmpty() const {
        return head == nullptr;
    }

    void push(const T& item) {
        Node<T>* newNode = new Node<T>(item);

        if (head == nullptr || item.prior > head->data.prior) {
            newNode->next = head;
            head = newNode;
            return;
        }

        Node<T>* current = head;
        while (current->next != nullptr &&
               item.prior <= current->next->data.prior) {
            current = current->next;
        }
        newNode->next = current->next;
        current->next = newNode;
    }

    T pop() {
        if (isEmpty()) {
            throw "Queue is empty!";
        }
        Node<T>* temp = head;
        T result = temp->data;
        head = head->next;
        delete temp;
        return result;
    }
};

#endif  // INCLUDE_TPQUEUE_H_
