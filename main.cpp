#include <iostream>
//#include "src/exted/Int/QueueIntValue.h"
#include "src/exted/Any/QueueAnyValue.h"

using namespace std;

int main()
{
    int *array = new int[6] { 1, 2, 3, 4, 5, '\0' };

    QueueAnyValue<int>* queue = new QueueAnyValue<int>();

    queue->sampleData(array);
    queue->addElement(queue->createElement(12),queue->getLastElement());
    queue->addElement(queue->createElement(56),queue->getLastElement());
    queue->addElement(queue->createElement(85),NULL);
    queue->addElement(queue->createElement(40),queue->getHead());
    cout << queue->toString() << endl;
    queue->changeElements(queue->findElement(56),queue->getHead());
    cout << queue->toString() << endl;

}

//

//QueueIntValue* queue = new QueueIntValue(array);

//AbstractQueue<Element>* queue = new  AbstractQueue(array);
//    printQueue(queue);

//    queue->addElement(queue->createElement(12),queue->getLastElement());
//    printQueue(queue);

//    queue->addElement(queue->createElement(150),queue->findElement(4));
//    printQueue(queue);

//    queue->changeElements(queue->findElement(150),queue->findElement(4));
//    printQueue(queue);

//    queue->deleteElement(queue->findElement(150));
//    printQueue(queue);

//    queue->deleteAll();
//    printQueue(queue);

//    queue->addElement(queue->createElement(12),queue->getLastElement());
//    printQueue(queue);

