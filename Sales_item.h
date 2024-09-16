#ifndef SALESITEM_H
#define SALESITEM_H

#include <iostream>
#include <cstring>
using namespace std;

class Sales_item
{
	friend istream& operator >>(istream&, Sales_item&);			
	friend ostream& operator <<(ostream&, const Sales_item&);	
	friend bool operator <(const Sales_item&, const Sales_item&);
	friend bool
		operator == (const Sales_item&, const Sales_item&);
public:
	//Sales_item() = default;
	Sales_item()
		:units_sold(0), revenue(0.0) {}
	Sales_item(const string& book)
		:bookNo(book), units_sold(0), revenue(0.0) {}
	Sales_item(istream& is) { is >> *this; }
public:
	Sales_item& operator +=(const Sales_item&);

	string isbn()const				//获取编号
	{
		return bookNo;
	}
	double avg_price()const;		//平均价格
private:
	string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
	//unsigned units_sold;
	//double revenue;
};


inline				//对比函数
bool compareIsbn(const Sales_item& l, const Sales_item& r)
{
	return l.isbn() == r.isbn();
}

inline				//重载==，如果参数都相同就返回true
bool operator == (const Sales_item& l, const Sales_item& r)
{
	//需要是友元函数
	return l.units_sold == r.units_sold && l.revenue == r.revenue &&
		l.isbn() == r.isbn();
}

inline 
bool operator !=(const Sales_item& l, const Sales_item& r)
{
	return !(r == r);		//利用了前面重载的'=='
}

//默认两个对象有同一个书的编号 重载+=返回原来的对象 用&
Sales_item& Sales_item::operator+=(const Sales_item& rhs)
{
	//units_sold默认是this->units_sold
	units_sold += rhs.units_sold;
	this->revenue += rhs.revenue;
	return *this;
}

Sales_item
operator + (const Sales_item& l, const Sales_item& r)
{
	Sales_item tmp(l);		//拷贝构造，放到tmp中过渡
	tmp += r;
	return tmp;
}

istream&		//因为存在连读的情况，因此返回引用
operator >> (istream& in, Sales_item& s)
{
	//读取到的内容放到s中
	double price;
	cout << "Please input bookNo:";
	in >> s.bookNo;
	cout << "Please input units_sold:";
	in >> s.units_sold;
	cout << "Please input price:";
	in>>price;
	if (in)
		s.revenue = s.units_sold * price;
	else
		s = Sales_item();	//空的
	return in;
}

ostream&
operator <<(ostream& out, const Sales_item& s)
{
	out << "书编号为：" << s.isbn() << "\n书的销售额为：" << s.units_sold << "\n书的总收入为：" << s.revenue << "\n书的平均价格为："
		<< s.avg_price() << endl;
	return out;
}

double Sales_item::avg_price()const
{
	if (units_sold)
		return revenue / units_sold;
	else
		return 0;
}

#endif // !SALESITEM_H


