
void FUN_02009dc0(int param_1,int param_2)

{
  int iVar1;
  
  if ((0 < param_2) && (param_2 < (int)(uint)*(byte *)(param_1 + 4))) {
    iVar1 = FUN_02009d3c();
    *(char *)(param_1 + 4) = (char)param_2;
    if (-1 < iVar1) {
      FUN_02009d88(param_1,param_2);
    }
  }
  return;
}

