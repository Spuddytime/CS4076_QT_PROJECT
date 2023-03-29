#ifndef RECIPE_H
#define RECIPE_H

#include <QString>

class Recipe
{
public:
    Recipe(QString name = "", QString ingredients = "", QString instructions = "");

    QString name() const { return m_name; }
    QString ingredients() const { return m_ingredients; }
    QString instructions() const { return m_instructions; }

    void setName(const QString& name);
    void setIngredients(const QString& ingredients);
    void setInstructions(const QString& instructions);

    void printRecipe();

private:
    QString m_name;
    QString m_ingredients;
    QString m_instructions;
};

#endif // RECIPE_H
