## Repository Tree
```
.
├── sobel.cpp        //源码框架
├── sobel.h          //头文件
├── sobel_test.cpp   //测试源码
├── data.txt         //测试输入
├── dst.txt          //标准输出
├── tcl_script.tcl   //tcl文件
└── README.md        //说明文件
```
## 索贝尔滤波器（Sobel Filter）

  1）	框架代码说明
  >您可以直接在框架代码中“//Insert your code here”处实现算法基本功能，也可以根据您的设计对其适当的修改。  
  >但请注意：**您必须保持sobel.cpp,sobel.h的文件名，以及顶层函数“void sobel(PIXEL* src, PIXEL* dst, int rows, int cols)”不变。**

  2）项目要求  
  >在本项目中，输入的图像已经被转化为了一个大小为720\*1280的1D array **src**。**Sobel Filter统一不做padding**，这样经过滤波后得到的输出**dst**是一个大小为718\*1278的1D array。在滤波过程中，框架代码sobel3x3_kernel函数中使用了3*3的kernel：  
  >GX=[−1 0 1 −2 0 2 −1 0 1]∗ I  
  >Gy=[−1 −2 −1 0 0 0 1 2 1]∗ I    
  >您可以在函数Gradient_X以及Gradient_Y实现具体功能。  
  >在设计完成后，您可以使用我们提供的sobel_test.cpp文件进行基本功能测试。**在HLS优化的过程中，请务必将优化指令设置为pragma写入c++代码中。**
	
  3）提交程序
  >您仅需提交cpp文件和h文件。请将所有cpp和h文件压缩为一个压缩包soebl.zip，在页面下方您的解答处点击“上传代码”按钮进行提交，稍待片刻即可在文本框下方得知您的设计是否通过了基本功能测试。延迟、面积等性能指标则可在历史提交记录中点击版本号详细查看。
  
  4）评分规则
  >性能公式为：(RTL simulation time/clock period)/Minimum(300MHz, fmax)
  >其中RTL simulation time是Vitis HLS软件Cosimulation所用时间，clock period是tcl中设定的时钟频率，fmax是设计的最高运行频率。
  >注意：设计的频率范围应保证在100MHz和300MHz之间。如果频率低于100MHz，则未能满足最低性能指标，无法得到基本分10分；如果设计的最高运行频率高于300MHz，则在上方公式中也只会取300MHz作为最高频率。
