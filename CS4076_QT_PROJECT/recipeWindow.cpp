#include "RecipeWindow.h"
#include <QLabel>
#include <QTextEdit>
#include <QLineEdit>
#include <QPushButton>
#include <QGridLayout>
#include <QMessageBox>
#include "recipebook.h"


RecipeWindow::RecipeWindow(QWidget *parent, RecipeBook *recipeBook)
    : QDialog(parent)
    , m_recipeBook(recipeBook)
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

    connect(saveButton, &QPushButton::clicked, this, &RecipeWindow::saveRecipe);
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

    Recipe recipe(name, ingredients, instructions);
    m_recipeBook->addRecipe(recipe);
    accept();
}

