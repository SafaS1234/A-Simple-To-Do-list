#include "todo.hpp"

using namespace std;

void TodoList::add(string task)
{
    tasks.push_back(task);
}

void TodoList::complete(string task)
{
    vector<string>:: iterator itr;

    for (itr = tasks.begin(); itr < tasks.end(); itr++)
    {
        if(*itr == task)
        {
            tasks.erase(itr);
            return;
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

    cout << "All tasks: " << endl;

    for (itr = tasks.begin(); itr < tasks.end(); itr++)
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

    cout << "\nCompleted tasks: " << endl;

    for (itr = tasks.begin(); itr < tasks.end(); itr++)
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

    cout << "\nIncomplete tasks: " << endl;
    
    for (itr = tasks.begin(); itr < tasks.end(); itr++)
    { 
        cout << *itr << endl;
    }
}

void TodoList::clear()
{
    tasks.clear();
}