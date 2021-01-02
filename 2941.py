import sys
input = sys.stdin.readline().rstrip()

if __name__ == "__main__":
  croatia = ['c=', 'c-', 'dz=', 'd-', 'lj', 'nj', 's=', 'z=']

  cmd = input
  for i in croatia:
    cmd = cmd.replace(i, '0')
  
  print(len(cmd))