#include "Recipe.h"



Recipe::Recipe()
{
	recipeName = "";
}

std::string Recipe::GetRecipeName()
{
	return recipeName;
}

std::vector<std::string> Recipe::GetRecipeIngredients()
{
	return recipeIngredients;
}

std::vector<std::string> Recipe::GetRecipeSteps()
{
	return recipeSteps;
}

