#include "todo.hpp"
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

void TodoList::add(string task)
{
    tasks.push_back(task);
}

void TodoList::complete (string task)
{
    vector<string>:: iterator itr;

    for (itr = tasks.begin(); itr != tasks.end(); itr++)
    {
        if(*itr == task)
        {
            tasks.erase(itr);
            break;
        }
    }
}

void TodoList::all()
{
    vector<string>:: iterator itr;
    
    if (tasks.empty())
    {
        cout << "The list is empty." << endl;
        return;
    }

    for (itr = tasks.begin(); itr != tasks.end(); itr++)
    { 
        cout << *itr << endl;
    }
}

void TodoList::complete()
{
    vector<string>:: iterator itr;
    
    if (tasks.empty())
    {
        cout << "The complete list is empty." << endl;
        return;
    }

    for (itr = tasks.begin(); itr != tasks.end(); itr++)
    { 
        cout << *itr << endl;
    }
}

void TodoList::incomplete()
{
    vector<string>:: iterator itr;
    
    if (tasks.empty())
    {
        cout << "The incomplete list is empty." << endl;
        return;
    }

    for (itr = tasks.begin(); itr != tasks.end(); itr++)
    { 
        cout << *itr << endl;
    }
}

void TodoList::clear()
{
    tasks.clear();
}