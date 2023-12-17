#pragma once
/**
	@file		Listopad_Train.h
	@brief		Заголовочный файл классе поезда
	@copyright	ВоГУ
	@author		Листопад В.Ю.
	@date		13-12-2023
	@version	0.3.1
\par Использует классы:
	@ref Listopad_Train
\par Содержит класс:
	@ref Listopad_Train
*/

/// Класс описания поезда
/** Содержит данные поезда и методы для работы с ним
*/

class Listopad_Train
{
protected:
	char Listopad_To;	///< Пункт назначения
	int Listopad_trNum;	///< Номер поезда
	int Listopad_timeStart;	///< Время отправления
	int Listopad_general;	///< Число общих мест
	int Listopad_coupe;	///< Купейных
	int Listopad_reserved;	///< Плацкартных

public:

	/// Возвращает список поездов, следующих до заданного пункта назначения
	/** Если такие рейсы не будут найдены, метод вернёт сообщение об ошибке
	@return строку с данными в формате (№ поезда, пункт назначения, время отправления, число общих, купейных, плацкартных мест)
	@param To	Пункт назначения поезда
	*/
	int Listopad_trListGoingTo(int To);

	/// Возвращает список поездов, следующих до заданного пункта назначения и отправляющихся после заданного часа
	/** Если рейсы отсутствуют, метод вернёт сообщение об ошибке
	@return строку с данными в формате (№ поезда, пункт назначения, время отправления, число общих, купейных, плацкартных мест)
	@param To	Пункт назначения поезда
	@param Listopad_timeStart	Время, после которого должен отправляться поезд
	*/
	int Listopad_trListGoingToAtThisHour(int To, int Time);

	/// Возвращает список поездов, отправляющихся до заданного пункта назначения и имеющих общие места.
	/** Если рейсы отсутствуют, метод вернёт сообщение об ошибке
	@return строку с данными в формате (№ поезда, пункт назначения, время отправления, число общих, купейных, плацкартных мест)
	@param To	Пункт назначения поезда
	*/
	int Listopad_trListGoingToWithGeneral(int To);

	/// Конструктор по-умолчанию
	/** Создаёт поезд без инициализации полей
	*/
	Listopad_Train();

	/// Конструктор с инициализацией полей
	/** Создаёт поезд и инициализирует его поля
	\param Listopad_To			Пункт назначения поезда
	\param Listopad_trNum		Номер поезда
	\param Listopad_timeStart	Время отправления
	\param Listopad_general		Количество общих мест
	\param Listopad_coupe		Количество купейных мест
	\param Listopad_reserved	Количество плацкартных мест
	*/
	Listopad_Train(char Listopad_To, int Listopad_trNum, int Listopad_timeStart, int Listopad_general, int Listopad_coupe, int Listopad_reserved);

	/// Деструктор, освобождает память
	~Listopad_Train();
};