//
// Created by Daryl Adams on 10/17/17.
//

#include "Counter.h"
// Doxygen comments. Type ?*! or /** followed by enter
/*!
 * Counter: 1 Parameter Constructor
 * @param count: Inital counter
 */
Counter::Counter(unsigned int count) : count(count) {}

/*!
 * Counter: Default Constructor
 */

Counter::Counter(): count(0) {}

/*!
 *  getCount : Getter for count variables
 * @return : current count
 */
unsigned int Counter::getCount() const
{
    return count;
}

/*!
 *  setCount: set current count
 * @param count : Number to set counter
 */
void Counter::setCount(unsigned int count)
{
    Counter::count = count;
}

/*!
 *  ++ Operator: Increments counter
 * @return : ++Counter
 */
Counter Counter::operator++()
{
    return Counter(++count);
}

/*!
 * CountDn -- operator
 * @return : Decrement counter
 */
Counter CountDn::operator--()
{
    return Counter(--count);
}

/*!
 * CountDn Default constructor
 */
CountDn::CountDn() : Counter() { }

/*!
 * CountDn 1 parameter constructor
 * @param count : intitial Counter
 */
CountDn::CountDn(unsigned int count) : Counter(count) {}
// constructor
