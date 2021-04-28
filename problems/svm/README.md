## Repository Tree
```
.
├── enums.hpp                     //源码示例
├── stream_local_processing.hpp   //源码示例
├── svm_predict.hpp               //源码示例
├── table_sample.hpp              //源码示例
├── test.cpp                      //测试源码
├── 1000.csv                      //测试输入
├── run_hls.tcl                   //tcl文件
└── README.md                     //说明文件
```
## Prediction of SVM Model
  1）	框架代码说明
  >您可以直接在提供代码的基础上进行HLS优化，也可以根据您的设计对其适当的修改。  
  >但请注意：
  >**您必须保持enums.hpp，stream_local_processing.hpp，svm_predict.hpp，table_sample.hpp，test.cpp，run_hls.tcl的文件名,以及顶层函数不变。**

  2）项目要求  
  >在设计完成后，您可以使用我们提供的test.cpp文件进行基本功能测试。**在HLS优化的过程中，请务必将优化指令设置为pragma写入c++代码中。**


  3）提交程序
  >请将所有cpp文件，hpp文件和run_hls.tcl文件压缩为一个压缩包svm.zip，在页面下方您的解答处点击“上传代码”按钮进行提交，稍待片刻即可在文本框下方得知您的设计是否通过了基本功能测试。延迟、面积等性能指标则可在历史提交记录中点击版本号详细查看。
  
  4）评分规则
  >性能公式为：(RTL simulation time/clock period)/Minimum(300MHz, fmax)
  >其中RTL simulation time是Vitis HLS软件Cosimulation所用时间，clock period是tcl中设定的时钟频率，fmax是设计的最高运行频率。
  >注意：设计的频率范围应保证在100MHz和300MHz之间。如果频率低于100MHz，则未能满足最低性能指标，无法得到基本分10分；如果设计的最高运行频率高于300MHz，则在上方公式中也只会取300MHz作为最高频率。
