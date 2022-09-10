// Stack class.
class Stack {
    
public:
    int *arr;
    int topp;
    int size;
    
    Stack(int capacity) {
        // Write your code here.
        this -> size = capacity;
        arr = new int[size];
        topp = -1;
    }

    void push(int num) {
        // Write your code here.
        if(size - topp != 1)
        {
            topp++;
            arr[topp] = num;
        }
        else
            cout << "Stack Overflow" << endl;
    }

    int pop() {
        // Write your code here.
        if(topp >= 0)
        {
            int x = arr[topp];
            topp--;
            return x;
        }
            
        
        else
            return -1;
    }
    
    int top() {
        // Write your code here.
        if(topp >= 0 && topp < size)
            return arr[topp];
    }
    
    int isEmpty() {
        // Write your code here.
        if(topp == -1)
            return 1;
        else
            return 0;
            
    }
    
    int isFull() {
        // Write your code here.
        if(topp == size - 1)
            return 1;
        else
            return 0;
    }
    
};
