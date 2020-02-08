#include <iostream>
#include <cmath>
using namespace std;

int computeNums (int &num1, int &num2, char &choice);
double computeNums(double &num1, double &num2, char &choice);

int main ()
{
  signed int num1, num2;
  char choice;
  signed int result;
  bool isRunning = true;
  double d_num1, d_num2;
  double d_result;

  cout <<"******************************************************************************\n";
  cout << "\t\t\t\t\t\t\tC++ Calculator Program\n";
  cout << "\t\t\tCreated by David Dixon\n";
  cout <<"Enter the numbers you want to operator and select a operator to peformn\n";
  cout <<"******************************************************************************\n";

  while (isRunning)
    {
    cout << "Do you want to use Integers(i) or RealNumbers(f)?: ";
    cin >> choice;
    
    if (choice == 'i')
	{
	  cout << "Enter a number: ";
	  cin >> num1;
	  cout << "Enter a second number: ";
	  cin >> num2;
	  cout <<
	    "Choose one of the five letters for an operator: add(a), subtract(s), multiply(m), divide(d) or modulo(r): ";
	  cin >> choice;
	  result = computeNums (num1, num2, choice);
	  
	  switch (choice)
	{
	case 'a':
	  cout << num1 << " + " << num2 << " = " << result << endl;
	  break;

	case 's':
	  cout << num1 << " - " << num2 << " = " << result << endl;
	  break;

	case 'm':
	  cout << num1 << " * " << num2 << " = " << result << endl;
	  break;

	case 'd':
	  if (num2 != 0)
	    {
	      cout << num1 << " / " << num2 << " = " << result << endl;
	    }
	  else
	    {
	      cout << "Operation error: Cannot divide by zero.\n";
	    }
	  break;

	case 'r':
	  cout << "The remainder of " << num1 << " and " << num2 << " is " <<
	    result << endl;
	  break;

	default:
	  cout << "Error: Wrong Input! Exiting....";
	  break;
	}
	}
    else if (choice == 'f')
	{
	  cout << "Enter a number: ";
	  cin >> d_num1;
	  cout << "Enter a second number: ";
	  cin >> d_num2;
	  cout <<"Choose one of the five letters for an operator: add(a), subtract(s), multiply(m), divide(d) or modulo(r): ";
	  cin >> choice;
	  d_result = computeNums (d_num1, d_num2, choice);
	  
	  switch (choice)
	{
	case 'a':
	  cout << d_num1 << " + " << d_num2 << " = " << d_result << endl;
	  break;

	case 's':
	  cout << d_num1 << " - " << d_num2 << " = " << d_result << endl;
	  break;

	case 'm':
	  cout << d_num1 << " * " << d_num2 << " = " << d_result << endl;
	  break;

	case 'd':
	  if (d_num2 != 0.0)
	    {
	      cout << d_num1 << " / " << d_num2 << " = " << d_result << endl;
	    }
	  else
	    {
	      cout << "Operation error: Cannot divide by zero.\n";
	    }
	  break;

	case 'r':
	  cout << "The remainder of " << d_num1 << " and " << d_num2 << " is " << d_result << endl;
	  break;

	default:
	  cout << "Error: Wrong Input!...\n";
	  break;
	  
	}
   
	}
	 else
    {
        cout << "Wrong Input....try again....\n";
    }
      cout << "Would like to exit? (y/n): ";

      cin >> choice;

      if (choice == 'y')
	{
	  isRunning = false;
	}
}
  return 0;
}


int computeNums (int &num1, int &num2, char &choice)
{
  int result = 0;

  switch (choice)
    {
    case 'a':
      result = num1 + num2;
      break;

    case 's':
      result = num1 - num2;
      break;

    case 'm':
      result = num1 * num2;
      break;

    case 'd':

      if (num2 != 0)
	{
	  result = num1 / num2;
	}
      else
	{
	  cout << "This operation is invalid!\n";
	}
      break;

    case 'r':

      if (num2 != 0)
	{
	  result = num1 / num2;
	}
      else
	{
	  cout << "Operation error: Cannot divide by zero.\n";
	}
      break;

    default:
      cout << "Error: Wrong Input! Exiting....";
      break;

    }

  return result;
}

double computeNums (double &num1, double &num2, char &choice)
{
  int result = 0;

  switch (choice)
    {
    case 'a':
      result = num1 + num2;
      break;

    case 's':
      result = num1 - num2;
      break;

    case 'm':
      result = num1 * num2;
      break;

    case 'd':

      if (num2 != 0)
	{
	  result = num1 / num2;
	}
      else
	{
	  cout << "This operation is invalid!\n";
	}
      break;

    case 'r':
        result = fmod (num1, num2); 
        break;
        
    default:
      cout << "Error: Wrong Input! Exiting....";
      break;

    }

  return result;
}
