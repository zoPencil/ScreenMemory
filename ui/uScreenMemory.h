#ifndef USCREENMEMORY_H
#define USCREENMEMORY_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui { class uScreenMemory; }
QT_END_NAMESPACE

class uScreenMemory : public QWidget
{
    Q_OBJECT

public:
    uScreenMemory(QWidget *parent = nullptr);
    ~uScreenMemory();

private:
    Ui::uScreenMemory *ui;
};
#endif // USCREENMEMORY_H
