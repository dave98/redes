#ifndef _SOCKET_INFO_H_
#define _SOCKET_INFO_H_

#include <string>

class TSocket{
public:
	std::string m_name;
	bool m_state;
	int m_id;
	int m_sock;

	TSocket(){
		this->m_state = true;
	}

	~TSocket(){	};

	void SetName(std::string);
	void SetId(int);
};

void TSocket::SetName(std::string _name){
	this->m_name = _name;
}

void TSocket::SetId(int _id){
	this->m_id = _id;
}

#endif