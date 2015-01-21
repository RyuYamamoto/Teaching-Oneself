/*
 * @file   parameter.h
 * @brief  Set Parameter
 * @date   2015.1.21
 * @author Ryu Yamamoto
*/
#define G 9.81	//重力加速度
#define M 0.1	//棒の重さ
#define L 1		//棒の長さ
#define F 1		//台を動かす力(今回は固定)

#define TIME 10 //時間(倒れない最大の時間数)

#define MAX_GENERATION 500	//世代数
#define MAX_POPULATION 100	//個体数
#define MAX_GENE			 108  //遺伝子長
#define MUTATION	   0.1  　//突然変異する確率

double theta;	  //角度
double dtheta;  //角速度
double dtheta2; //角加速度
double x;       //位置
double x1;      //速度
double x2;     //加速度
int gene[] = {1,-1};	//遺伝子表現

//集団データ
typedef struct{
		int control[MAX_GENE];	//染色体
		int cost;						//評価値
}indivisual;

//集団
indivisual population[MAX_POPULATION];