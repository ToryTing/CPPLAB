#ifndef CALCULATOR_H
#define CALCULATOR_H

#include <QWidget>

namespace Ui {
class calculator;
}

class calculator : public QWidget
{
    Q_OBJECT

public:
    explicit calculator(QWidget *parent = nullptr);
    ~calculator();
protected:
      virtual void keyPressEvent(QKeyEvent *event) override;
private:
    Ui::calculator *ui;
};

#endif // CALCULATOR_H
