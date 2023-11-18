#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<pthread.h>

int numbers[18] = { 1, 19, 24, 25, 30, 55, 62, 63, 69, 90, 119, 129, 149, 153, 163, 165, 176, 188 };
void func1();
void *threadfunc(void *arg);
int main(){
  pthread_t t1;
  pthread_create(&t1, NULL,(void *)threadfunc, (void *)numbers);
  func1();
  pthread_join(t1, NULL);
  return 0;
}
void func1(){
  int odd_sum = 0;
  for(int i = 0; i<18; i++){
    if(numbers[i]%2==1){
      odd_sum+=numbers[i];
    }
  }
  printf("Odd Sum: %d\n", odd_sum);
}
void *threadfunc(void *arg){
    int even_sum = 0;
    int *x = arg;
    for(int i = 0; i<18; i++){
      if (x[i] %2 == 0){
        even_sum += x[i];
      }
    }
    printf("Even Sum: %d\n", even_sum);
}
