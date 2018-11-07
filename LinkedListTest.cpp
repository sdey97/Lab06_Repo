#include "LinkedListTest.h"
LinkedListTest::LinkedListTest()
{
   LinkedListOfInts *list = new LinkedListOfInts;
}

LinkedListTest::~LinkedListTest()
{

}

void LinkedListTest::test01()
{
    LinkedListOfInts *list = new LinkedListOfInts;
    std::cout << "size of an empty list is zero ";
    if (list->size() == 0)
        std::cout << "PASSED\n";
    else
        std::cout << "FAILED\n";
}

void LinkedListTest::test02()
{
    LinkedListOfInts *list = new LinkedListOfInts;
    std::cout << "size returns correct value after inserting value at the front of the list ";
    try
    {
        list->addFront(5);
        if (list->size() == 1)
            std::cout << "PASSED\n";
        else
            std::cout << "FAILED\n";
    }
    catch (const std::runtime_error &e)
    {
    }
}

void LinkedListTest::test03()
{
    LinkedListOfInts *list = new LinkedListOfInts;
    std::cout << "size returns correct value after inserting value at the back of the list ";
    try
    {
        list->addBack(1);
        list->addBack(2);
        list->addBack(3);
        list->addBack(4);
        if (list->size() == 4)
            std::cout << "PASSED\n";
        else
            std::cout << "FAILED\n";
    }
    catch (const std::runtime_error &e)
    {
    }
}

void LinkedListTest::test04()
{
    LinkedListOfInts *list = new LinkedListOfInts;
    std::cout << "size is not zero for a non-empty list ";
    try
    {
        list->addFront(1);
        if(list->size() != 0)
            std::cout << "PASSED\n";
        else
            std::cout << "FAILED\n";
    }
    catch (const std::runtime_error &err)
    {
    }
}

void LinkedListTest::test05()
{
    LinkedListOfInts *list = new LinkedListOfInts;
    std::cout << "isEmpty returns true for an empty list ";
    try
    {
        if(list->isEmpty()== true)
        {
            std::cout << "PASSED\n";
        }
        else
        {
            std::cout << "Failed\n";
        }
    }
    catch (const std::runtime_error &err)
    {
    }
}

void LinkedListTest::test06()
{
    LinkedListOfInts *list = new LinkedListOfInts;
    std::cout << "isEmpty returns false for a non-empty list ";
    try
    {
        list->addFront(10);
        list->addFront(12);
        list->addFront(14);
        if (list->isEmpty() == false)
        {
            std::cout << "PASSED\n";
        }
        else
        {
            std::cout << "FAILED\n";
        }
    }
    catch (const std::runtime_error &err)
    {
    }
}

void LinkedListTest::test07()
{
    LinkedListOfInts *list = new LinkedListOfInts;
    std::cout << "search returns true if the value is in the list ";
    try
    {
        list->addFront(12);
        list->addFront(23);
        list->addFront(15);
        if(list->search(23) == true)
        {
            std::cout << "PASSED\n";
        }
        else
        {
            std::cout << "FAILED\n";
        }
    }
    catch (const std::runtime_error &err)
    {
    }
}

void LinkedListTest::test08()
{
    LinkedListOfInts *list = new LinkedListOfInts;
    std::cout << "search returns true if the value is in the list ";
    try
    {
        list->addFront(12);
        list->addFront(23);
        list->addFront(15);
        if (list->search(42) == false)
        {
            std::cout << "PASSED\n";
        }
        else
        {
            std::cout << "FAILED\n";
        }
    }
    catch (const std::runtime_error &err)
    {
    }
}

void LinkedListTest::test09()
{
    LinkedListOfInts *list = new LinkedListOfInts;
    std::cout << "addFront enters a value at the first position ";
    try
    {
        std::vector<int> vec = {1,2,3};
        list->addFront(3);
        list->addFront(2);
        list->addFront(1);
        if(list->toVector() == vec)
            std::cout << "PASSED\n";
        else
            std::cout << "FAILED\n";
  
    }
    catch (const std::runtime_error &e)
    {
        std::cout << "Error expeption: " << e.what() << std::endl;
    }
}

void LinkedListTest::test10()
{
    LinkedListOfInts *list = new LinkedListOfInts;
    std::cout << "addBack inserts a value at the last position ";
    try
    {
        std::vector<int> vec = {1,2,3};
        list->addBack(1);
        list->addBack(2);
        list->addBack(3);
        if(list->toVector() == vec)
        {
            std::cout << "PASSED\n";
        }
        else
        {
            std::cout << "FAILED\n";
        }
    }
    catch (const std::runtime_error &err)
    {
    }
}



void LinkedListTest::test11()
{
    LinkedListOfInts *list = new LinkedListOfInts;
    std::cout << "removeFront removes a value at the first position ";
    try
    {
        list->addFront(1);
        list->addBack(2);
        list->removeFront();
        if (list->search(1))
            std::cout << "FAILED\n";
        else
            std::cout << "PASSED\n";
    }
    catch (const std::runtime_error &e)
    {
    }
}

void LinkedListTest::test12()
{
    LinkedListOfInts *list = new LinkedListOfInts;
    std::cout << "removeBack removes a value at the last position ";
    try
    {
        list->addFront(1);
        list->addBack(2);
        list->removeFront();
        if (list->search(2))
            std::cout << "FAILED\n";
        else
            std::cout << "PASSED\n";
    }
    catch (const std::runtime_error &e)
    {
    }
}

void LinkedListTest::runTests()
{
    std::cout << "Test #1: ";
    test01();
    std::cout << "Test #2: ";
    test02();
    std::cout << "Test #3: ";
    test03();
    std::cout << "Test #4: ";
    test04();
    std::cout << "Test #5: ";
    test05();
    std::cout << "Test #6: ";
    test06();
    std::cout << "Test #7: ";
    test07();
    std::cout << "Test #8: ";
    test08();
    std::cout << "Test #9: ";
    test09();
    std::cout << "Test #10: ";
    test10();
    std::cout << "Test #11: ";
    test11();
    std::cout << "Test #12: ";
    test12();
    
   
}
