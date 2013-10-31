#pragma once

#define  SINGLETON(type)\
	public: \
	static type* GetInstance() {static type s; return &s;}

	