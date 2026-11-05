
bool FUN_021561a8(int param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  
  if (param_2 == -1) {
    return false;
  }
  cVar2 = *(char *)(param_1 + 0xa2);
  *(char *)(param_1 + 0xa2) = cVar2 + '\x01';
  bVar1 = param_2 <= cVar2;
  if (bVar1) {
    *(undefined1 *)(param_1 + 0xa2) = 0;
  }
  return bVar1;
}

