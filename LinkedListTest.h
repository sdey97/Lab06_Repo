#ifndef LINKED_LIST_TEST_H
#define LINKED_LIST_TEST_H
#include "LinkedListOfInts.h"
#include <iostream>
#include <stdexcept>
#include <vector>
class LinkedListTest
{
  public:
    LinkedListTest();  //constructor for LinkedListTest. creates a new LinkedList
    ~LinkedListTest(); //deconstructor for LinkedListTest. deletes the LinkedList
    void runTests();   //this method will call all of the individual tests and output the results
  private:
    
    void test01(); //size of empty list is zero
    void test02(); //size is correct after inserting at the front of the list
    void test03(); //size is correct after inserting at the back of the list
    void test04(); //size is not zero on a non-empty list
    void test05(); //isEmpty returns true for an empty list
    void test06(); //isEmpty returns false for a non-empty list
    void test07(); //search returns true if the value is in the list
    void test08(); //search returns false if the value is not in the list
    void test09(); //addFront enters a value in the first position
    void test10(); //addBack inserts a value att the last position
    void test11(); //removeFront removes a value at the first position
    void test12(); //removeBack removes a value at the last position
};
#endif