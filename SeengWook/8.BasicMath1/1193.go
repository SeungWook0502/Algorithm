package main
import "fmt"
func main(){
	var N int
	fmt.Scan(&N)
	var i, j int = 0, 1
	var T bool = true
	for T{
		if (N-(i+j))<=0{
			T=false
		}
		i = i+j
		j++
	}
	if (j-1)%2==0{
		fmt.Print(N-(i-(j-1)),"/",(j)-(N-(i-(j-1))))
	}else if (j-1)%2!=0{
		fmt.Print((j)-(N-(i-(j-1))),"/",N-(i-(j-1)))
	}
}