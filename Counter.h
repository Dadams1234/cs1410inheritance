//
// Created by Daryl Adams on 10/17/17.
//

#ifndef INHERITANCE_COUNTER_H
#define INHERITANCE_COUNTER_H

class Counter
{
protected:
    unsigned int count;
public:
    Counter();                      // constructor no args
    Counter(unsigned int count);    // Const. One arg

    unsigned int getCount() const;
    // constructor with args

    void setCount(unsigned int count);


    Counter operator ++();
};


class CountDn : public Counter      // derived class
{
public:
    CountDn();

    CountDn(unsigned int count);

    Counter operator --();
};

#endif //INHERITANCE_COUNTER_H
