# %% 
import os
from pathlib import Path

for folder in os.listdir('.'):
    if os.path.isdir(folder):
        for files in os.listdir(folder):
            if os.path.splitext(files)[1] == '.cpp':
                f = Path(f"{folder}/{files}")
                f.write_text(f.read_text(encoding='big5'), encoding='utf8')

# %%
f = Path(f"Assignment05/1113341-hw5.cpp")
f.write_text(f.read_text(encoding='big5'), encoding='utf8')

