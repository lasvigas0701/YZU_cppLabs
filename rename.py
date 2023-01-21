# %%
import os

# %%
for i in range(3, 33):
    print(f"hw{i}, Assignment{i:02}")
    os.rename(f"hw{i}", f"Assignment{i:02}")
# %%