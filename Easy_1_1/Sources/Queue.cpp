//
// Created by USER on 09.03.2020.
//

#include <stdexcept>
#include "Queue.h"

Queue::Queue(int a)
{
    this -> max_size = a;
    this -> queue = new std::string[this -> max_size];
    this -> counter = 0;
}

void Queue::Push(std::string b)
{
    if (this -> counter < max_size)
    {
        this -> queue[this -> counter++] = std::move(b);
    } else
    {
        throw std::length_error("Queue Overflow");
    }
}

int Queue::Size() const
{
    return this -> max_size;
}

int Queue::ContainedNumber() const
{
    return this -> counter;
}

std::string* Queue::Back()
{
    if (this -> counter > 0)
    {
        return &this -> queue[0];
    } else
    {
        throw std::length_error("Queue is empty");
    }
}

void Queue::Pop()
{
    for (int i = 0; i < counter; i++)
    {
        this -> queue[i] = this -> queue[i + 1];
    }
    this -> counter--;
}