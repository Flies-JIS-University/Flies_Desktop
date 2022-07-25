#ifndef FLIES_H
#define FLIES_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class Flies; }
QT_END_NAMESPACE

class Flies : public QMainWindow
{
    Q_OBJECT

public:
    Flies(QWidget *parent = nullptr);
    ~Flies();

private:
    Ui::Flies *ui;
};
#endif // FLIES_H
