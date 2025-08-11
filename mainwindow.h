#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_btnAddNumberOne_clicked();

    void on_btnAddNumberZero_clicked();

    void on_btnAddNumberTwo_clicked();

    void on_btnAddNumberThree_clicked();

    void on_btnAddNumberFour_clicked();

    void on_btnAddNumberFive_clicked();

    void on_btnAddNumberSix_clicked();

    void on_btnAddNumberSeven_clicked();

    void on_btnAddNumberEight_clicked();

    void on_btnAddNumberNine_clicked();

    void on_btnAdd_clicked();

    void on_btnShowResult_clicked();

    void on_btnSubtract_clicked();

    void on_btnMultiply_clicked();

    void on_btnDivide_clicked();

    void on_btnAddFloatingPoint_clicked();

    void on_btnModulo_clicked();

    void on_btnClearInput_clicked();

    void on_btnDeleteLastInput_clicked();

private:
    Ui::MainWindow *ui;
    bool lastWasResult = false;
    void appendText(const QString &text);
};
#endif // MAINWINDOW_H
