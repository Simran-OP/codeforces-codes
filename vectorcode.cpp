#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	//declaration
// 1.>vector declaration with the help of size
// 2.>vector declaration as an empty vector (you have to use push_back() function to insert
	// a element in vector v)
	// 2.1> using curly braces at single time
	// 2.2> using push_back()
 
	// vector<int> v(4);//vector v of size 4
	// vector<int> v;//empty vector
 
	// // v = {1, 2, 3, 4};//defining vector
 
	// vector<int> v;
	// // for (int i = 0; i < 4; i++) cin >> v[i];
	// for (int i = 0; i < 4; i++) {
	// 	int x; cin >> x;
	// 	v.push_back(x);
	// }
 
	// for (int i = 0; i < 4; i++) cout << v[i] << endl;
 
	// // for (int i = 0; i < 4; i++) cin >> v[i];
	// for (int i = 0; i < 4; i++) cin >> v[i]
	// // cout << v[0] << endl;
	// cout << endl
 
	// vector<int> v;
	// for (int i = 0; i < 4; i++) cin >> v[i];
	// for (int i = 0; i < 4; i++) cout << v[i] << " " << endl;
	// vector<int> v;//empty vector
	// int n; cin >> n;
	// // push_back()->insertion and size allocation at the same time
	// for (int i = 0; i < n; i++)
	// {
	// 	int x; cin >> x;
	// 	v.push_back(x);
	// }
 
 
	// // v -> curr size == n
	// int x; cin >> x;
	// v.push_back(x);
 
	// vector<int> v(4, -1);
	// for (int i = 0; i < 4; i++) cout << v[i] << " ";
 
	// v.size()->current size of the vector
	// v->      {1,2,3}  v.size()=3
	// indexes->{0,1,2}
	// vector<int> v = {1, 2, 3};
	// for (int i = 0; i < v.size(); i++)
	// {
	// 	cout << "Index-> " << i << "Curr_element-> " << v[i] << endl;
	// }
 
	// v.pop_back()
	// vector<int> v = {1, 2, 3, 4, 5, 6};
	// cout << "Size of the vector " << v.size() << endl;
	// for (int i = 0; i < v.size(); i++)
	// {
	// 	cout << v[i] << " ";
	// }
	// cout << endl;
	// v.pop_back();
	// cout << v.size() << " vector_curr_size " << endl;
 
	// v.pop_back();
 
	// cout << v.size() << " vector_curr_size " << endl;
	// for (int i = 0; i < v.size(); i++)
	// {
	// 	cout << v[i] << " ";
	// }
 
	//vector<char> v;
	// vector<string> v;
 
	// string s; cin >> s;
	// cout << s[0] << " " << endl;
	// //charcater
 
	// int indzeroindexing = s[0] - 'a';
	// cout << indzeroindexing << " " << endl;
	// int indoneindexing = s[0] - 'a' + 1;
	// cout << indoneindexing << " " << endl;
 
	//need to do -> count frequency of each and every character without using map;
	//lower case letters;
	//map<char,int> m;
	// for (int i = 0; i < s.length(); i++) m[s[i]]++;
 
	//hash map,
	//a b c d e f g h -------- z //26 alphabets
	//0 1 2 3 4 5 6 7 8--------25
	//a b c d e f g h i--------z
	//(r-l+1)
	//l=1,r=50;;; [l,r]->(r-l+1)
	//mapped each charcter to the index
///
	// string s; cin >> s;//lowercase letters
	// vector<int> count(26, 0);
	// for (int i = 0; i < s.length(); i++)
	// {
	// 	//s[i]->'a'
	// 	count[s[i] - 'a']++;
	// }
	// // int temp = 97;
	// char temp = 'a';
	// for (int i = 0; i < 26; i++)
	// {
	// 	cout << "Frequency of Character " << temp << "  -> " << count[i] << endl;
	// 	temp++;
	// }
 
	// vector<string> v;
	// cout << v.size() << endl;
	// int n; cin >> n;
	// for (int i = 0; i < n; i++)
	// {
	// 	// cin >> v[i];->this will give error
	// 	string temp; cin >> temp;
	// 	v.push_back(temp);
	// 	cout << "Current Size Of Vector " << v.size() << endl;
	// 	// v.push_back(v[i])
	// }
	// for (int i = 0; i < v.size(); i++)
	// {
	// 	cout << v[i] << " ";
	// }
	// cout << endl;
 
	//vector<pair<int,int>> v;
	//declaration
	// pair<string, string> p;
	// cin >> p.first >> p.second;
	// cout << p.first << " " << p.second << " " << endl;
 
	// vector<pair<string, int>> v;
	// int n; cin >> n;
	// for (int i = 0; i < n; i++)
	// {
	// 	pair<string, int> temp_pair;
	// 	cin >> temp_pair.first >> temp_pair.second;
	// 	v.push_back(temp_pair);
	// }
	// cout << v.size() << endl;
 
	// for (int i = 0; i < v.size(); i++)
	// {
	// 	cout << v[i].first << " " << v[i].second << " " << endl;
	// }
 
	// vector<pair<string, pair<string, int>>> v(3);
	// for (int i = 0; i < v.size(); i++)
	// {
	// 	cin >> v[i].first >> v[i].second.first >> v[i].second.second;
	// }
 
	// cout << v.size() << endl; //->curr size
	// for (int i = 0; i < v.size(); i++)
	// {
	// 	cout << "Stu_Name " << v[i].first << " " << "Skill_Name " << v[i].second.first << " " << "Skill_Lev " << v[i].second.second << " " << endl;
	// }
 
// 	int n, m; cin >> n >> m;
// 	//n number of nodes, m number of edges
// 	vector<vector<pair<int, int>>> v(n + 1);
// 	for (int i = 1; i <= m; i++)
// 	{
// 		int a, b, w; cin >> a >> b >> w;
// 		//a is connected to b with weight w
// 		//b is connected to a with weight w
// //or we can also say that
// 		//b is the children of a with weight w
// 		//a is the children of b with weight w
 
// 		v[a].push_back(make_pair(b, w));
// 		v[b].push_back(make_pair(a, w));
 
// 	}
 
// 	for (int i = 1; i < v.size(); i++)
// 	{
// 		cout << "Parent-> " << i << " " << endl;
// 		for (int j = 0; j < v[i].size(); j++)
// 		{
// 			cout << "Child " << v[i][j].first << " " << "Weight " << v[i][j].second << " " << endl;
// 		}
// 		cout << endl; cout << endl;
// 	}
 
 
 
 
	// vector<pair<string, int>> v;//empty vector
	// int n; cin >> n;
	// for (int i = 1; i <= n; i++)
	// {
	// 	//store the info in temp variable
	// 	string name; int marks; cin >> name >> marks;
 
	// 	//now you have to store this info vector
	// 	//1st method
	// 	// pair<string, int> temp;
	// 	// temp.first = name, temp.second = marks;
 
	// 	// v.push_back(temp);
 
	// 	//2nd method
	// 	v.push_back(make_pair(name, marks));
	// }
	// for (int i = 0; i < n; i++) {
	// 	cout << v[i].first << " " << v[i].second << " " << endl;
	// }
 
 
	///input -> a
	/// numeric value->
 
	// char c; cin >> c;
	// int ans = (c - 'a'+1);
	// 'a'->1
 
	// character c-> ascii value-'a'+1
	// cout << ans << endl;
 
 
// 2//input string : anjsdj1ABCDEFGH234sbsfbfb
	//output-> sum of all (numeric values)
 
	// string s; cin >> s;
	// int sum = 0;
	// //
	// // input>='a'&&input<='z';
 
	// for (int i = 0; i < s.length(); i++) {
	// 	if (s[i] >= '0' && s[i] <= '9') { //ensures that s[i] is numeric character
	// 		sum += (s[i] - '0');
	// 	}
	// 	else if (s[i] >= 'a' && s[i] <= 'z') { //ensures that s[i] is lower english alphabet
	// 		sum += (s[i] - 'a' + 1);
	// 	}
	// 	else {
	// 		sum += (s[i] - 'A' + 1);
	// 	}
	// }
	// cout << sum << endl;
 
	// string s = "123456";
	// int temp = (s[0] - '0');
	// cout << temp << endl;
 
	// int temp = 1;
	// char c = (temp + '0');
	// cout << c << endl;
 
	// vector<int> v;// v(size,val);
	//vector<char> v// v(size,'c');
	// vector<string> v;
	// for (int i = 0; i < 5; i++) {
	// 	string temp; cin >> temp;
	// 	v.push_back(temp);
	// }
	// for (int i = 0; i < 5; i++) {
	// 	int size = v[i].length();
	// 	cout << v[i][size - 1] << endl;
	// }
 
 
//case: 1,, all are different ( each compt had diff size)
	// vector<vector<int>> v(5);
	// for (int i = 0; i < 5; i++) {
	// 	vector<int> temp;
	// 	int sz; cin >> sz;
	// 	for (int j = 0; j < sz; j++) {
	// 		int x; cin >> x;
	// 		temp.push_back(x);
	// 	}
	// 	v[i] = (temp);
	// }
 
	// for (int i = 0; i < 5; i++) {
	// 	int sz = v[i].size();
	// 	for (int j = 0; j < sz; j++) {
	// 		cout << v[i][j] << " ";
	// 	}
	// 	cout << endl;
	// }
 
//case:2 ,, all comp had same size;
	// int sz; cin >> sz;
	// vector<vector<int>> v(5, vector<int> (sz, 1));
	// for (int i = 0; i < v.size(); i++) {
	// 	for (int j = 0; j < sz; j++) cout << v[i][j] << " ";
	// 	cout << endl;
	// }
 
	// pair<int, int> p;
	// p.first = 1, p.second = 2;
	// cout << p.first << " " << p.second << " " << endl;
 
	// vector <vector<pair<string, string>>> v(5, vector<pair<string, string>>(5));
	// for (int i = 0; i < 5; i++) {
	// 	for (int j = 0; j < 5; j++) {
	// 		// string first_name, last_name;
	// 		// cin >> first_name >> last_name;
	// 		cin >> v[i][j].first >> v[i][j].second;
	// 	}
	// }
 
	// for (int i = 0; i < 5; i++) {
	// 	for (int j = 0; j < 5; j++) {
	// 		cout << v[i][j].first << " " << v[i][j].second << " " << " ";
	// 	}
	// 	cout << endl;
	// }
 
 
///sorting in vectors
	//iterators
	//reverse the vector
	//kth max kth min
	//max and min
	//
	return 0;
 
}
