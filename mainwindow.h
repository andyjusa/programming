#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    double Num;
    char dele;
    double prevNum;
    bool gwal;
    double gwalPrev;
    char gwalDele;
    char on;
    void deleset(char d);
    int fac(int i);

private slots:

    void on_pi_btn_clicked();

    void on_e_btn_clicked();

    void on_open_btn_clicked();

    void on_nanum_btn_clicked();

    void on_change_btn_clicked();

    void on_close_btn_clicked();

    void on_jegob_btn_clicked();

    void on_root_btn_clicked();

    void on_seven_btn_clicked();

    void on_eight_btn_clicked();

    void on_nine_btn_clicked();

    void on_gob_btn_clicked();

    void on_ln_btn_clicked();

    void on_log_btn_clicked();

    void on_four_btn_clicked();

    void on_five_btn_clicked();

    void on_six_btn_clicked();

    void on_minus_btn_clicked();

    void on_sin_btn_clicked();

    void on_cos_btn_clicked();

    void on_one_btn_clicked();

    void on_two_btn_clicked();

    void on_three_btn_clicked();

    void on_plus_btn_clicked();

    void on_tan_btn_clicked();

    void on_factorial_btn_clicked();

    void on_ac_btn_clicked();

    void on_zero_btn_clicked();

    void on_c_btn_clicked();

    void on_equal_btn_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
