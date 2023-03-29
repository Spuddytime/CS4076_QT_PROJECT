#ifndef RECIPEWINDOW_H
#define RECIPEWINDOW_H

#include <QMainWindow> // include QMainWindow
#include <QDialog>
#include "recipe.h"
#include <QTextEdit>
#include <QLineEdit>
#include <QMessageBox>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>

extern Recipe recipeCreated;

class RecipeWindow : public QMainWindow // inherit from QMainWindow
{
    Q_OBJECT

public:
    RecipeWindow(QWidget *parent = nullptr);

private slots:
    void saveRecipe();

private:
    QLineEdit *nameEdit;
    QTextEdit *ingredientsEdit;
    QTextEdit *instructionsEdit;
};

#endif // RECIPEWINDOW_H
