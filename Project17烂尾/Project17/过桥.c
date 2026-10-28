# include <stdio.h>
int main()
{   
	int pedal_durability[11];
	for ( int i = 1;i <= 10;i++) {
		printf("enter the %d pedal durability:", i);
		scanf_s("%d", &pedal_durability[i]);//输入板的耐久
	}
	if (pedal_durability[1] == 0) {
		printf("no one can cross the street");
		return 0;//第一块板坏了就没人可以过去
	}
int people_count = 0;//记录过桥人数
int broken_pedals = 0;//记录那个板坏了
	while (1) {
		int current_pos = 1;//从一开始
		int succes = 1;
		while (current_pos <= 10) {    //模拟人过去
			if (pedal_durability[current_pos] == 0) {//看板是否是好的
				int jump = 1;
				while (current_pos + jump <= 10 && pedal_durability[current_pos + jump] == 0) {
					jump++;//找到好板为止
				}//
				if (current_pos + jump > 10) {//如果跳到了陆地上则不行
					succes = 0;
					broken_pedals = current_pos;
					break;
				}
				else{
					pedal_durability[current_pos + jump] = jump;//板在调后的耐久
					current_pos = current_pos + jump;//目前位置
					if (pedal_durability[current_pos] < 0) {//如果跳到哪里板坏了也不行
						pedal_durability[current_pos] = 0;
					}
				}
			}else {//成功继续走
				pedal_durability[current_pos]--;
				current_pos++;
			}
		}
		if (succes == 0) {//碰到实在过不去的
			for (int i = 1;i <= 10;i++) {//找出那个坏了
				if (pedal_durability[i] == 0) {
					broken_pedals = 1;
					break;
				}
			}
			break;//最后一个不能过去的人产生结束
		}else{
			people_count++;//过去的话人数加一
		}
	}
	printf("%d pedal is broken,we can not cross the street", broken_pedals);
	printf("%d people can cross",people_count);
		return 0;
}
