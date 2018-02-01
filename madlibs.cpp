//Authors: 
#include <iostream>
#include <string>

int main()
{
std::string name;
int number;
std::string noun; 
char symbole;

    std::cout<< "Give me a name" <<std::endl;
    std::cin>> name; 
    std::cout<< "Give me a number"<<std::endl;
    std::cin>> number;
    std::cout<< "Give me a Noun"<<std::endl;
    std::cin>> noun; 
    std::cout<< "Give me a punctuation"<<std::endl;
    std::cin>> symbole;
    
    std::cout<< "On thier way to work " <<name<< " encountered some issues. They got pulled over " <<number<< " times. " <<name<< " almost ran into a " <<noun<<
    ". After reaching their destination, they exclaimed \" I made it finally" <<symbole<<"\"." <<std::endl;

  return 0;
}
