#include <vector>
using std::vector;
#include <algorithm>
#include <string>
using std::string;
#include <iostream>
#include <sstream>
using std::istringstream;
using std::stoi;

vector<int> get_numbers(string s){
  string read_in = "";
  
  for (int i=0; i< static_cast<int>(s.size()); i++){
    if (isalpha(s[i])){
      read_in = read_in + ' ';
    }
    
    else{
      read_in = read_in + s[i];
    }
  }
  
  istringstream iss(read_in);
  
  vector<int> output_vector;
  string iss_input; 
  
  while(iss >> iss_input){
    int convert = stoi(iss_input);
    output_vector.push_back(convert);
  }
  
  return output_vector;
}
