#include <iostream>
#include "Console.h"
#include <QApplication>
#include <QString>


QTextEdit* Consol::m_textEdit = nullptr;

Consol::Consol() {
	if (m_textEdit == nullptr) 
		m_textEdit = new QTextEdit{};
	setCentralWidget(m_textEdit);
}

Consol::~Consol() {
	if (m_textEdit) {
		delete m_textEdit;
		m_textEdit = nullptr;
	}
}


void Consol::write(const char* text){
	m_textEdit->insertPlainText(QString{ text });
}

void Consol::clear() {
	m_textEdit->clear();
}
