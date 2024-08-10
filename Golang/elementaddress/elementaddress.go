package main

import (
	"fmt"
	"unsafe"
)

func main() {
	// Define the array
	array := [5]int{10, 20, 30, 40, 50}

	//Display the array elements with their addresses
	fmt.Println("Element\tAddresses")

	for i := 0; i < len(array); i++ {
		address := unsafe.Pointer(&array[i])
		fmt.Printf("%d\t%p\n", array[i], &address)
	}
}
