import math
NUMS    = [0,1,2,3,4,5,6,7,8,9]
GMAT    = []
GVEC    = []
d       = 0
def MENU():                                            
    print("+"+"-"*48+"+")
    print("| 1) Ler matriz A e vetor b:                     |") 
    print("| 2) Imprimir na tela o sistema Ax = b           |") 
    print("| 3) Resolver o sistema Ax = b                   |") 
    print("| 4) Para sair                                   |")
    print("+"+"-"*48+"+")
    try:
        men_res = int(input("> "))
        return men_res
    except:
        raise Exception("Ops, opção escolhida ainda não implementada. Experimente digitar apenas o numero.")
def matriz():
        global GMAT
        global GVEC
        global d
        dim   = int(input("Seja ma matriz A NxN digite o valor de N: "))          
        d = dim
        GMAT = load_matrix(dim)
        GVEC = load_vector(dim)                                
def showEq(ran, B):                        
    global GMAT
    if B == []: raise Exception (f"Ops voce não passou nenhuma matriz!")
    j = 0                                        
    while j < ran:                               
        F = ""                                   
        Fi = 1                                   
        for i in GMAT[j]:                 
            if Fi < ran:                         
                F   += f"{i}.(x{Fi}) + "          
            elif Fi == ran:                      
                F   += f"{i}.(x{Fi}) = {B[j]}"    
            Fi  += 1                             
        print(F)                                                                                       
        j += 1                                       
def load_vector(n):                                                     
    vec = []
    for i in range(0, n):
        vec.append(float(input(f"Digite o valor de b{i+1}: ")))  
    return vec
def load_matrix(n):
    MATRIZ = []                                                            
    for i in range(0,n):                                           
        sR = []                                                        
        for j in range (0, n):                                     
            sR.append(float(input(f"Digite o valor de a{i+1}{j+1}: ")))  
        MATRIZ.append(sR)                                              
    return MATRIZ                                                      
def solveByGaussian(q=None):
    global GMAT
    global GVEC
    global d
    if q == None: q = 0
    A   = GMAT
    b   = GVEC
    for i in range(len(A)):
        pivot = math.fabs(A[i][i])
        l_pivot = i
        for j in range(i+1, len(A)):
            if math.fabs(A[j][i]) > pivot:
                pivot   = math.fabs(A[j][i])
                l_pivot = j
        if l_pivot != i:
            troca = A[i]
            A[i] = A[l_pivot]
            A[l_pivot] = troca
            troca       = b[i]
            b[i]        = b[l_pivot]
            b[l_pivot]  = troca
        for m in range(i+1, len(A)):
            multiplicador   = A[m][i]/A[i][i]
            for n in range(i, len(A)):
                A[m][n] -= multiplicador*A[i][n]
            b[m] -= multiplicador*b[i]
    return A, b
def solveX(A, b):
    sol = []
    for i in range(len(A)):
        sol.append(0)
    line    = len(A) - 1
    while line >= 0:
        x = b[line]
        col = len(A)-1
        while col > line:
            x -= A[line][col]*sol[col]
            col -= 1
        x /= A[line][line]
        line    -= 1
        sol[col]    = x
    for j in range(len(sol)):
        print(f"X{j+1} = {sol[j]}")
def main():
    res = MENU()
    if res == 1:
        matriz()
    elif res == 2:
        showEq(d, GVEC)
    elif res == 3:            
        mat, vec    = solveByGaussian()
        solveX(mat, vec)
    elif res == 4:
        exit(0)
    if res not in NUMS:
        raise Exception (f"\nOps, a opção {res} não foi implementada!!")
    main()
if __name__ == "__main__":        
    main()
