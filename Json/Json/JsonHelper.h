#pragma once

#include "rapidjson/document.h"
#include "rapidjson/writer.h"
#include "rapidjson/prettywriter.h"
#include "rapidjson/pointer.h"
#include "rapidjson/rapidjson.h"

class JsonHelper
{
public:
	static bool LoadAndParseDocument(const std::string_view filePath, rapidjson::Document& doc);
};

