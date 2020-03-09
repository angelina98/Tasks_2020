//
// Created by USER on 09.03.2020.
//

#include <string>

#ifndef EASY_1_1_QUEUE_H
#define EASY_1_1_QUEUE_H


class Queue {
public:
    Queue();
    Queue(int a);
    void Push(std::string b);

    int Size();
    int ContainedNumber();
    void Pop();
    std::string* Back();
private:
    int MaxSize = 17;
    int counter;
    std::string* queue;

};


#endif //EASY_1_1_QUEUE_H
