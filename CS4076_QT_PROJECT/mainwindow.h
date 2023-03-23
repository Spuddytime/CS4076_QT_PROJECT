//Name:Stephen Walsh ID:21334234

#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qtextedit.h"
#include <QMainWindow>
#include <QDialog>
#include <QTextEdit>
#include <QLineEdit>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

public slots:
    void newRecipe();

private:
    Ui::MainWindow *ui;
};

class RecipeWindow : public QDialog
{
    Q_OBJECT

public:
    RecipeWindow(QWidget *parent = nullptr);

private:
    QLineEdit *nameEdit;
    QTextEdit *ingredientsEdit;
    QTextEdit *instructionsEdit;
};
#endif // MAINWINDOW_H
