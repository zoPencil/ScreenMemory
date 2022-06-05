#include "uScreenMemory.h"
#include "ui/ui_uScreenMemory.h"

uScreenMemory::uScreenMemory(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::uScreenMemory)
{
    ui->setupUi(this);
}

uScreenMemory::~uScreenMemory()
{
    delete ui;
}

