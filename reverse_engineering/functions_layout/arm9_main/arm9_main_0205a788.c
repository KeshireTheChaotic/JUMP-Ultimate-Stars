
int FUN_0205a788(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_02057f40(2,9,10);
  if (iVar1 != 0) {
    return iVar1;
  }
  if (param_1 == 0) {
    return 6;
  }
  if (*(short *)(param_1 + 0x80e) == 0) {
    return 3;
  }
  FUN_02058b94(*(undefined2 *)(param_1 + 0x816),0,0);
  *(undefined2 *)(param_1 + 0x80e) = 0;
  *(undefined2 *)(param_1 + 0x81c) = 0;
  return 0;
}

