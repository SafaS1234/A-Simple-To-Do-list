#include <iostream>
#include <iterator>
#include <vector>
#include "todo.hpp"

using namespace std;

int main() {
  TodoList list;

  list.add("Buy milk");
  list.add("Buy eggs");
  list.add("Prepare a lesson for CSC 122");
  list.add("Sow beet seeds");

  list.complete("Buy eggs");

  list.all(); // Pretty prints a list of each of the four tasks above
  list.complete(); // Pretty prints the task "Buy eggs"  
  list.incomplete(); // Pretty prints the tasks "Buy milk",
                     // "Prepare a lesson for CSC 122", and "Sow beet seeds"

  cout << "\n" << endl;
  
  list.clear();

  list.all(); // Pretty prints a message saying that the list is empty
}
