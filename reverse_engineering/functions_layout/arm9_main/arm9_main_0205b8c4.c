
void FUN_0205b8c4(int *param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *param_1;
  if (iVar1 == 0) {
    return;
  }
  if (*(char *)(iVar1 + 0x2c) == '\x02') {
    return;
  }
  FUN_0205e090(iVar1 + 0x1c,param_2 << 8);
  return;
}

