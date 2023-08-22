#include "stdafx.h"
#include "JsonHelper.h"

bool JsonHelper::LoadAndParseDocument(const std::string_view filePath, rapidjson::Document& doc)
{
	std::fstream file(filePath.data());

	if (file.is_open() == false) {
		std::cout << "Failed to open file " << filePath << "\n";
		return false;
	}

	std::string jsonString((std::istreambuf_iterator<char>(file)), (std::istreambuf_iterator<char>()));

	doc.Parse(jsonString.c_str());
	return true;
}
