from sklearn import metrics
from sklearn import datasets
from sklearn.neighbors import KNeighborsClassifier
from sklearn.model_selection import train_test_split

def WinePredictor():
    
    #Load dataset 
    wine = datasets.load_wine()
    
    # print names of the features
    print(wine.feature_names)
    
    #print label species(class_0, class_1, class_2)
    print(wine.target_names)
    
    # print the wine data (top 5 records)
    print(wine.data[0:5])
    
    #print wine labels (0: Class_1, 1: Class_2, Class_3)
    print(wine.target)
    
    #Split dataset into Training set and Testing set
    X_train, X_test, y_train, y_test = train_test_split(wine.data, wine.target, test_size = 0.3) # 70% training and 30% testing data
    
    # Create KNN Classifier
    knn = KNeighborsClassifier(n_neighbors = 6)
    
    #Train the model using training dataset
    knn.fit(X_train,  y_train)
    
    #Predict the response for test dataset
    y_pred = knn.predict(X_test)
    
    # Model accuracy, how often is the classifier correct?
    print("Accuracy :", metrics.accuracy_score(y_test, y_pred))
    
def main():
    print("----------Machine Learning application----------")
    
    print("Wine Predictor application using K Nearest Neighbor Algorithm")
    
    WinePredictor()
    
if __name__ == "__main__":
    main()