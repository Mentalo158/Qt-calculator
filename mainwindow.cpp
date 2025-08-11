#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QJSEngine>
#include <QJSValue>


MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool lastWasResult = false;

void MainWindow::appendText(const QString &text){
    if (lastWasResult) {
        ui->resultOutput->clear();
        lastWasResult = false;
    }
    ui->resultOutput->setText(ui->resultOutput->text() + text);
}

void MainWindow::on_btnAddNumberZero_clicked()
{

    appendText("0");
}

void MainWindow::on_btnAddNumberOne_clicked()
{
    appendText("1");
}

void MainWindow::on_btnAddNumberTwo_clicked()
{
    appendText("2");
}


void MainWindow::on_btnAddNumberThree_clicked()
{
    appendText("3");
}


void MainWindow::on_btnAddNumberFour_clicked()
{
    appendText("4");
}


void MainWindow::on_btnAddNumberFive_clicked()
{
    appendText("5");
}


void MainWindow::on_btnAddNumberSix_clicked()
{
    appendText("6");
}


void MainWindow::on_btnAddNumberSeven_clicked()
{
    appendText("7");
}


void MainWindow::on_btnAddNumberEight_clicked()
{
    appendText("8");
}


void MainWindow::on_btnAddNumberNine_clicked()
{
    appendText("9");
}


void MainWindow::on_btnAdd_clicked()
{
    appendText(" + ");
}

void MainWindow::on_btnSubtract_clicked()
{
    appendText(" - ");
}

void MainWindow::on_btnMultiply_clicked()
{
    appendText(" * ");
}

void MainWindow::on_btnDivide_clicked()
{
    appendText(" / ");
}

void MainWindow::on_btnModulo_clicked()
{
    appendText(" % ");
}


void MainWindow::on_btnShowResult_clicked()
{
    lastWasResult = true;
    QString expr = ui->resultOutput->text();

    QJSEngine engine;
    QJSValue result = engine.evaluate(expr);

    if (result.isNumber()) {
        ui->resultOutput->setText(QString::number(result.toNumber()));
    } else {
        ui->resultOutput->setText("Fehler");
    }
}

void MainWindow::on_btnAddFloatingPoint_clicked()
{
    appendText(".");
}

void MainWindow::on_btnClearInput_clicked()
{
    ui->resultOutput->clear();
}


void MainWindow::on_btnDeleteLastInput_clicked()
{
    QString text = ui->resultOutput->text();
    if (text.endsWith(" ")) {
        // Entfernt die letzten 3 Zeichen: " + " oder " - " etc.
        text.chop(3);
    } else if (!text.isEmpty()) {
        text.chop(1);
    }
    ui->resultOutput->setText(text);
}

