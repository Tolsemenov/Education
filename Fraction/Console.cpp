#include <iostream>
#include "Console.h"
#include <QApplication>
#include <QString>


QTextEdit* Console::m_textEdit = nullptr;

Console::Console() {
	if (m_textEdit == nullptr) 
		m_textEdit = new QTextEdit{};
	setCentralWidget(m_textEdit);
}

Console::~Console() {
	if (m_textEdit) {
		delete m_textEdit;
		m_textEdit = nullptr;
	}
}


void Console::write(const char* text){
	m_textEdit->insertPlainText(QString{ text });
}

void Console::clear() {
	m_textEdit->clear();
}
 