#include <iostream>
using namespace std;

int main() {

  string student_names[20] = {"Thary", "VirakRoth", "Siphai", "Khim", "Reaska", "Somnang",
                            "Thea", "Cheata", "Taliw" , "Hor", "Mey", "Phearom", "Man", 
                            "Long", "Dina", "Rithy", "Lay", "Lida", "Neat", "Heng" };

  cout << "student_names: ";


  for (int i = 0; i < 20; ++i) {
    cout << student_names[i] << "  ";
    int index = rand() % student_names[i] << " " ; 
  }

  return 0;
}