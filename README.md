# GPA_Calculator#


## 1.更改Database路径 ##


    db.setDatabaseName("C:\\Qt_Program\\Qt_Project\\GPA_Calulator\\database\\my.db")

需要更改的函数：  

MainDialog::MainDialog  
MainDialog::onDeleteBtn  
MainDialog::onRefreshBtn  
MainDialog::calculateGPA  
AddDialog::onOkBtn  

## 2.删除课程 ##
选择想要删除的课程那一行的“Name”那一列，点击“Delete Course”。


## 3.数据表的创建 ##
	CREATE TABAL courselist（name VARCHAR(30) PRIMARY　KEY,semester VARCHAR(10),score VARCHAR(3),credit VARCHAR(4)）;