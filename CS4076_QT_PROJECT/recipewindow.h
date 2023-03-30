//Name:Stephen Walsh ID:21334234

#ifndef RECIPEWINDOW_H
#define RECIPEWINDOW_H

#include <QDialog>
#include <QTextEdit>
#include <QLineEdit>
#include <QMessageBox>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>
#include "recipebook.h"

class RecipeWindow : public QDialog
{
    Q_OBJECT

public:
    RecipeWindow(QWidget *parent = nullptr, RecipeBook *recipeBook = nullptr);

private slots:
    void saveRecipe();

private:
    QLineEdit *nameEdit;
    QTextEdit *ingredientsEdit;
    QTextEdit *instructionsEdit;
    RecipeBook *m_recipeBook;
};

#endif // RECIPEWINDOW_H
