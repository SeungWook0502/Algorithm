package main
import "fmt"
func main(){
	var N int
	var max int = 0
	var R float64 = 0.0

	fmt.Scanln(&N)
	var Score []int = make([]int,N)

	for i:=0; i<N; i++{
		fmt.Scanf("%d",&Score[i])
		if max < Score[i]{
			max = Score[i]
		}
	}

	for i:=0; i<N; i++{
		R += float64(Score[i])/float64(max)*100.0
	}
	fmt.Print(R/float64(N))
}