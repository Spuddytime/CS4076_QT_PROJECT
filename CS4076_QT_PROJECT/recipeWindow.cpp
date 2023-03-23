#include "recipewindow.h"

RecipeWindow::RecipeWindow(QWidget *parent)
    : QDialog(parent)

{
    // Create the widgets
    nameEdit = new QLineEdit(this);
    ingredientsEdit = new QTextEdit(this);
    instructionsEdit = new QTextEdit(this);

    // Set up the layout
    QGridLayout *layout = new QGridLayout(this);
    layout->addWidget(new QLabel(tr("Name:"), this), 0, 0);
    layout->addWidget(nameEdit, 0, 1);
    layout->addWidget(new QLabel(tr("Ingredients:"), this), 1, 0);
    layout->addWidget(ingredientsEdit, 1, 1);
    layout->addWidget(new QLabel(tr("Instructions:"), this), 2, 0);
    layout->addWidget(instructionsEdit, 2, 1);
    layout->addWidget(new QPushButton(tr("OK"), this), 3, 0, 1, 2);

    // Create and connect the "OK" button
       QPushButton *okButton = new QPushButton(tr("OK"), this);
       layout->addWidget(okButton, 3, 0, 1, 2);
       connect(okButton, &QPushButton::clicked, this, &RecipeWindow::saveRecipe);

    setWindowTitle(tr("New Recipe"));
}

void RecipeWindow::saveRecipe()
{
    // Extract the information from the widgets
    QString name = nameEdit->text();
    QString ingredients = ingredientsEdit->toPlainText();
    QString instructions = instructionsEdit->toPlainText();


}
