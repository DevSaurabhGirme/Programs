import pandas as pd
import numpy as np
import matplotlib.pyplot as plt
from sklearn.neighbors import KNeighborsClassifier
from sklearn.model_selection import train_test_split

diabetes = pd.read_csv('diabetes.csv')

def MarvellousDiabetesPredictor():
    
    print("Columns of Dataset")
    print(diabetes.columns)
    
    print("First 5 records of dataset")
    print(diabetes.head())
    
    print("Dimensions of diabetes data : {}".format(diabetes.shape))
    
    X_train, X_test, y_train, y_test = train_test_split(diabetes.loc[:, diabetes.columns != 'Outcome'], diabetes['Outcome'], stratify = diabetes['Outcome'], random_state=66)
    
    training_accuracy = []
    test_accuracy = []
    
    #try n_neighbors from 1 to 100
    neighbors_settings = range(1,11)
    
    for n_neighbors in neighbors_settings:
        # build the model
        knn = KNeighborsClassifier(n_neighbors = n_neighbors)
        knn.fit(X_train, y_train)   
        
        # record training set accuracy
        training_accuracy.append(knn.score(X_train, y_train))
        
        # record test set accuracy
        test_accuracy.append(knn.score(X_test, y_test))
    
    knn = KNeighborsClassifier(n_neighbors = 9)
    
    knn.fit(X_train, y_train)
    
    print('Accuracy of KNN Classifier on training set: {:.2f}'.format(knn.score(X_train, y_train)))
    
    print('Accuracy of KNN Classifier on test set: {:.2f}'.format(knn.score(X_test, y_test)))
    
    plot_feature_importances_diabetes(knn,neighbors_settings,training_accuracy,test_accuracy)
    
def plot_feature_importances_diabetes(model, no_of_n, train_acc, test_acc):

    plt.plot(no_of_n, train_acc, label = "training accuracy")
    plt.plot(no_of_n, test_acc, label = "test accuracy")
    plt.xlabel("n_neighbors")
    plt.ylabel("Accuracy")
    plt.legend()
    plt.savefig('knn_compare_model')
    plt.show()
    
def main():
    print("-------------Machine Learning Application-------------")
    
    print("-------------Diabetes Predictor using K Nearest Neighbor-------------")    
    
    MarvellousDiabetesPredictor()
    
if __name__ == "__main__":
    main()