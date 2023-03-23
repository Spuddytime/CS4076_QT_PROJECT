#ifndef RECIPEBOOK_H
#define RECIPEBOOK_H

#include <vector>
#include "recipe.h"

class RecipeBook
{
public:
    RecipeBook();
    void addRecipe(Recipe recipe);
    Recipe getRecipe(int index);
    int getRecipeCount();

    void addRecipe(const Recipe& recipe);

private:
    std::vector<Recipe> recipes;
};

#endif // RECIPEBOOK_H
