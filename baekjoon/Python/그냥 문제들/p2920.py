import sys

sound_list = sys.stdin.readline().split()

if sound_list == sorted(sound_list):
    print("ascending")
elif sound_list == sorted(sound_list, reverse=True):
    print("descending")
else:
    print("mixed")