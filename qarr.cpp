class MyQueue
{
public:
    int arr[1000];
    int front;
    int rear;

    MyQueue()
    {
        front = 0;
        rear = -1;
    }

    void push(int x)
    {
        arr[++rear] = x;
    }

    int pop()
    {
        if (empty())
            return -1;

        return arr[front++];
    }

    int peek()
    {
        if (empty())
            return -1;

        return arr[front];
    }

    bool empty()
    {
        return front > rear;
    }
};