#pragma once
#include <QApplication>
#include <QMainWindow>
#include <QTextEdit>


class Console : public QMainWindow
{
	static QTextEdit* m_textEdit;
public:
	Console();
	~Console();
	void clear();
	static void write(const char* text);




};