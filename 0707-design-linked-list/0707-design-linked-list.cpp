class MyLinkedList {
    struct Node {
        int val;
        Node* next;
        Node(int x) : val(x), next(nullptr) {}
    };

private:
    Node* head;
    int size;

public:
    MyLinkedList() {
        head = new Node(0);  // Dummy node
        size = 0;
    }

    ~MyLinkedList() {  // Destructor to free memory
        Node* curr = head;
        while (curr) {
            Node* temp = curr;
            curr = curr->next;
            delete temp;
        }
    }

    int get(int index) {
        if (index < 0 || index >= size) {
            return -1;
        }
        Node* ptr = head->next;
        for (int i = 0; i < index; i++) {
            ptr = ptr->next;
        }
        return ptr->val;
    }

    void addAtHead(int val) {
        Node* newNode = new Node(val);
        newNode->next = head->next;
        head->next = newNode;
        size++;
    }

    void addAtTail(int val) {
        Node* newNode = new Node(val);
        Node* curr = head;
        while (curr->next) {
            curr = curr->next;
        }
        curr->next = newNode;
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index < 0 || index > size) {  // Allow index == size for appending
            return;
        }
        Node* newNode = new Node(val);
        Node* curr = head;
        for (int i = 0; i < index; ++i) {
            curr = curr->next;
        }
        newNode->next = curr->next;
        curr->next = newNode;
        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) {
            return;
        }
        Node* curr = head;
        for (int i = 0; i < index; ++i) {
            curr = curr->next;
        }
        Node* toDelete = curr->next;
        curr->next = toDelete->next;
        delete toDelete;
        size--;
    }
};

/**
 * Your MyLinkedList object will be instantiated and called as such:
 * MyLinkedList* obj = new MyLinkedList();
 * int param_1 = obj->get(index);
 * obj->addAtHead(val);
 * obj->addAtTail(val);
 * obj->addAtIndex(index,val);
 * obj->deleteAtIndex(index);
 */