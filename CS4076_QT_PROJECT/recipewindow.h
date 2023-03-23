
#ifndef RECIPEWINDOW
#define RECIPEWINDOW

#include "qdialog.h"
#include <QTextEdit>
#include <QLineEdit>
#include <QMessageBox>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>

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
