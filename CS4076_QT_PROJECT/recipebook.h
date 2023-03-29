//Name:Stephen Walsh ID:21334234

#ifndef RECIPEBOOK_H
#define RECIPEBOOK_H

#include <vector>
#include "recipe.h"

class RecipeBook
{
public:
    static void addRecipe(const Recipe& recipe);
    static Recipe& getRecipe(int index);
    static int getSize();

private:
    static std::vector<Recipe> m_recipes;
};

#endif // RECIPEBOOK_H
