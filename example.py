import pandas as pd
bymber=[1,2,3,8]
number_series= pd.Series(bymber)
print(number_series)

data={
        'NAME': ['KEILA','NAELLA','queen'],
                 'AGE':[1,3,6],
                 'SALARY':[10000,30000,40000]
    }
data_frame= pd.DataFrame(data)
data_frame['country']=['Usa','Ghana','Rwanda']
data_frame.rename(columns={'AGE': 'years'},inplace=True)
data_frame=data_frame.drop(columns={'SALARY'})
#sort_df=data_frame.sort_values(by='AGE',ascending=False)
sort_df = data_frame.sort_values(by='years', ascending=False)
filter_data=data_frame[data_frame['years']>3]
double_disple=data_frame[['years','NAME']]
FILTER_DF=data_frame[data_frame['country']=='Usa']
NEW_INDEX=data_frame.set_index('NAME')
summary = data_frame.describe()

# Show the summary
print(summary)
print(filter_data)
print(sort_df)
print(data_frame.shape)
print(FILTER_DF)
file=pd.read_csv('LandData.csv')
print(file.head())
print(data_frame['NAME'])

print(NEW_INDEX)