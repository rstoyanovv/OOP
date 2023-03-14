#pragma once

class Set {

private:
    int* elements;
    int numElements;
    int capacity;
    void resize();

public:
    Set();
    Set(Set const& other);
    Set& operator= (Set const& other);
    Set(Set&& other);
    Set& operator= (Set&& other);
    ~Set();

    bool addElement(int const element);
    bool deleteElement(int const element);
    void print();
    void setUnion(Set const& other);
    void setIntersection(Set const& other);
};

