/*
Name: Nabeel Hussain Syed
Class: BSCS-5A
Reg No: 122937
*/


//Lab Practice 1
// derived classes 
#include <iostream> 
using namespace std;  
class CPolygon 
{ 
protected:     
	int width, height;   
public:     
	void set_values(int a, int b)       
	{ 
		width = a; 
		height = b; 
	} 
};
class CRectangle : public CPolygon 
{ 
public:     
	int area()      
	{ 
		return (width * height); 
	} 
};
class CTriangle : public CPolygon 
{ 
public:     
	int area()       
	{ 
		return (width * height / 2); 
	} };    
int main() 
{
	CRectangle rect;   
	CTriangle trgl;   
	rect.set_values(4, 5);   
	trgl.set_values(4, 5);  
	cout << rect.area() << endl;   
	cout << trgl.area() << endl;  
	getchar();
	getchar();
	getchar();
	return 0;
}


//Lab Practice 2
// constructors and derived classes 
#include <iostream> 
using namespace std;  
class mother 
{ 
public:    
	mother()       
	{ 
		cout << "mother: no parameters\n"; 
	}     
	mother(int a)       
	{ 
		cout << "mother: int parameter\n";
	} 
};
class daughter : public mother 
{ 
public:     
	daughter(int a)       
	{ 
		cout << "daughter: int parameter\n\n"; 
	} 
};
class son : public mother 
{ 
public:     
	son(int a) : mother(a)       
	{ 
		cout << "son: int parameter\n\n"; 
	} 
};
int main() 
{ 
	daughter cynthia(0);   
	son daniel(0);  
	getchar();
	getchar();
	getchar();
	return 0; 
}


//Lab Practice 3
// multiple inheritance #include <iostream> using namespace std;  
class CPolygon 
{ 
protected:     
	int width, height;  
public:     
	void set_values(int a, int b)       
	{ 
		width = a; 
		height = b; 
	} 
};
class COutput 
{ 
public:    
	void output(int i); 
};
void COutput::output(int i) 
{
	cout << i << endl;
}
class CRectangle : public CPolygon, public COutput 
{ 
public:     
	int area()       
	{ 
		return (width * height); 
	} 
};
class CTriangle : public CPolygon, public COutput 
{ 
public:     
	int area()       
	{ 
		return (width * height / 2); 
	} 
};    
int main() 
{ 
	CRectangle rect;   
	CTriangle trgl;   
	rect.set_values(4, 5);   
	trgl.set_values(4, 5);   
	rect.output(rect.area());   
	trgl.output(trgl.area());   
	getchar();
	getchar();
	getchar();
	return 0; 
}