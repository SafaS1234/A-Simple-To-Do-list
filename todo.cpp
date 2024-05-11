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
        if (*itr == task)
        {
            completedTasks.push_back(*itr);
            tasks.erase(itr);
            return;
        }
    }
}

void TodoList::all()
{
    vector<string>:: iterator itr;

    cout << "All tasks: " << endl;

    if (tasks.empty() && completedTasks.empty())
    {
        cout << "The list is empty." << endl;
        return;
    }

    for (itr = tasks.begin(); itr < tasks.end(); itr++)
    { 
        cout << *itr << endl;
    }

    for (itr = completedTasks.begin(); itr < completedTasks.end(); itr++)
    { 
        cout << *itr << endl;
    }
}

void TodoList::complete()
{
    vector<string>:: iterator itr;
    
    cout << "\nCompleted tasks: " << endl;
    
    if (completedTasks.empty())
    {
        cout << "The complete list is empty." << endl;
        return;
    }

    for (itr = completedTasks.begin(); itr < completedTasks.end(); itr++)
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
    completedTasks.clear();
}