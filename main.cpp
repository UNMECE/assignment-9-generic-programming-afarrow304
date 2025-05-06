int main()
{
  GenericArray<int> int_array;
	int_array.addElement(10);

	std::cout << "size of array is " << int_array.size() << std::endl;
	std::cout << "sum of the array is " << int_array.sum() << std::endl;
	std::cout << "maximum and minimum of array is "
	<< int_array.max() << "\t" << int_array.min() << std::endl;
	int *sliced_array = int_array.slice(5,10);
		// print sliced_array...
		//   return 0;
		//   }
