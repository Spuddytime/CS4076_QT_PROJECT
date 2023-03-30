#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "recipebook.h"
#include "recipewindow.h"

class MainWindow : public QMainWindow
{
    Q_OBJECT

public slots:
    void newRecipe();
public:
    MainWindow(QWidget *parent = nullptr, RecipeBook *recipeBook = nullptr);
    ~MainWindow();

private:
    RecipeBook *m_recipeBook;
    RecipeWindow *m_recipeWindow;
};

#endif // MAINWINDOW_H
