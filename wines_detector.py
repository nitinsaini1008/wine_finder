import pandas 
import numpy
from sklearn.naive_bayes import GaussianNB
from sklearn.datasets import load_wine
from sklearn.model_selection import train_test_split
wine=load_wine()
print(dir(wine))
print(wine.feature_names)
print(wine.target)
print(wine.target_names)
f=pandas.DataFrame(wine.data,columns=wine.feature_names)
f['target']=wine.target
f['t_name']=f['target'].apply(lambda x:wine.target_names[x])
d=pandas.get_dummies(f['t_name'])
f=pandas.concat([f,d],axis='columns')
f=f.drop(['t_name','class_2'],axis='columns')
x=f.drop(['target'],axis='columns')
y=f['target']
x_train,x_test,y_train,y_test=train_test_split(x,y,test_size=0.2)
print(f.head(10))
g=GaussianNB()
g.fit(x_train,y_train)
print(g.score(x_test,y_test))
y_pre=g.predict(x_test)
print(y_pre)
print(y_test)
