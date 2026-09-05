#pragma once
#include <string>

class Recipe
{
	std::string recipeName;
	std::vector<std::string> recipeIngredients;
	std::vector<std::string> recipeSteps;
public:
	Recipe();
	std::string GetRecipeName();

};

