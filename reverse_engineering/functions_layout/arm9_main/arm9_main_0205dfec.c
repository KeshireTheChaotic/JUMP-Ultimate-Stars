
int FUN_0205dfec(int param_1,uint param_2)

{
  int iVar1;
  
  if ((int)param_2 < 0) {
    return 0;
  }
  if (*(uint *)(param_1 + 0x1c) <= param_2) {
    return 0;
  }
  iVar1 = param_1 + 0x20 + param_2 * 0xc;
  if (*(int *)(param_1 + 0x20 + param_2 * 0xc) == -1) {
    iVar1 = 0;
  }
  return iVar1;
}

