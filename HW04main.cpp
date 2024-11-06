#include <iostream>
#include "HW04.h"
#include "HW04.cpp"

int main(){
    InkJetPrinter *pInkjetPrinter=new InkJetPrinter("Officejet V40","HP",5,10);
    LaserPriter *pLaserPrinter=new LaserPriter("SCX-6x45","삼성전자",3,20);
    int choPrinter,cnt;
    string choKeep;

    cout<<"현재 작동중인 2 대의 프린터는 아래와 같다\n";
    pInkjetPrinter->showInk();
    pLaserPrinter->showLaser();
    cout<<"\n";

    while(true){
        cout<<"프린트(1:잉크젯, 2:레이저)와 매수 입력>>";
        cin>>choPrinter>>cnt;
        if(choPrinter==1){
            pInkjetPrinter->printInkJet(cnt);
            pInkjetPrinter->showInk();
            pLaserPrinter->showLaser();
        }
        else if(choPrinter==2){
            pLaserPrinter->printLaser(cnt);
            pInkjetPrinter->showInk();
            pLaserPrinter->showLaser();
        }
        cout<<"계속 프린트 하시겠습니까(y/n)>>";
        cin>>choKeep;
        if(choKeep=="n"){
            cout<<"프린트를 종료하겠습니다.\n";
            break;
        }
        cout<<"\n";
    }

    delete pInkjetPrinter;
    delete pLaserPrinter;
}