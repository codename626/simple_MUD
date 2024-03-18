#include "Food.h"

Food::Food(int addhp, std::string name, std::string description, std::string type, int level, int buyValue, int sellValue, int rarity)
    :Item(name, description, type, level, buyValue, sellValue , rarity), addhp(addhp)
{} 

Food::~Food(){

}

void Food::showAtribute(){
	std::cout << "== 物品表 ==" << std::endl; //item list
	std::cout << "||名字: " << name << std::endl; //name
	std::cout << "||类别: " << type << std::endl; //category
	std::cout << "||加血: " << addhp << std::endl; //add hp
	std::cout << "||等级: " << level << std::endl; //level
	std::cout << "||稀有度: " << rarity << std::endl; //rarity
    cout << description << endl;
    cout << "-----------------" << endl;
}

void Food::interact(){
    cout << "其名为" << name << ", 是:" << type << endl; //"Its name is" "is:" 
    cout << description << endl;
    cout << "请输入想做的动作:\n"; //Please enter the action you want to do:
    std::cout << "-1: 退出 0: 查看"<< std::endl; //"-1: Exit 0: View"
    cout << "--------------------\n";
    int cho;
    while(std::cin >> cho){
        cout << "\n\n\n";
        if(cho == -1){
            break;
        }else if(cho == 0){
            showAtribute();
            break;
        }
    }
}    
    
