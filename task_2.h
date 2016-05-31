#ifndef TASK_2_H
#define TASK_2_H

#include <QMainWindow>
#include <QPushButton>

namespace Ui {
class task_2;
}

class task_2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit task_2(QWidget *parent = 0);
    ~task_2();

private slots:
    void on_close_clicked();

    void on_change_pos_clicked();

private:
    QPushButton* m_close;
    QPushButton* m_change_pos;
};

#endif // TASK_2_H
