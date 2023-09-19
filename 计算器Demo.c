#include <stdio.h>
#include <math.h>

int main(void) {

	int max(int max_input1, int max_input2);
	int add(int add_input1, int add_input2);
	int mix(int mix_input1, int mix_input2);
	int area(int area_input1, int area_input2);
	int volume(int volume_input1, int volume_input2);
	int functionkey_1, functionkey_2, cal_input1, cal_input2, cal_output;

	//开始时弹出可执行功能

	printf("【一级菜单】\n①输入“1”以判断两个整数大小\n②输入“2”以求出两整数之和\n③输入“3”以求两整数之积\n④输入“4”以求体积或面积（进入二级菜单）\n（注：两整数间请用半角逗号间隔，输入完毕后请按回车键以执行下一步，求商时除数不能为0）\n");
	scanf("%d", &functionkey_1);

	//判断所选功能

	if (functionkey_1 == 1) {

		//功能1：判断大小；数字：1

		printf("开始判断大小\n");
		scanf("%d,%d", &cal_input1, &cal_input2);
		cal_output = max(cal_input1, cal_input2);
		printf("最大值是%d", cal_output);
	} else if (functionkey_1 == 2) {

		//功能2：求和；数字：2

		printf("开始求和\n");
		scanf("%d,%d", &cal_input1, &cal_input2);
		cal_output = add(cal_input1, cal_input2);
		printf("所输入两数之和为%d", cal_output);
	}  else if (functionkey_1 == 3) {

		//功能3：求积；数字：3

		printf("开始求积\n");
		scanf("%d,%d", &cal_input1, &cal_input2);
		cal_output = mix(cal_input1, cal_input2);
		printf("所输入两数之积为%d", cal_output);
	} else if (functionkey_1 == 4) {

		//功能4：求面/体积；数字：4

		printf("开始求面积\n");
		scanf("%d,%d", &cal_input1, &cal_input2);
		cal_output = area(cal_input1, cal_input2);
		printf("所求面积为%d", cal_output);

	} else {

		//输入其他内容提示无此功能

		printf("无此功能");

	}
	return 0;
}

//函数功能区域
//功能1：判断大小

int max(int max_input1, int max_input2) {
	int max_output;
	if (max_input1 > max_input2) {
		max_output = max_input1;
	} else {
		max_output = max_input2;
	}
	return max_output;
}

//功能2：求和

int add(int add_input1, int add_input2) {
	return add_input1 + add_input2;
}

//功能3：求积
int mix(int mix_input1, int mix_input2) {
	return mix_input1 * mix_input2;
}

//功能4.1：求面积
int area(int area_input1, int area_input2) {
	return area_input1 * area_input2;
}
