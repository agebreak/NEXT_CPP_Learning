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

	// �����ϵ� �� ������ �Ʒ� �ڵ� ����ó�� 
	// ���� �ڵ尡 ���ԵǴ� ȿ��(!)�� �����.
	//inlineFunc.m_HP = 99;


	for (int i = 0; i < 1024; ++i)
	{
		inlineFunc.SetHP(i);
		// �Լ��� ȣ�� ���ϰ�, �Լ� ���뺸�� �� Ŭ �� �� �ִ�.
	}	
}
