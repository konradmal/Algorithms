def reverse_polish_notation(expression: str) -> int:
    stack = []
    tokens = expression.split()
    
    for token in tokens:
        if token.isdigit():
            stack.append(int(token))
        else:
            right = stack.pop()
            left = stack.pop()
            if token == '+':
                stack.append(left + right)
            elif token == '-':
                stack.append(left - right)
            elif token == '*':
                stack.append(left * right)
            elif token == '/':
                stack.append(left // right)
    
    return stack[0]

expression = "5 3 + 18 12 - *"
print("Postfix:", expression)
print("Result:", reverse_polish_notation(expression))
expression = "5 3 7 - 2 * 3 5 1 + * - * 3 -"
print("Postfix:", expression)
print("Result:", reverse_polish_notation(expression))