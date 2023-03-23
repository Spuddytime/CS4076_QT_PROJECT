#ifndef RECIPEWINDOW_H
#define RECIPEWINDOW_H

#include "qdialog.h"
#include <QTextEdit>
#include <QLineEdit>
#include <QMessageBox>

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

#endif // RECIPEWINDOW_H
