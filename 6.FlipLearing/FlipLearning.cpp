#include "stdafx.h"
#include "FlipLearning.h"
#include "InlineFunc.h"


FlipLearning::FlipLearning()
{
}


FlipLearning::~FlipLearning()
{
}

void FlipLearning::InlineFuncTest()
{
	InlineFunc inlineFunc;
	inlineFunc.SetHP(99);	

	// 컴파일될 때 실제는 아래 코드 동작처럼 
	// 직접 코드가 삽입되는 효과(!)가 생긴다.
	//inlineFunc.m_HP = 99;


	for (int i = 0; i < 1024; ++i)
	{
		inlineFunc.SetHP(i);
		// 함수의 호출 부하가, 함수 내용보다 더 클 수 도 있다.
	}	
}
