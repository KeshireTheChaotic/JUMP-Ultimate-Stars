
void FUN_0215b874(undefined4 param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int local_18;
  
  iVar1 = (int)*(short *)(*(int *)(param_2 + 4) + 0xce);
  iVar2 = param_3 - iVar1 / 2;
  if (iVar2 < 1) {
    iVar2 = 0;
  }
  if (0xc0 - iVar1 <= iVar2) {
    iVar2 = 0xc0 - iVar1;
  }
  local_18 = iVar2 << 0xc;
  FUN_0215b3f4(param_2,&local_18);
  FUN_0215a924(param_1,(int)(short)iVar2,(int)(short)param_3,(iVar2 + iVar1) * 0x10000 >> 0x10);
  return;
}

