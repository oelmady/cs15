/*
 *
 *  COMP 15 HW 1 Cheshire ConCATenation - no strings attached
 *
 *  CharArrayList.h
 *
 *  PURPOSE
 *
 *  Modified by: Omar Elmady
 *           on: June 5 2022
 *
 */
#ifndef INTARRAYLIST_H
#define INTARRAYLIST_H

class CharArrayList {
public: // interface
    CharArrayList();
    CharArrayList(char c);
    CharArrayList(char* arr, int len);
    CharArrayList(const CharArrayList & copy);
    ~CharArrayList();

    CharArrayList& operator=(const CharArrayList& rhs);
    bool isEmpty();
    void clear();
    int  size();
    char first();
    char last();
    char elementAt(int index);
    
    void print();

    void pushAtBack(char c);
    void pushAtFront(char c);
    void insertAt(char c, int index);
    void insertInOrder(char c);

    void popFromFront();
    void popFromBack();
    void removeAt(int index);

    void replaceAt(char c, int index);
    void concatenate(CharArrayList * cat);

    void shrink();
private: // implementation
    unsigned int length;
    char* data;
    void resize();
};
#endif