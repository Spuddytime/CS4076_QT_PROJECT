#include "recipeWindow.h"
#include "recipeBook.h"
#include "recipe.h"

RecipeWindow::RecipeWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::RecipeWindow)
{
    ui->setupUi(this);
}

RecipeWindow::~RecipeWindow()
{
    delete ui;
}

void RecipeWindow::on_addRecipeButton_clicked()
{
    // Get the values from the input fields
    QString name = ui->nameInput->text();
    QString ingredients = ui->ingredientsInput->toPlainText();
    QString instructions = ui->instructionsInput->toPlainText();

    // Create a new recipe
    Recipe recipe(name, ingredients, instructions);

    // Add the recipe to the recipe book
    RecipeBook::addRecipe(recipe);
}

void RecipeWindow::on_viewRecipeButton_clicked()
{
    // Get the selected recipe index
    int index = ui->recipeList->currentIndex().row();

    // Get the recipe from the recipe book
    Recipe& recipe = RecipeBook::getRecipe(index);

    // Set the text of the recipe display field
    QString recipeText = recipe.getName() + "\n\n" + recipe.getIngredients() + "\n\n" + recipe.getInstructions();
    ui->recipeDisplay->setText(recipeText);
}

void RecipeWindow::populateRecipeList()
{
    // Clear the recipe list
    ui->recipeList->clear();

    // Get the number of recipes in the recipe book
    int numRecipes = RecipeBook::getSize();

    // Add each recipe to the recipe list
    for (int i = 0; i < numRecipes; i++)
    {
        Recipe& recipe = RecipeBook::getRecipe(i);
        ui->recipeList->addItem(recipe.getName());
    }
}
