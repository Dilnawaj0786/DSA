class Node{
public :
    int val;
    Node* next;

    Node(int val){
        this->val = val;
        this-> next = NULL;
    }
};


class MyLinkedList {
public:
    Node* head;
    Node* tail;
    int length;
    MyLinkedList() {
        head = tail = NULL;
        length = 0;
    }
    
    int get(int index) {
        if(index < 0 || index >= length) return -1;
        Node* temp = head;
        for(int i=0;i<index;i++){
            temp = temp->next;
        }
        return temp->val;
    }
    
    void addAtHead(int val) {
        Node* n = new Node(val);
        n->next = head;
        head = n;
        if(tail == NULL)
            tail = head;

        length++;
    }
    
    void addAtTail(int val) {
        Node* n = new Node(val);
        if(head == NULL){
            head = tail = n;
        }
         else{
            tail->next = n;
            tail = n;
        }

        length++;
    }
    
    void addAtIndex(int index, int val) {
         if(index < 0 || index > length) return;
         if(index == 0){
            addAtHead(val);
            return;
        }

        if(index == length){
            addAtTail(val);
            return;
        }
        Node* temp = head;
        Node* n = new Node(val);
        for(int i=0;i<index-1;i++){
            temp = temp->next;
        }
        n->next = temp->next;
        temp->next = n;
        length++;
    }
    
    void deleteAtIndex(int index) {
         if(index < 0 || index >= length) return;

        if(index == 0){
            head = head->next;
            length--;

            if(length == 0)
                tail = NULL;

            return;
        }
        Node* temp = head;
        if(index == 0) {
            head = head->next;
            return;
        }
        for(int i=0;i<index-1;i++){
            temp = temp->next;
        }
        Node* del = temp->next;
        temp->next = temp->next->next;
        if(index == length - 1)
            tail = temp;

        delete del;
        length--;
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