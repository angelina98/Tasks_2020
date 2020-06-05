//
// Created by USER on 09.03.2020.
//

#include <string>
#pragma once

class Queue {
public:
    Queue(int a = 17);
    void Push(std::string b);

    int Size() const;
    int ContainedNumber() const;
    void Pop();
    std::string* Back();
private:
    int max_size = 17;
    int counter;
    std::string* queue;

};
