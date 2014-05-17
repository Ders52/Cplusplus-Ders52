class CRect
{
private:
	double _width;
	double _length;

public:
	//constructor
	CRect();
	//destructor
	~CRect();
	//getters for _length and _width
	double Length();
	double Width();

	void setrec();

	void tostring();

	double Area(double ar, double len, double win);

	double Perimeter(double perm, double len, double win);
};


double CRect::Length()
{
	return _length;
}

double CRect::Width()
{
	return _width;
}

double CRect::Area(double ar, double len, double lon)
{
	ar = len * lon;

	return ar;
}

double CRect::Perimeter(double perm, double len, double win)
{
	perm = (2 * len) + (2 * win);

	return perm;
}