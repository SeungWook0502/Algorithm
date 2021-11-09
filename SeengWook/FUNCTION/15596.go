package main

func sum(a []int) int {
	var r int = 0
	for _,n:= range a{
		r+=n
	}
	return r
}