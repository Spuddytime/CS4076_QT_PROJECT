//Name:Stephen Walsh ID:21334234

#include "recipe.h"
#include "qdebug.h"

void Recipe::printRecipe()
{
    qDebug() << "Recipe: " << m_name;
    qDebug() << "Ingredients: " << m_ingredients;
    qDebug() << "Instructions: " << m_instructions;
}

void Recipe::setName(const QString& name)
{
    m_name = name;
}

void Recipe::setIngredients(const QString& ingredients)
{
    m_ingredients = ingredients;
}

void Recipe::setInstructions(const QString& instructions)
{
    m_instructions = instructions;
}

Recipe::Recipe(QString name, QString ingredients, QString instructions)
    : m_name(name), m_ingredients(ingredients), m_instructions(instructions)
{

}
