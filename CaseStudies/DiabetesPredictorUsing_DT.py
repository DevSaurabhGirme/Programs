import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.tree import DecisionTreeClassifier
from sklearn.model_selection import train_test_split

diabetes = pd.read_csv('diabetes.csv')

def MarvellousDiabetesPredictor():
    
    print("Columns of Dataset")
    print(diabetes.columns)
    
    print("First 5 records of dataset")
    print(diabetes.head())
    
    print("Dimensions of diabetes data : {}".format(diabetes.shape))
    
    X_train, X_test, y_train, y_test = train_test_split(diabetes.loc[:, diabetes.columns != 'Outcome'], diabetes['Outcome'], stratify = diabetes['Outcome'], random_state=66)
    
    tree = DecisionTreeClassifier(random_state = 0)
    tree.fit(X_train, y_train)
    
    print("Accuracy of training set: {:.3f}".format(tree.score(X_train, y_train)))
    
    print("Accuracy of test set: {:.3f}".format(tree.score(X_test, y_test)))

    tree =DecisionTreeClassifier(max_depth = 3, random_state = 0)
    tree.fit(X_train, y_train)
    
    print("Accuracy of training set: {:.3f}".format(tree.score(X_train, y_train)))
    
    print("Accuracy of test set: {:.3f}".format(tree.score(X_test, y_test)))

    plot_feature_importances_diabetes(tree)
    
def plot_feature_importances_diabetes(model):
    
    print("Feature importances:\n{}".format(model.feature_importances_))
    
    plt.figure(figsize = (8,6))
    n_features = 8
    plt.barh(range(n_features), model.feature_importances_, align = 'center')
    diabetes_features =[x for i, x in enumerate(diabetes.columns) if i != 8]
    plt.yticks(np.arange(n_features), diabetes_features)
    plt.xlabel("Feature importance")
    plt.ylabel("Feature")
    plt.ylim(-1, n_features)
    
    plt.show()
    
def main():
    print("-------------Machine Learning Application-------------")
    
    print("-------------Diabetes Predictor using Decision Tree-------------")    
    
    MarvellousDiabetesPredictor()
    
if __name__ == "__main__":
    main()