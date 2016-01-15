# ITCT
Codes for Information Technology and Coding Theory 
Functions - 
	1. logg2f() -
		This function calculate log to the base 2 of the input value and returns it. Return type and input type is float.

		ex. myVar = log2f(1000);

	2. info()
		Calculates Information for probability p.

		ex. inf = info(probability); 

	3. entrophy() - 
		Calculates entrophy for given probability. Probability may be single value or one dimensional array. Array type & return type is float.

		ex. 
			entr = entrophy(probability,0);
		For one dimensional array -
			entr_a = entrophy(arr_ptr,length_of_array);

	4. entrophy_ij() -
		Calculates entrophy of 2 dimesional array.Array type & return type is float.

		ex. 
			entr = entrophy_ij(arr_ptr,total_rows,total_columns);  