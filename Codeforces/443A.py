st=input()
st=st[1:len(st)-1]
if len(st)>0:
    st=list(st.split(', '))
    new=list()
    for ele in st:
        if ele not in new:
            new.append(ele)
    print(len(new))
else:
    print(0)