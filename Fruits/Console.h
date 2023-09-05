#pragma once
#include <QApplication>
#include <QMainWindow>
#include <QTextEdit>


class Consol : public QMainWindow
{
	static QTextEdit* m_textEdit;
public:
	Consol();
	~Consol();
	void clear();
	static void write(const char* text);




};