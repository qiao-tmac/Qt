#ifndef MYBUTTON_H
#define MYBUTTON_H
#include <QPushButton>
class MyButton : public QPushButton
{
public:
    explicit MyButton(QWidget* parent = 0);
    QString getName(){return "MyButton!";}
};

#endif // MYBUTTON_H
