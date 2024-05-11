#pragma once
#include <iostream>
#include <iterator>
#include <vector>

using namespace std;

class TodoList {

    private:
      vector <string> tasks;
      vector <string> completedTasks;
    
    public:
      void add(string task);
      void complete(string task);
      void all();
      void complete();
      void incomplete();
      void clear();
};
