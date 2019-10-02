import numpy as np

n = 4
#Elements of determinant
P1 = (n*(n+1))/2
P2 =  n*(n+1)*2**(n-2)
P3 =  n*2**(n-1)
P4 =  4**n

P =  np.array([[P1,P2],[P3,P4]])


#Calculation of determinant P
det_P = P1*P4-P2*P3
print(det_P)

#Calculation of Answer
A = (2**(n+1)-1.0 )/(n+1)
print(A)
