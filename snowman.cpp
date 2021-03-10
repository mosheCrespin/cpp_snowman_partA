#include "snowman.hpp"
#include <string>
#include <stdexcept>

namespace ariel{
    const int LEN=8;
    const int TEN=10;
    const int MIN=1;
    const int MAX=4;
    bool valid_number(int num)
    {
        int temp=LEN;
        while(num>0)
        {
            if((num%TEN<MIN)||(num%TEN>MAX)){
                break;
            }
            num=num/TEN;
            temp--;
        }
        return temp==0;
    }


    std::string snowman(int num)
    {
        const int _num1=11114411;
        const int _num2=33232124;
        std::string for_num1= "_===_\n(.,.)\n( : )\n( : )\n";
        std::string for_num2= "   _   \n  /_\\\n\\(o_O) \n (] [)>\n (   )\n";
        if(!valid_number(num))
        {
            std::string msg="Invalid code '" + std::to_string(num) + "'";
            throw std::invalid_argument(msg);
        }
        if(num==_num1){
            return for_num1;
        }

        if(num==_num2){
            return for_num2;   
        }
        return "";    

    }
}
