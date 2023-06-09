time=input("")
ap=time[-2:]
tim1=int(time[:2])

if ap == "AM":
    if tim1 == 12:
        tim1=0;
elif ap == "PM":
    if tim1 == 12:
        tim1=12
    else:
        tim1=tim1+12
tim1=str(tim1)
tim1='0'+tim1
print(tim1[-2:] + time[2:8])
