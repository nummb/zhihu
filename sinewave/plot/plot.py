# 读取文件并绘制图像
import matplotlib.pyplot as plt
import math
def main():
    file_position = 'E:\\Desktop\\Ccode\\sinewave\\source\\'       # 文件位置
    file_name = 'algorithm.dat'                       # 文件名
    data_name = file_position+file_name         # 为了更改起来更方便

    data0 = open(data_name,'r')
    # data = data0.read()
    # a = data.split('\n',1)[0]
    # print(a)
    data1 = []
    data2 = []
    for line in data0:
        line1 = line.split(',')[0]
        # line2 = line.split(',')[5]
        data1.append(float(line1))
        # data2.append(float(line2))
    data0.close()
    # time = [x/256 for x in range(0,256)]        # 这里的时间要和仿真步长对应
    time = [x/1024 for x in range(0,256)]        # 这里的时间要和仿真步长对应
    data1 = data1[0:256]
    # data2 = data2[0:1000000]                       # 实际数据太长，截了其中的一小段
    # print(data2)

    plt.plot([x/1024 for x in range(0,1024)],[math.sin(x*2*math.pi/1024) for x in range(0,1024)],linewidth=3)
    plt.plot(time,data1)                             # 绘图函数
    # plt.plot(time,data2) 
    plt.xlabel('Time(s)')
    plt.ylabel('Magnitude')
    plt.show()
    # print(time[255])

main()
