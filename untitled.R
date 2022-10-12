df <- read.csv(file="C:/Users/student/Downloads/Events.csv")
head(df)

write.csv(df1, file = 'C:/Users/student/Downloads/Events.csv', row.names = FALSE)

if(df$Event1>20)
{
  print(df$Event2)
}