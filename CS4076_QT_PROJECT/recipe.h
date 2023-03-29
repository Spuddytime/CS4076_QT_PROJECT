//Name:Stephen Walsh ID:21334234

#ifndef RECIPE_H
#define RECIPE_H

#include <QString>

class Recipe
{
public:
    Recipe();
    Recipe(QString name, QString ingredients, QString instructions);

    void printRecipe();

    QString getName() const;
    QString getIngredients() const;
    QString getInstructions() const;

    void setName(const QString& name);
    void setInstructions(const QString& instructions);
    void setIngredients(const QString& ingredients);


private:
    QString m_name;
    QString m_ingredients;
    QString m_instructions;
};

#endif // RECIPE_H
