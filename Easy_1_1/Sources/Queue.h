//
// Created by USER on 09.03.2020.
//

#include <string>
#pragma once

class Queue {
public:
    Queue(int a = k_default_size);
    void Push(std::string b);

    int Size() const;
    int ContainedNumber() const;
    void Pop();
    std::string* Back();
private:
    static constexpr int k_default_size = 17;
    int max_size = 17;
    int counter;
    std::string* queue;

};
