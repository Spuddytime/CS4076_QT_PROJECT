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

        Recipe(const QString& name, const QString& ingredients, const QString& instructions);

           QString getName() const;
           QString getIngredients() const;
           QString getInstructions() const;

           void setName(const QString& name);
           void setInstructions(const QString& instructions);
           void setIngredients(const QString& ingredients);
private:
    QString m_name; //Member  variables changed to m_ for clarity sake
    QString m_ingredients;
    QString m_instructions;
};

#endif // RECIPE_H
