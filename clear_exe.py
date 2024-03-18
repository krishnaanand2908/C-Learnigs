import os

dir = os.listdir(os.getcwd())

for file in dir:
    if file.endswith(".exe"):
        os.remove(os.path.join(os.getcwd(), file))