for run in range(int(input())):
    s= input()
    wicket = 0
    run = 0
    for ele in s:
        if ele in 'Ww':
            wicket+=1
        else:
            run+=(int(ele))
    over = len(s)//6
    ball = len(s)%6
    if run <= 1:
        if wicket<=1:
            if(over == 0):
                print(f'{over}.{ball} Over {run} Run {wicket} Wicket.')
            elif over == 1:
                if ball > 0:
                    print(f'{over}.{ball} Overs {run} Run {wicket} Wicket.')
                else:
                    print(f'{over}.{ball} Over {run} Run {wicket} Wicket.')
            else:
                print(f'{over}.{ball} Overs {run} Run {wicket} Wicket.')
        else:
            if(over == 0):
                print(f'{over}.{ball} Over {run} Run {wicket} Wickets.')
            elif over == 1:
                if ball > 0:
                    print(f'{over}.{ball} Overs {run} Run {wicket} Wickets.')
                else:
                    print(f'{over}.{ball} Over {run} Run {wicket} Wickets.')
            else:
                print(f'{over}.{ball} Overs {run} Run {wicket} Wickets.')
    else:
        if wicket<=1:
            if(over == 0):
                print(f'{over}.{ball} Over {run} Runs {wicket} Wicket.')
            elif over == 1:
                if ball > 0:
                    print(f'{over}.{ball} Overs {run} Runs {wicket} Wicket.')
                else:
                    print(f'{over}.{ball} Over {run} Runs {wicket} Wicket.')
            else:
                print(f'{over}.{ball} Overs {run} Runs {wicket} Wicket.')
        else:
            if(over == 0):
                print(f'{over}.{ball} Over {run} Runs {wicket} Wickets.')
            elif over == 1:
                if ball > 0:
                    print(f'{over}.{ball} Overs {run} Runs {wicket} Wickets.')
                else:
                    print(f'{over}.{ball} Over {run} Runs {wicket} Wickets.')
            else:
                print(f'{over}.{ball} Overs {run} Runs {wicket} Wickets.')
    