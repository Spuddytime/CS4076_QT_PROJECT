//Name:Stephen Walsh ID:21334234

#include "recipebook.h"

std::vector<Recipe> RecipeBook::m_recipes;

void RecipeBook::addRecipe(const Recipe& recipe)
{
    RecipeBook::m_recipes.push_back(recipe);
}

Recipe& RecipeBook::getRecipe(int index)
{
    return RecipeBook::m_recipes[index];
}

int RecipeBook::getSize()
{
    return RecipeBook::m_recipes.size();
}
