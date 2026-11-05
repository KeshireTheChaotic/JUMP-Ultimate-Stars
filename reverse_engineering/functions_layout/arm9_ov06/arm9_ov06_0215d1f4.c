
void FUN_0215d1f4(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0214ffdc(DAT_02172960,(int)*(char *)(param_1 + 0x1e0),param_2,&DAT_02172960,param_4);
  if (iVar1 == 0 || param_3 == 0) {
    return;
  }
  for (iVar2 = 0; iVar2 < iVar1; iVar2 = iVar2 + 1) {
    FUN_0215d258(param_1,0xc0,iVar2);
  }
  return;
}

