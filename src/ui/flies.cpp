#include "flies.h"
#include "./ui_flies.h"

Flies::Flies(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::Flies)
{
    ui->setupUi(this);
    ui->pushButton->click();
}

Flies::~Flies()
{
    delete ui;
}

