#include <iostream>
#include<map>
using namespace std;
void preorder(char ch);
void inorder(char ch);
void postorder(char postorder);
map<char, pair<char, char>>node;
int main()
{
    int n;
    char lname, name, rname;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> name >> lname >> rname;
        node[name] = { lname, rname };
    }
    preorder('A'); 
    cout << "\n";
    inorder('A');
    cout << "\n";
    postorder('A');
    cout << "\n";
}
void preorder(char ch)
{
    if(ch != '.')
		cout << ch;
	if (node[ch].first != NULL)
		preorder(node[ch].first);
	if (node[ch].second != NULL)
        preorder(node[ch].second);
}
void inorder(char ch)
{
    if (node[ch].first != NULL)
        inorder(node[ch].first);
    if (ch != '.')
        cout << ch;
    if (node[ch].second != NULL)
        inorder(node[ch].second);
}
void postorder(char ch)
{
    if (node[ch].first != NULL)
        postorder(node[ch].first);
    if (node[ch].second != NULL)
        postorder(node[ch].second);
    if (ch != '.')
        cout << ch;
}
