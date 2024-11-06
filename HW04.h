#ifndef HW04_H
#define HW04_H

#include <string>
using namespace std;

class Printer{
protected:
    string model;
    string manufacturer;
    int printedCount;
    int availableCount;
    bool print(int pages);
};

class InkJetPrinter : private Printer{
public:
    int availableInk;
    void printInkJet(int pages);
    InkJetPrinter(string model,string manufacturer, int availableCount,int availableInk);
    void showInk();
};

class LaserPriter : private Printer{
public:
    int availableToner;
    void printLaser(int pages);
    LaserPriter(string model, string manufacturer, int availableCount, int availableToner);
    void showLaser();
};

#endif