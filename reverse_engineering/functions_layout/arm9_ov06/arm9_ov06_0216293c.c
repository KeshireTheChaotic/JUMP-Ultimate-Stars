
int FUN_0216293c(int param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  
  if ((param_2 < 0) || ((int)(uint)*(ushort *)(*(int *)(param_1 + 0x10) + 0x2e) <= param_2)) {
    return -1;
  }
  iVar1 = (short)param_2 * 0x18 + *(int *)(param_1 + 0x18);
  FUN_02162980(param_3,iVar1);
  return (int)*(char *)(iVar1 + 0x14);
}

