import base64

password = str(input("Enter password to encrypt: "))
encrypted_password = base64.b64encode(password.encode())
with open("password.txt", "w") as f:
    f.write(encrypted_password.decode())
    f.close()

with open("password.txt", "r") as f:
    password_from_file = f.read()
    print("Encrypted password is: " + password_from_file)
    f.close()
password_from_file = base64.b64decode(password_from_file).decode()
print("Decrypted password is: " + password_from_file)