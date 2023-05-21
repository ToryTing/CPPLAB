#ifndef REINF_H
#define REINF_H

#include <QWidget>
#include <QPainter>
#include <vector>


namespace Ui {
class Reinf;
}

class Reinf : public QWidget
{
    Q_OBJECT

public:
    explicit Reinf(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *even);//继承Qwidget的绘画函数
    void Value_iter();
    ~Reinf();
    std::vector<double> vs;//状态值函数
    std::vector<std::vector<double> > q_sa;//动作值函数
    std::vector<std::vector<double> > pi_sa;//策略
    double gamma=0.9;

    void comp_qa();
    void comp_pi_sa();
    void comp_vs();
    void one_turn();
private:
    Ui::Reinf *ui;
};

#endif // REINF_H
