# import pandas as pd
# pd.read_html('feffwaefasf')
import requests
from bs4 import BeautifulSoup
url = 'https://q-weather.info/weather/50953/history/?date=2023-5-01'
res = requests.get(url)
print(res.status_code)
soup = BeautifulSoup(res.text,'html.parser')
table = soup.table
columns = table.tr
columns.text