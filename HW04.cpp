#include <iostream>
#include <string>
#include "HW04.h"
using namespace std;

InkJetPrinter :: InkJetPrinter(string model,string manufacturer, int availableCount,int availableInk){
    this->model=model;
    this->manufacturer=manufacturer;
    this->availableCount=availableCount;
    this->availableInk=availableInk;
}

LaserPriter :: LaserPriter(string model, string manufacturer, int availableCount, int availableToner){
    this->model=model;
    this->manufacturer=manufacturer;
    this->availableCount=availableCount;
    this->availableToner=availableToner;
}

bool Printer :: print(int pages){
    if(this->availableCount>=pages){
        this->availableCount-=pages;
        return true;
    }
    else return false;
}

void InkJetPrinter :: printInkJet(int pages){
    bool check=print(pages);
    if(this->availableInk>=pages&& check) {
        this->availableInk-=pages;
        cout<<"프린트하였습니다.\n";
    }
    else if(!check) cout<<"용지가 부족하여 프린트할 수 없습니다.\n";
    
    if(this->availableInk<pages) cout<<"잉크가 부족하여 프린트할 수 없습니다.\n";
}

void LaserPriter :: printLaser(int pages){
    bool check=print(pages);
    if(this->availableToner>=pages &&check){
        this->availableToner-=pages;
        cout<<"프린트하였습니다.\n";
    } 
    else if(!check) cout<<"용지가 부족하여 프린트할 수 없습니다.\n";
    
    if (this->availableToner<pages) cout<<"토너가 부족하여 프린트할 수 없습니다.\n";
}

void InkJetPrinter :: showInk(){
    cout<<"잉크젯 : "<<this->model<<" ,"<<this->manufacturer<<" ,남은 종이 "
    <<this->availableCount<<"장 , 남은 잉크 "<<this->availableInk<<"\n";
}

void LaserPriter :: showLaser(){
    cout<<"레이저 : "<<this->model<<" ,"<<this->manufacturer<<" ,남은 종이 "
    <<this->availableCount<<"장 , 남은 토너 "<<this->availableToner<<"\n";
}