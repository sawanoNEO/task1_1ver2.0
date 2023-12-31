#include <iostream>
#include <fstream>
#include <string>
#include "DoublyLinkedList.h"


using namespace std;

int main(void)
{
	DoublyLinkedList doublelist;        //双方向リストの宣言
	char FileName[11] = "Scores.txt";//スコアデータのファイル名
	std::ifstream ScoreData(FileName);  //スコアデータを格納するクラス
	string line;                        //ScoreDataとScoreListの橋渡しのための変数



	//テキストファイルが見つからなければエラー表示
	if (!ScoreData)
	{
		cout << "ファイルが見つかりません" << endl;
	}
	//テキストファイルが開けれなければエラー表示
	if (!ScoreData.is_open())
	{
		cout << "ファイルを開けません" << endl;
	}

	//テキストファイルの文字列を抽出してリストに格納する
	while (getline(ScoreData, line))
	{
		doublelist.push_back(line);
	}

	doublelist.DisplayData();

	//Enterキーで終了
	cout << "Enterを押して終了します";

	cin.get();
}