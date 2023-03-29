#include "recipeWindow.h"

RecipeWindow::RecipeWindow(QWidget *parent)
    : QDialog(parent)
{
    QLabel *nameLabel = new QLabel(tr("Name:"));
    QLabel *ingredientsLabel = new QLabel(tr("Ingredients:"));
    QLabel *instructionsLabel = new QLabel(tr("Instructions:"));

    nameEdit = new QLineEdit;
    ingredientsEdit = new QTextEdit;
    instructionsEdit = new QTextEdit;

    QPushButton *saveButton = new QPushButton(tr("Save"));

    QGridLayout *layout = new QGridLayout;
    layout->addWidget(nameLabel, 0, 0);
    layout->addWidget(nameEdit, 0, 1);
    layout->addWidget(ingredientsLabel, 1, 0);
    layout->addWidget(ingredientsEdit, 1, 1);
    layout->addWidget(instructionsLabel, 2, 0);
    layout->addWidget(instructionsEdit, 2, 1);
    layout->addWidget(saveButton, 3, 1);

    setLayout(layout);

    connect(saveButton, SIGNAL(clicked()), this, SLOT(saveRecipe()));
}

void RecipeWindow::saveRecipe()
{
    QString name = nameEdit->text();
    QString ingredients = ingredientsEdit->toPlainText();
    QString instructions = instructionsEdit->toPlainText();

    if (name.isEmpty() || ingredients.isEmpty() || instructions.isEmpty()) {
        QMessageBox::warning(this, tr("Incomplete Recipe"), tr("Please enter a name, ingredients, and instructions for your recipe."));
        return;
    }

    recipeCreated = Recipe(name, ingredients, instructions);
    accept();
}

