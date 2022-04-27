class SFIDR2:
    def main(self):
        print("Select wich equation you want to solve")
        print(" 1. Equation with X isolvated")
        print(" 2. Equation with Y isolvated")
        selection = input("> ")
        match(selection):
            case "1":
                context = "x"
            case "2":
                context = "y"
            case unknown:
                assert False, "[ERROR]: Command ({unknown}) not implemented"
        print("Loading the lib...")
        from sympy      import simplify
        from sympy      import diff
        from sympy      import symbols
        from sympy.abc  import x
        from sympy.abc  import y
        from sympy.abc  import f
        from sympy.abc  import g
        print("Please select")
        f = simplify(input("The equation side with X and Y: "))
        g = simplify(input(f"The equation side with {context} Isolated: "))
        match(context):
            case "x":
                solution = ((g.diff(x)-f.diff(x))/(f.diff(y)))
            case "y":
                solution = ((f.diff(x))/(g.diff(y) - f.diff(y)))

        print(f"The solution of ({g}+{f} = 0) is:")
        print(f"dy/dx = {simplify(solution)}")
        exit(0)



if __name__ == "__main__":
    SFIDR2.main("")
