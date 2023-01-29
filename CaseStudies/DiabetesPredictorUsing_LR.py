import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.linear_model import LogisticRegression
from sklearn.model_selection import train_test_split
from warnings import simplefilter

diabetes = pd.read_csv('diabetes.csv')

def MarvellousDiabetesPredictor():
    
    print("Columns of Dataset")
    print(diabetes.columns)
    
    print("First 5 records of dataset")
    print(diabetes.head())
    
    print("Dimensions of diabetes data : {}".format(diabetes.shape))
    
    X_train, X_test, y_train, y_test = train_test_split(diabetes.loc[:, diabetes.columns != 'Outcome'], diabetes['Outcome'], stratify = diabetes['Outcome'], random_state=66)
    
    # tune the parameters like max_iter, etc    
    logreg = LogisticRegression(max_iter=200).fit(X_train, y_train)
    
    print("Training set accuracy: {:.3f}".format(logreg.score(X_train, y_train)))

    print("Test set accuracy: {:.3f}".format(logreg.score(X_test, y_test)))

    # tune the parameters like max_iter, etc 
    logreg001 = LogisticRegression(C=0.01,max_iter=200).fit(X_train, y_train)
    
    print("Training set accuracy: {:.3f}".format(logreg001.score(X_train, y_train)))
    print("Test set accuracy: {:.3f}".format(logreg001.score(X_test, y_test)))

    
def main():
    simplefilter(action = 'ignore', category = FutureWarning)
    
    print("-------------Machine Learning Application-------------")
    
    print("-------------Diabetes Predictor using Logistic Regression-------------")    
    
    MarvellousDiabetesPredictor()
    
if __name__ == "__main__":
    main()