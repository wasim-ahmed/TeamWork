#include "Application.h"
#include "Driver.h"



void Application::readData()
{
	Driver drv;
	drv.readData();
	cout<<drv.getData()<<endl;
	
}


