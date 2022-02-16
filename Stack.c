int main()
{
    // Check if stack is empty and print a message when it is
    if (isEmpty())
        printf(''Stack is empty\n'');
    // insert 3 elements (5,4,8) to the stack using push operation
    push(5);
    push(4);
    push(8);
    // check if stack is full and print a message if it is
    if (isFull())
        printf(''Stack is full\n'');
    push(3); // should not insert since full
    printf(''Stack size
           : % d\n'', size());
    // remove three elements from the stack using pop operation
    for (int i = 0; i < CAP; i++)
        printf(''% d '', pop());
    printf(''\n'');
    printf(''Stack size
           : % d\n'', size());
}