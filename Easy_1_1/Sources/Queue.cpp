//
// Created by USER on 09.03.2020.
//

#include "Queue.h"

Queue::Queue()
{
    this -> queue = new std::string[this->MaxSize];
    this -> counter = 0;
}

Queue::Queue(int a)
{
    this -> MaxSize = a;
    this -> queue = new std::string[this -> MaxSize];
    this -> counter = 0;
}

void Queue::Push(std::string b)
{
    if (this -> counter < MaxSize)
    {
        this -> counter++;
        this -> queue[this -> counter - 1] = std::move(b);
    } else
        throw std::exception("Queue Overflow");
}

int Queue::Size()
{
    return this -> MaxSize;
}

int Queue::ContainedNumber()
{
    return this -> counter;
}

std::string* Queue::Back()
{
    return &this -> queue[0];
}

void Queue::Pop()
{
    for (int i = 0; i < counter; i++)
    {
        this -> queue[i] = this -> queue[i + 1];
    }
    this -> queue[this -> counter - 1] = "";
    this -> counter--;
}