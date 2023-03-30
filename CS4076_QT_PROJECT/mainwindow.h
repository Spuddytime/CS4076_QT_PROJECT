#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "recipebook.h"
#include "recipewindow.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr, RecipeBook *recipeBook = nullptr);
    ~MainWindow();

private slots:
    void newRecipe();
    void on_actionOpen_triggered()
    {
        // TODO: Implement opening a recipe file
    }
private:
    Ui::MainWindow *ui;
    RecipeBook *m_recipeBook;
};

#endif // MAINWINDOW_H
