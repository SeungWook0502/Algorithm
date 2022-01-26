package main
import (
	"fmt"
)
func main(){
	var Case_Num, Std_Num int

	fmt.Scanln(&Case_Num)
	Std_Score := make([][]int, Case_Num)
	Std_Mean := make([]float64, Case_Num)

	for i:=0; i<Case_Num; i++{
		fmt.Scanf("%d",&Std_Num)
		Std_Score[i] = make([]int, Std_Num)
		Std_Mean[i] = 0.0
		for j:=0; j<Std_Num; j++{
			fmt.Scanf("%d",&Std_Score[i][j])
			Std_Mean[i] += float64(Std_Score[i][j])
		}
		Std_Mean[i] = Std_Mean[i]/float64(Std_Num)
		// fmt.Scanln(&Std_Num) //버퍼 문제
	}
	for i:=0; i<Case_Num; i++{
		var Cnt int = 0
		for j:=0; j<len(Std_Score[i]); j++{
			if float64(Std_Score[i][j])>Std_Mean[i]{
				Cnt++
			}
		}
		fmt.Printf("%.3f%s\n",float64(Cnt)/float64(len(Std_Score[i]))*100.0,"%")
	}
}