#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "math.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->label->setText("0");
    dele = '0';
    Num = 0;
    on = '0';
    prevNum = 0;
}

void MainWindow::deleset(char d){
    switch (on) {
    case 's':
        Num=sin(Num);
        break;
    case 't':
        Num=tan(Num);
        break;
    case 'c':
        Num=cos(Num);
        break;
    case 'l':
        Num=log(Num);
        break;
    case 'g':
        Num=log10(Num);
        break;
    case 'f':
        Num=fac(Num);
        break;
    default:
        break;
    }
    if(gwal)
    {
        switch (gwalDele) {
        case '/':
            gwalPrev /= Num;
            break;
        case '*':
            gwalPrev *= Num;
            break;
        case '+':
            gwalPrev += Num;
            break;
        case '-':
            gwalPrev -= Num;
            break;
        case '^':
            gwalPrev = pow(gwalPrev,Num);
            break;
        default:
            gwalPrev = Num;
            break;
        }
        gwalDele = d;
    }else{
        switch (dele) {
        case '/':
            prevNum /= Num;
            break;
        case '*':
            prevNum *= Num;
            break;
        case '+':
            prevNum += Num;
            break;
        case '-':
            prevNum -= Num;
            break;
        case '^':
            prevNum = pow(prevNum,Num);
            break;
        default:
            prevNum = Num;
            break;
        }
        dele = d;
    }
    Num = 0;
    ui->label->setNum(Num);
}
int MainWindow::fac(int i)
{
    return (i <= 1) ? 1 : i * fac(i - 1);
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pi_btn_clicked()
{
    Num = 3.1415926535897;
    ui->label->setNum(Num);
}


void MainWindow::on_e_btn_clicked()
{
    Num = 2.71828182845904;
    ui->label->setNum(Num);
}


void MainWindow::on_open_btn_clicked()
{
    gwal = true;
}


void MainWindow::on_nanum_btn_clicked()
{
    deleset('/');
}


void MainWindow::on_change_btn_clicked()
{
    Num *= -1;
    ui->label->setNum(Num);
}


void MainWindow::on_close_btn_clicked()
{
    deleset('0');
    gwal = false;
    Num = gwalPrev;
    ui->label->setNum(Num);
}


void MainWindow::on_jegob_btn_clicked()
{
    deleset('^');
}


void MainWindow::on_root_btn_clicked()
{
    on = 'r';
}


void MainWindow::on_seven_btn_clicked()
{
    Num*=10;
    Num+=7;
    ui->label->setNum(Num);
}


void MainWindow::on_eight_btn_clicked()
{
    Num*=10;
    Num+=8;
    ui->label->setNum(Num);
}


void MainWindow::on_nine_btn_clicked()
{
    Num*=10;
    Num+=9;
    ui->label->setNum(Num);
}


void MainWindow::on_gob_btn_clicked()
{
    deleset('*');
}


void MainWindow::on_ln_btn_clicked()
{
    on = 'l';
}


void MainWindow::on_log_btn_clicked()
{
    on = 'g';
}


void MainWindow::on_four_btn_clicked()
{
    Num*=10;
    Num+=4;
    ui->label->setNum(Num);
}


void MainWindow::on_five_btn_clicked()
{
    Num*=10;
    Num+=5;
    ui->label->setNum(Num);
}


void MainWindow::on_six_btn_clicked()
{
    Num*=10;
    Num+=6;
    ui->label->setNum(Num);
}


void MainWindow::on_minus_btn_clicked()
{
    deleset('-');
}


void MainWindow::on_sin_btn_clicked()
{
    on= 's';
}


void MainWindow::on_cos_btn_clicked()
{
    on='c';
}


void MainWindow::on_one_btn_clicked()
{
    Num*=10;
    Num+=1;
    ui->label->setNum(Num);
}


void MainWindow::on_two_btn_clicked()
{
    Num*=10;
    Num+=2;
    ui->label->setNum(Num);
}


void MainWindow::on_three_btn_clicked()
{
    Num*=10;
    Num+=3;
    ui->label->setNum(Num);
}


void MainWindow::on_plus_btn_clicked()
{
    deleset('+');
}


void MainWindow::on_tan_btn_clicked()
{
    on = 't';
}


void MainWindow::on_factorial_btn_clicked()
{
    on='f';
}


void MainWindow::on_ac_btn_clicked()
{
    dele = '0';
    on='0';
    Num = 0;
    prevNum = 0;
    gwalPrev = 0;
    gwal = false;
    ui->label->setNum(Num);
}


void MainWindow::on_zero_btn_clicked()
{
    Num*=10;
    ui->label->setNum(Num);
}


void MainWindow::on_c_btn_clicked()
{
    Num = 0;
    on = '0';
    ui->label->setNum(Num);
}


void MainWindow::on_equal_btn_clicked()
{
    deleset('0');
    ui->label->setNum(prevNum);
}

