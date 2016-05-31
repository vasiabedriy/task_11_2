#include "task_2.h"

task_2::task_2(QWidget *parent) :
    QMainWindow(parent)
{
    m_close = new QPushButton("Close",this);
    m_close->setGeometry(QRect(QPoint(30,30),QSize(50,20)));
    connect(m_close, SIGNAL(clicked()), this ,SLOT(on_close_clicked()));

    m_change_pos = new QPushButton("Change",this);
    m_change_pos->setGeometry(QRect(QPoint(80,30),QSize(50,20)));
    connect(m_change_pos, SIGNAL(clicked()), this ,SLOT(on_change_pos_clicked()));
}

task_2::~task_2()
{
    delete m_change_pos;
    delete m_close;
}

void task_2::on_close_clicked()
{
    close();
}

void task_2::on_change_pos_clicked()
{
    m_close->setGeometry(20,20,40,100);
}
