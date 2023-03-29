//Name:Stephen Walsh ID:21334234

#include <vector>
#include "recipe.h"

class RecipeBook
{
public:
    void addRecipe(const Recipe& recipe);
    Recipe& getRecipe(int index);
    int getSize();

private:
    std::vector<Recipe> m_recipes;
};

void RecipeBook::addRecipe(const Recipe& recipe)
{
    m_recipes.push_back(recipe);
}

Recipe& RecipeBook::getRecipe(int index)
{
    return m_recipes[index];
}

int RecipeBook::getSize()
{
    return m_recipes.size();
}
