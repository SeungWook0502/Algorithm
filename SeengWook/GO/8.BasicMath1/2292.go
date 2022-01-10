package	main
import "fmt"
func main(){
	var N int
	fmt.Scan(&N)
	var i, T int = 0, 1
	var C bool = true
	for C{
		fmt.Println(T)
		T += i*6
		i++
		if (N-T)<=0{
			C = false
		}
	}
	fmt.Print(i)
}