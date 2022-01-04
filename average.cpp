//* (c) kvahn-ui/shitpit, please credit if using  *//  
#include <iostream>
#include <sstream>
#include <vector>

using std::cout;
using std::cin; 
using std::string;
using std::vector;
using std::getline;
using std::istringstream;

template <typename T>
double avg(const vector<T>& V)
{
   double sum = 0;
for (double x : V) sum +=x;

  for(double i=0; i < V.size(); i++)
    return sum/V.size();
}

int main(){
    std::string line;
    double number;
    std::vector<double> numbers;

    cout << "Enter numbers separated by spaces: ";
    getline(cin, line);
    istringstream stream(line);
    while (stream >> number)
        numbers.push_back(number);

    cout << avg(numbers);

}
