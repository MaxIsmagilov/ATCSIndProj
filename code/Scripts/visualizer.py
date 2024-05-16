# PLOTTER (:

import matplotlib.pyplot as plt
import csv
import numpy as np

def make_plots():

    c = []
    x = []
    y = []
    
    
    with open('out.csv', newline='') as csvfile:
        reader = csv.reader(csvfile, delimiter=';')
        ct = 0
        for row in reader:
            c.append(int(ct))
            x.append(float(row[0]))
            y.append(float(row[1]))
            ct += 1
            
            
    # import matplotlib.pyplot as plt
    #plt.rcParams["figure.figsize"] = (12,15)
    
    ax = plt.subplot()
    
    ax.plot(x, y, 'bo', markersize=2)
    
    ax.set_aspect('equal', adjustable='box')
    
    plt.savefig("data.png",bbox_inches='tight')
    plt.show()
    
def main():
    make_plots()    

if __name__ == "__main__":
    main()