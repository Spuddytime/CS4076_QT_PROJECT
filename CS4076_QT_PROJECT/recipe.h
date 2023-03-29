//Name:Stephen Walsh ID:21334234

#ifndef RECIPE_H
#define RECIPE_H

#include <QString>
#include <vector>

class Recipe
{
public:
    Recipe();
    Recipe(const QString& name, const QString& ingredients, const QString& instructions);
    void printRecipe();

    QString getName() const;
    QString getIngredients() const;
    QString getInstructions() const;

    void setName(const QString& name);
    void setIngredients(const QString& ingredients);
    void setInstructions(const QString& instructions);

    static void addRecipe(const Recipe& recipe);

private:
    QString m_name;
    QString m_ingredients;
    QString m_instructions;

    static std::vector<Recipe> s_recipes;
};

#endif // RECIPE_H
