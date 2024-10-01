import numpy as np
import pandas as pd
import seaborn as sns
imputer=SimpleImputer(missing_values=np.nan,strategy='mean')
imputer=imputer.fit(X[:,1:])
X[:,1:]=imputer.transform(X[:,1:])
