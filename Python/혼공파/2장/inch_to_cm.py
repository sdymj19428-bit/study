#숫자를 입력
raw_input = input("inch 단위의 숫자를 입력해주세여 :")

#입력받은 데이터를 숫자 자료형으로 변경하고, cm단위로 변경
inch = int(raw_input)
cm = 2.54 * inch

#출력
print(inch, "inch는 cm 단위로", cm,"cm입니다.")