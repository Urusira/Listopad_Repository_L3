#pragma once
/**
	@file		Listopad_Train.h
	@brief		������������ ���� ������ ������
	@copyright	����
	@author		�������� �.�.
	@date		13-12-2023
	@version	0.3.1
\par ���������� ������:
	@ref Listopad_Train
\par �������� �����:
	@ref Listopad_Train
*/

/// ����� �������� ������
/** �������� ������ ������ � ������ ��� ������ � ���
*/

class Listopad_Train
{
protected:
	char Listopad_To;	///< ����� ����������
	int Listopad_trNum;	///< ����� ������
	int Listopad_timeStart;	///< ����� �����������
	int Listopad_general;	///< ����� ����� ����
	int Listopad_coupe;	///< ��������
	int Listopad_reserved;	///< �����������

public:

	/// ���������� ������ �������, ��������� �� ��������� ������ ����������
	/** ���� ����� ����� �� ����� �������, ����� ����� ��������� �� ������
	@return ������ � ������� � ������� (� ������, ����� ����������, ����� �����������, ����� �����, ��������, ����������� ����)
	@param To	����� ���������� ������
	*/
	int Listopad_trListGoingTo(int To);

	/// ���������� ������ �������, ��������� �� ��������� ������ ���������� � �������������� ����� ��������� ����
	/** ���� ����� �����������, ����� ����� ��������� �� ������
	@return ������ � ������� � ������� (� ������, ����� ����������, ����� �����������, ����� �����, ��������, ����������� ����)
	@param To	����� ���������� ������
	@param Listopad_timeStart	�����, ����� �������� ������ ������������ �����
	*/
	int Listopad_trListGoingToAtThisHour(int To, int Time);

	/// ���������� ������ �������, �������������� �� ��������� ������ ���������� � ������� ����� �����.
	/** ���� ����� �����������, ����� ����� ��������� �� ������
	@return ������ � ������� � ������� (� ������, ����� ����������, ����� �����������, ����� �����, ��������, ����������� ����)
	@param To	����� ���������� ������
	*/
	int Listopad_trListGoingToWithGeneral(int To);

	/// ����������� ��-���������
	/** ������ ����� ��� ������������� �����
	*/
	Listopad_Train();

	/// ����������� � �������������� �����
	/** ������ ����� � �������������� ��� ����
	\param Listopad_To			����� ���������� ������
	\param Listopad_trNum		����� ������
	\param Listopad_timeStart	����� �����������
	\param Listopad_general		���������� ����� ����
	\param Listopad_coupe		���������� �������� ����
	\param Listopad_reserved	���������� ����������� ����
	*/
	Listopad_Train(char Listopad_To, int Listopad_trNum, int Listopad_timeStart, int Listopad_general, int Listopad_coupe, int Listopad_reserved);

	/// ����������, ����������� ������
	~Listopad_Train();
};