#include "Armor.h"
#include <string>
#include <iostream>
Armor::Armor(int defenceAtt, int defenceDef, std::string name, std::string description, std::string type, int level, int buyValue, int sellValue, int rarity)
    :Item(name, description, type, level, buyValue, sellValue , rarity),defenceAtt(defenceAtt), defenceDef(defenceDef)
{} 

Armor::~Armor(){}

std::string Armor::toString(){
    std::string ret = std::to_string(this->defenceAtt) + " " + to_string(defenceDef);
    return ret;
}

void Armor::showAtribute(){
	std::cout << "== 物品表 ==" << std::endl; //Item table
	std::cout << "||名字: " << name << std::endl; //name: 
	std::cout << "||类别: " << type << std::endl; //Category: 
	std::cout << "||防御: " << toString() << std::endl; //Defense:
	std::cout << "||等级: " << level << std::endl; //Level: 
	std::cout << "||稀有度: " << rarity << std::endl; //Rarity: 
    cout << description << endl;
    cout << "-----------------" << endl;
}

void Armor::interact(){
    // 好像没什么必要  //It doesn't seem necessary
    cout << "其名为" << name << ", 是:" << type << endl; //its name - yes:
    cout << description << endl;
    cout << "请输入想做的动作:\n"; //"Please enter the action you want to do:
    std::cout << "-1: 退出 0: 查看"<< std::endl; // "-1: Exit 0: View"
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
    
