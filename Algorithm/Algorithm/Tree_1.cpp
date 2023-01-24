//#include "Common.h"
//
//using NodeRef = shared_ptr<struct Node>;
//
//struct Node
//{
//	Node() {}
//	Node(const string& data) : data(data) {}
//
//	string data;
//	vector<NodeRef> children;
//};
//
//NodeRef CreateTree()
//{
//	NodeRef root = make_shared<Node>("R1 ���߽�");
//	{
//		NodeRef node = make_shared<Node>("��������");
//		root->children.push_back(node);
//		{
//			NodeRef leaf = make_shared<Node>("����");
//			node->children.push_back(leaf);
//		}
//		{
//			NodeRef leaf = make_shared<Node>("����");
//			node->children.push_back(leaf);
//		}
//		{
//			NodeRef leaf = make_shared<Node>("���丮");
//			node->children.push_back(leaf);
//		}
//	}
//	{
//		NodeRef node = make_shared<Node>("���α׷�����");
//		root->children.push_back(node);
//		{
//			NodeRef leaf = make_shared<Node>("����");
//			node->children.push_back(leaf);
//		}
//		{
//			NodeRef leaf = make_shared<Node>("Ŭ��");
//			node->children.push_back(leaf);
//		}
//		{
//			NodeRef leaf = make_shared<Node>("����");
//			node->children.push_back(leaf);
//		}
//	}
//	{
//		NodeRef node = make_shared<Node>("��Ʈ��");
//		root->children.push_back(node);
//		{
//			NodeRef leaf = make_shared<Node>("���");
//			node->children.push_back(leaf);
//		}
//		{
//			NodeRef leaf = make_shared<Node>("ĳ����");
//			node->children.push_back(leaf);
//			{
//				NodeRef leaf2 = make_shared<Node>("�ִϸ��̼�");
//				leaf->children.push_back(leaf2);
//			}
//		}
//	}
//
//	return root;
//}
//
//void PrintTree(NodeRef root, int depth) {
//
//	for (int i = 0; i < depth; ++i) {
//		cout << "-";
//	}
//
//	cout << root->data << "\n";
//
//	for (NodeRef& child : root->children) {
//		PrintTree(child, depth + 1);
//	}
//}
//
//// ���� : ��Ʈ���� � ��忡 �����ϱ� ���� ���ľ� �ϴ� ������ ��
//// ���� : ���� ����� �ִ� ����� ����.
//int GetHeight(NodeRef root) {
//	int height = 1;
//
//	for (NodeRef& child : root->children) {
//		height = max(height, GetHeight(child) + 1);
//	}
//
//	return height;
//}
//
//int main()
//{
//	NodeRef root = CreateTree();
//
//	PrintTree(root, 0);
//
//	cout << string_format("Tree Height: %d", GetHeight(root));
//}