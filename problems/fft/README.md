## Repository Tree
```
.
├── fft.cpp
├── fft.h
├── fft_test.cpp
├── out.gold.dat
├── tcl_script.tcl
└── README.md
```
- **快速傅立叶变换(FFT)**  
  1）	框架代码说明
    您可以直接在框架代码中“//Insert your code here”处实现算法基本功能，也可以根据您的设计对其适当的修改。  
    但请注意：
    **您必须保持顶层函数“void fft(DTYPE X_R[SIZE], DTYPE X_I[SIZE], DTYPE OUT_R[SIZE], DTYPE OUT_I[SIZE]) ”不变。**

  2）项目要求  
  >在本项目中，FFT实现分为多个阶段。FFT的第一阶段使用位反转方案对输入数据进行重新排序，即框架代码中的 bit_reverse 函数。8点FFT的位反转数据的示例如下：

  ![](./images/question_fft1.png)

  >第二阶段则需要logN（N为输入数据的个数）个stage进行蝶形计算，在框架代码中分为了“fft_stage_first”，“fft_stages”和“fft_stage_last”三个函数。  

  >在设计完成后，您可以使用我们提供的fft_test.cpp文件进行基本功能测试。**在HLS优化的过程中，请务必将优化指令设置为pragma写入c++代码中。**


  3）提交程序
  >您仅需提交fft.cpp，fft.h和tcl_script.tcl文件。请将fft.cpp，fft.h和tcl_script.tcl文件压缩为一个压缩包fft.zip，在题目的提交窗口点击文本框上方“上传文件”按钮进行提交，稍待片刻即可在文本框下方得知您的设计是否通过了基本功能测试。延迟、面积等性能指标则可在历史提交记录中点击版本号详细查看。
  
  4）评分规则
  >性能公式为：(RTL simulation time/clock period)/Minimum(300MHz, fmax)
  >其中RTL simulation time是Vitis HLS软件Cosimulation所用时间，clock period是tcl中设定的时钟频率，fmax是设计的最高运行频率。
  >注意：设计的频率范围应保证在100MHz和300MHz之间。如果频率低于100MHz，则未能满足最低性能指标，无法得到基本分10分；如果设计的最高运行频率高于300MHz，则在上方公式中也只会取300MHz作为最高频率。
