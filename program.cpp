#include<iostream>
#include<cstring>

namespace book{

 std::string books(std::string){

 std::string boks[100] = {"social","maths","computer","IIT","C"};
 for (int i = 0;i<=5;i++){
  std::cout<<boks[i];
  std::cout<<std::endl;
 }
 }


}

int main(){
 std::string s;
book::books(s);

return 0;
}
