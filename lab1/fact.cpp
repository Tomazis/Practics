#include <cstdio>
#include <cstring>
#include <iostream>
void main(){
 int n;
 int total = 1;
 std::cout << "Enter the number" << std::endl;
 std::cin >> n;
 
 for (int i = 1; i <=n; i++){
	total *=i;
 }
 
 std::cout <<"Calculated factorial: " << total <<std::endl;
 
}

