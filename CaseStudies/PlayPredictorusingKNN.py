import numpy as np
import pandas as pd
from sklearn import preprocessing
from sklearn.neighbors import KNeighborsClassifier

def MarvellousPlayPredictor(data_path):
    
    # Step1 : Load data
    data = pd.read_csv(data_path, index_col=0)
    
    print("Size of actual dataset", len(data))
    
    # Step2 : Clean, prepare and manipulate data
    feature_names = ['Weather', 'Temperature']
    
    print("Names of features", feature_names)
    
    weather = data.Weather
    temperature = data.Temperature
    play = data.Play
    
    # creating labelEncoder
    le = preprocessing.LabelEncoder()
    
    # Converting string labels into numbers
    weather_encoded = le.fit_transform(weather)
    print(weather_encoded)
    
    temp_encoded = le.fit_transform(temperature)
    print(temp_encoded)
    
    label = le.fit_transform(play)
    
    # combining weather and temperature into single list of tuples
    features = list(zip(weather_encoded, temp_encoded))
    
    # Step3 : Train Data
    model = KNeighborsClassifier(n_neighbors = 3)
    
    # Train the model using training sets
    model.fit(features, label)
    
    #Step 4 : Test data
    predicted = model.predict([[0,2]]) # 0:Overcast, 2:Mild
    print(predicted)
    
def main():
    print("----------Machine Learning Application----------")
    
    print("Play Predictor application using K Nearest Neighbor algorithm")
    
    MarvellousPlayPredictor("PlayPredictor.csv")
    
if __name__ == "__main__":
    main()