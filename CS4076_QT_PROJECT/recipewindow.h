//Name:Stephen Walsh ID:21334234

#ifndef RECIPEWINDOW
#define RECIPEWINDOW

#include "qdialog.h"
#include "recipe.h"
#include <QTextEdit>
#include <QLineEdit>
#include <QMessageBox>
#include <QGridLayout>
#include <QLabel>
#include <QPushButton>

extern Recipe recipeCreated;

class RecipeWindow : public QDialog
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
