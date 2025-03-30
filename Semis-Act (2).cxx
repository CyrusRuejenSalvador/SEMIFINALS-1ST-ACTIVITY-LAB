#include <iostream>
#include <string>

using namespace std;

int main(){
    string a;
    
    cout << "Who do you want to know?: ";
    cin >> a;
    
    if (a == "Economics"){
        cout <<"Is the science that deals with the production, allocation and use of goods and services.";
    }else if(a == "Macroeconomics"){
        cout <<"The study of the entire system of economics.";
    }else if(a == "Microeconomics"){
        cout <<"The study of how the systems affect one business or parts of the economic system.";
    }else if(a == "Necessities"){
        cout <<"Are products or services that are required to support human.";
    }else if(a == "Luxuries"){
         cout <<"Are products or services that are desired by human";
    }else if(a == "Goods"){
         cout <<"Is defined as anything that anyone wants or needs";
    }else if(a == "Service"){
         cout <<"Would be the performance of any duties or work for another.";
    }else if(a == "Marketing"){
         cout <<"Refers to the distribution of goods and services.";
    }else if(a == "Marketing a product"){
         cout <<"Refers to the advertising and other efforts to promote a product sale.";
    }else if(a == "Consumers Goods"){
         cout <<"Are those such as food and clothing that satisfy human wants and needs.";
     }else if(a == "Producers Goods"){
         cout <<"Are those such as raw materials and tools, used to make consumer goods.";
    }else{
           cout <<"Cannot found.";
    }
    return 0;
}
               
         