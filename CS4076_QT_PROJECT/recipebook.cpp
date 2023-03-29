//Name:Stephen Walsh ID:21334234

#include "recipebook.h"

std::vector<Recipe> RecipeBook::m_recipes;

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
