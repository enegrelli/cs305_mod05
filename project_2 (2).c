// header files
#include "Console_IO_Utility.h"
#include <math.h>  // for trig functions

// global constants
const int DEGREES_IN_TRIANGLE = 180;
const double CONSTANT_PI = 3.141592654;

const int TWO_ENDLINES = 2;
const int TABLE_WIDTH = 35;
const int DATA_NAME_WIDTH = 16;
const int UNIT_WIDTH = 7;
const int VALUE_WIDTH = 8;

const char TOP_LINE[] = "===================================";
const char THICK_LINE_DIVIDER[] = "|=================================|";
const char THIN_LINE_DIVIDER[] = "|---------------------------------|";
const char PIPE_SPACE[] = "| ";
const char SPACE_PIPE[] = " |";

  int main()
      {
       // Show title

			// Triangle Angle Calculator
        printEndline();
       	printString( "Triangle Angle Calculator" );
       	printEndline();
       	printString( "==================================" );
       	printEndlines( TWO_ENDLINES );
       	printString("For any given triangle,");
       	printEndline();
       	printString("Enter the side lengths below:");
       	printEndlines( TWO_ENDLINES );

    	// Initialize variables
       		int sideA, sideB, sideC;
    		double angleADegrees, angleBDegrees;
    		double sideASqr, sideBSqr, sideCSqr, numerator, denominator;
    		double cosAngleA, cosAngleB, angleA, angleB, angleC;

       // Get input

			// get sideA
			sideA = promptForInteger( "Enter side A: ");

			// get sideB
			sideB = promptForInteger( "Enter side B: ");

			// get sideC
			sideC = promptForInteger( "Enter side C: ");
			printEndlines( TWO_ENDLINES );

       // Process data

       		// calculate angleA
		sideASqr = sideA * sideA;
       		sideBSqr = sideB * sideB;
       		sideCSqr = sideC * sideC;
		numerator = sideBSqr + sideCSqr - sideASqr;
       		denominator = 2 * sideB * sideC;
       		cosAngleA = numerator/denominator;
       		angleA = acos(cosAngleA);
       		angleADegrees = angleA * DEGREES_IN_TRIANGLE / CONSTANT_PI;

       		// calculate angleB
       		numerator = sideCSqr + sideASqr - sideBSqr;
       		denominator = 2 * sideC * sideA;
       		cosAngleB = numerator/denominator;
       		angleB = acos(cosAngleB);
       		angleBDegrees = angleB * DEGREES_IN_TRIANGLE / CONSTANT_PI;

       		// calculate angleC
       		angleC = DEGREES_IN_TRIANGLE - angleBDegrees - angleADegrees;


       // Get results

       		// make table
       			// TOP_LINE[]
       		printString(TOP_LINE);
          printEndline();
       			// PIPE_SPACE[]
       		printString(PIPE_SPACE);
       			// print "Triangle Angle Calculator"
       		printStringJustified( "Triangle Angle Calculations", TABLE_WIDTH - 4, "CENTER" );
       			// SPACE_PIPE[]
       		printString(SPACE_PIPE);
          printEndline();
       			// THICK_LINE_DIVIDER[]
       		printString(THICK_LINE_DIVIDER);
          printEndline();
       			// PIPE_SPACE[]
       		printString(PIPE_SPACE);
       			// print left justified "Data Name"
       		printStringJustified("Data Name", DATA_NAME_WIDTH - 2 , "LEFT");
       			// PIPE_SPACE[]
       		printString(SPACE_PIPE);
       			// print "Units"
       		printStringJustified("Units", UNIT_WIDTH - 1, "CENTER");
       			// PIPE_SPACE[]
       		printString(SPACE_PIPE);
       			// print Left Justified "values"
       		printStringJustified("Values", VALUE_WIDTH - 1, "CENTER");
       			// SPACE_PIPE[]
       		printString(SPACE_PIPE);
          printEndline();
       			// THIN_LINE_DIVIDER[]
       		printString(THIN_LINE_DIVIDER);
          printEndline();
       			// PIPE_SPACE[]
       		printString(PIPE_SPACE);
       			// print Left Justified "Side A"
       		printStringJustified("Side A", DATA_NAME_WIDTH - 2, "LEFT");
       			// PIPE_SPACE[]
       		printString(SPACE_PIPE);
       			// print center justified "m"
       		printStringJustified("m", UNIT_WIDTH - 1, "CENTER");
       			// PIPE_SPACE[]
       		printString(SPACE_PIPE);
       			// print sideA
       		printDoubleJustified(sideA, 2, VALUE_WIDTH - 1, "RIGHT");
       			// SPACE_PIPE
       		printString(SPACE_PIPE);
          printEndline();
			    // THIN_LINE[]
       		printString(THIN_LINE_DIVIDER);
          printEndline();
       			// PIPE_SPACE[]
       		printString(PIPE_SPACE);
       			// print Left Justified "Side B"
       		printStringJustified("Side B", DATA_NAME_WIDTH - 2, "LEFT");
       			// PIPE_SPACE[]
       		printString(SPACE_PIPE);
       			// print center justified "m"
       		printStringJustified("m", UNIT_WIDTH - 1, "CENTER");
       			// PIPE_SPACE[]
       		printString(SPACE_PIPE);
       			// print sideA
       		printDoubleJustified(sideB, 2, VALUE_WIDTH - 1, "RIGHT");
       			// SPACE_PIPE
       		printString(SPACE_PIPE);
          printEndline();
       			// THIN_LINE
       		printString(THIN_LINE_DIVIDER);
          printEndline();
       			// PIPE_SPACE[]
       		printString(PIPE_SPACE);
       			// print Left Justified "Side C"
       		printStringJustified("Side C", DATA_NAME_WIDTH - 2, "LEFT");
       			// PIPE_SPACE[]
       		printString(SPACE_PIPE);
       			// print center justified "m"
       		printStringJustified("m", UNIT_WIDTH -1, "CENTER");
       			// PIPE_SPACE[]
       		printString(SPACE_PIPE);
       			// print sideA
       		printDoubleJustified(sideC, 2, VALUE_WIDTH - 1, "RIGHT");
       			// SPACE_PIPE
       		printString(SPACE_PIPE);
       			// THICK_LINE
          printEndline();
       		printString(THICK_LINE_DIVIDER);
          printEndline();
       		   	// PIPE_SPACE[]
       		printString(PIPE_SPACE);
       			// print Left Justified "Angle a"
       		printStringJustified("Angle a", DATA_NAME_WIDTH - 2, "LEFT");
       			// PIPE_SPACE[]
       		printString(SPACE_PIPE);
       			// print center justified "deg"
       		printStringJustified("deg", UNIT_WIDTH - 1, "CENTER");
       			// PIPE_SPACE[]
       		printString(SPACE_PIPE);
       			// print angleADegrees
       		printDoubleJustified(angleADegrees, 2, VALUE_WIDTH - 1, "RIGHT");
       			// SPACE_PIPE
       		printString(SPACE_PIPE);
       		  	// THIN_LINE
          printEndline();
			    printString(THIN_LINE_DIVIDER);
          printEndline();
       		    // PIPE_SPACE[]
       		printString(PIPE_SPACE);
       			// print Left Justified "Angle b"
       		printStringJustified("Angle b", DATA_NAME_WIDTH - 2, "LEFT");
       			// PIPE_SPACE[]
       		printString(SPACE_PIPE);
       			// print center justified "deg"
       		printStringJustified("deg", UNIT_WIDTH - 1, "CENTER");
       			// PIPE_SPACE[]
       		printString(SPACE_PIPE);
       			// print angleBDegrees
       		printDoubleJustified(angleBDegrees, 2, VALUE_WIDTH - 1, "RIGHT");
       			// SPACE_PIPE
       		printString(SPACE_PIPE);
       		  	// THIN_LINE
          printEndline();
       		printString(THIN_LINE_DIVIDER);
          printEndline();
       		    // PIPE_SPACE[]
       		printString(PIPE_SPACE);
       			// print Left Justified "Angle c"
       		printStringJustified("Angle c", DATA_NAME_WIDTH - 2, "LEFT");
       			// PIPE_SPACE[]
       		printString(SPACE_PIPE);
       			// print center justified "deg"
       		printStringJustified("deg", UNIT_WIDTH - 1, "CENTER");
       			// SPACE PIPE[]
       		printString(SPACE_PIPE);
       			// print angleCDegrees
       		printDoubleJustified(angleC, 2, VALUE_WIDTH - 1, "CENTER");
       			// SPACE_PIPE
       		printString(SPACE_PIPE);
          printEndline();
       		  	// THICK_LINE
       		printString(THICK_LINE_DIVIDER);
			    printEndlines( TWO_ENDLINES );




       // End program
       		printString("End program");

       return 0;
	  }
