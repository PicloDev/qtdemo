#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>

QT_BEGIN_NAMESPACE
namespace Ui
{
    class Widget;  //一个名字空间 UI，包含一个类widget
}
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT //添加该宏 可以使用信号与槽、属性

public:
    Widget(QWidget *parent = nullptr); //构造函数
    ~Widget();                         //析构函数

private slots:
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;//使用UI：：Widget类定义的一个对象指针
};


#endif // WIDGET_H
