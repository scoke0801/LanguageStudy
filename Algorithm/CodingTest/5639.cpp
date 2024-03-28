//#include <iostream>
//using namespace std;
//
//struct Node
//{
//	Node* parent = nullptr;
//	Node* left = nullptr;
//	Node* right = nullptr;
//	int data =-1;
//};
//
//
//Node* root; 
//
//void PostOrder(Node* node)
//{
//	if (node == nullptr) { return; }
//
//	PostOrder(node->left);
//	PostOrder(node->right);
//	std::cout << node->data << "\n";
//}
//
//Node* FindPos(Node* node)
//{
//	Node* cur = root;
//	Node* prev = nullptr;
//	while (cur != nullptr)
//	{
//		prev = cur;
//		if (cur->data < node->data)
//		{
//			cur = cur->right;
//		}
//		else
//		{
//			cur = cur->left;
//		}
//	}
//
//	return prev;
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(nullptr);
//	cout.tie(nullptr);
//
//	root = new Node;
//
//	int num;
//	while (cin >> num)
//	{ 
//		if (root->data == -1)
//		{
//			root->data = num;
//		}
//		else
//		{
//			Node* node = new Node;
//			node->data = num;
//			
//			Node* prev = FindPos(node); 
//			if (prev->data < node->data)
//			{
//				prev->right = node;
//			}
//			else
//			{
//				prev->left = node;
//			}
//			node->parent = prev;
//		}
//	} 
//	PostOrder(root);
//
//	return 0;
//}