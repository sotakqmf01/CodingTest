#include <iostream>

class Date {
private:
	int year_;
	int month_;
	int day_;
	// 달마다 며칠씩 있는지
	int DaysInMonth[13] = { 0,31,28,31,30,31,30,31,31,30,31,30,31 };

public:
	void SetDate(int year, int month, int date) {
		year_ = year;
		month_ = month;
		day_ = date;

		CheckLeaf();
	}

	// ※ 매우 중요 - 윤년인지 체크하고 DaysInMonth 변경
	void CheckLeaf() {
		if (year_ % 4 == 0 && year_ != 100 || year_ % 400 == 0)	// 2100년은 평년, 2000년은 윤년
			DaysInMonth[2] = 29;
		else
			DaysInMonth[2] = 28;
	}

	void AddDay(int inc) {
		day_ += inc;

		while (day_ > DaysInMonth[month_]) {
			// if문 -> switch문을 바꾸면 더 보기 좋을 듯
			if (DaysInMonth[month_] == 31) {
				if (day_ > 31) {
					month_++;
					day_ -= 31;	//== day_ -= DaysInMonth[month_-1];
				}
			}
			else if (DaysInMonth[month_] == 28) {
				month_++;
				day_ -= 28;
			}
			else if (DaysInMonth[month_] == 29) {
				month_++;
				day_ -= 29;
			}
			else {
				if (day_ > 30) {
					month_++;
					day_ -= 30;
				}
			}

			if (month_ > 12) {
				year_++;
				month_ -= 12;
				CheckLeaf();
			}
		}
	}
	void AddMonth(int inc) {
		month_ += inc;

		while (month_ > 12) {
			AddYear(1);
			month_ -= 12;
		}
		CheckLeaf();

		// 1월 31일에서 1달을 추가하면 2월 31일이 아니라 28일(윤달 29일)로
		// month_ += inc; 전에 이걸 하면 2024.2.29에 12개월 더하면 2025.2.29일이 됨
		// 근데 2025.2.28이 되야함 이걸 위해 CheckLeaf()를 해야함
		// 년, 월 모두 계산하고나서 day 계산
		if (day_ > DaysInMonth[month_])
			day_ = DaysInMonth[month_];
	}
	void AddYear(int inc) {
		year_ += inc;
		CheckLeaf();
	}

	void ShowDate() {
		std::cout << "현재 날짜 : " << year_ << "." << month_ << "." << day_ << std::endl;
	}
};

int main()
{
	Date date;
	date.SetDate(2024, 1, 31);
	date.ShowDate();

	date.AddDay(60);
	date.ShowDate();
	date.AddMonth(1);
	date.ShowDate();
}
