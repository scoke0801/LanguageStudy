#include "stdafx.h"

#include "JsonHelper.h"

class ItemInfo
{
public:
	void Load(const rapidjson::Value::Object& object)
	{
		_id = object["DataId"].GetInt();
		_itemType = object["DropItemType"].GetInt();
		_name = object["NameTextID"].GetString();
		_description = object["DescriptionTextID"].GetString();
		_spriteName = object["SpriteName"].GetString();
	}

	void Display() {
		std::cout << "ID: " << _id << "\n";
		std::cout << "ItemType: " << _itemType << "\n";
		std::cout << "Name: " << _name << "\n";
		std::cout << "Description: " << _description << "\n";
		std::cout << "SpriteName: " << _spriteName << "\n";
	}
private:
	int _id;
	int _itemType;
	std::string _name;
	std::string _description;
	std::string _spriteName;
};

int main()
{
	std::vector<std::shared_ptr<ItemInfo>> buffer;

	rapidjson::Document doc;

	JsonHelper::LoadAndParseDocument("../Resources/Data/TestItemInfo.json"s, doc);

	rapidjson::Value& arrayVar = doc["DropItems"].GetArray();

	for (int i = 0; i < static_cast<int>(arrayVar.Size()); ++i) {
		const rapidjson::Value::Object object = arrayVar[i].GetObject();

		std::shared_ptr<ItemInfo> itemInfo = std::make_shared<ItemInfo>();
		itemInfo.get()->Load(arrayVar[i].GetObject());

		buffer.push_back(std::move(itemInfo));
	}

	for (const auto& itemInfo : buffer) {
		itemInfo.get()->Display();
		std::cout << "\n";
	}
}