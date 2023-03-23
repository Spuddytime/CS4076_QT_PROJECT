#ifndef RECIPE_H
#define RECIPE_H

#include <QString>

class Recipe
{
public:
    Recipe(const QString& name, const QString& ingredients, const QString& instructions);

    QString getName() const;
    QString getIngredients() const;
    QString getInstructions() const;

private:
    QString name;
    QString ingredients;
    QString instructions;
};

#endif // RECIPE_H
