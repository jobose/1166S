

void drivercontrol1166S() 
{
  if (Controller1.ButtonA.pressing()) 
  {
    Motor1.startSpinFor(forward, 600, deg, 600, rpm ); 
  }
}