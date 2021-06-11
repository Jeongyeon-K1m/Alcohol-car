# Alcohol Car
젯봇을 이용해서 음주 유무를 감지하고 라인을 따라 주행한다.

## 팀원
1. [김정연](https://github.com/Jeongyeon-K1m "Jeongyeon-K1m")
2. [이정택](https://github.com/Lee-Jeong-Taek "Lee-Jeong-Taek")
3. [최윤영](https://github.com/yunyoung-choi "yunyoung-choi")

## 목표
1. 파이썬을 이용해서 젯봇 제어
2. openCV를 이용해서 차선 인식
3. 아두이노(Uno Board)와 알코올 센서(MQ-3)를 이용해서 음주 감지
4. 알코올 센서를 이용해서 음주 감지 후 일정 농도(혈중알코올농도 0.03%) 이상일 경우 젯봇이 주행하지 못하도록 한다. 그보다 농도가 낮은 경우 젯봇이 라인을 따라서 자율주행한다.

## HW
1. JetBot AI Kit
2. Arduino Uno Board
3. 알코올 센서(MQ-3)

## SW
1. Camera and line detecting (OpenCV)
2. 젯봇 학습 (CNN - ResNet18)
3. 알코올 센서 제어 (아두이노)

## 젯봇 기본 설정하기
1. 먼저 젯봇을 조립한다. [조립영상](https://youtu.be/xuazmgVeMJU)
2. 젯봇 조립 후 필요한 파일들을 다운로드 하여 SD카드에 넣는다. [참고주소](https://www.waveshare.com/wiki/JetBot_AI_Kit "jetbot wiki")
3. 젯봇을 모니터와 연결하여 와이파이를 연결하고, 주피터 노트북에 젯봇의 ip주소로 접속한다.

## 아두이노 설정하기
아두이노 보드에 [alcohol.ino](https://github.com/Jeongyeon-K1m/Alcohol-car/blob/main/alcohol.ino) 파일을 업로드 한다. 알코올 센서의 핀 번호는 사용자가 직접 설정 가능하다. 기본값은 A5핀이다.

## Main
1. [data_collection.ipynb](https://github.com/Jeongyeon-K1m/Alcohol-car/blob/main/data_collection.ipynb)를 통해서 도로의 사진 데이터르 모은다.
2. [train_model.ipynb](https://github.com/Jeongyeon-K1m/Alcohol-car/blob/main/train_model.ipynb)를 통해서 이전에 모은 사진 데이터들의 best_steering_model_xy.pth 파일을 생성한다.
3. [live_demo.ipynb](https://github.com/Jeongyeon-K1m/Alcohol-car/blob/main/live_demo.ipynb)에 best_steering_model_xy.pth 파일을 이용해서 라인을 따라 자율주행한다. 그런데 이때 만약 알코올 농도 일정 값 이상일 경우 젯봇으 동작하지 않는다. 그 값을 이 코드에서는 160 이상으로 설정하였다. 160은 혈중 알코올 농도 계산식에 따라서 팀원들과 함께 측정항 평균치를 낸 값이다.


## 결과동영상
https://youtu.be/nBuQIocnWN4

#### 참고자료
https://doomed-lab.tistory.com/4

https://www.waveshare.com/wiki/JetBot_AI_Kit

https://youtu.be/VY7m4lPIOj0
