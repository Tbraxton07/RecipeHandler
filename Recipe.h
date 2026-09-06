#pragma once
#include <string>
#include <vector>

class Recipe
{
	std::string recipeName;
	std::vector<std::string> recipeIngredients;
	std::vector<std::string> recipeSteps;
public:
	Recipe();
	std::string GetRecipeName();
	std::vector<std::string> GetRecipeIngredients();

};

