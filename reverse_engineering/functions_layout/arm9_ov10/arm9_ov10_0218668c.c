
undefined4
FUN_0218668c(int *param_1,int param_2,int param_3,int *param_4,int param_5,int param_6,int param_7)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *param_1;
  piVar1 = (int *)FUN_0217583c(0x24);
  if (piVar1 == (int *)0x0) {
    FUN_0218912c(param_1,s_Out_of_memory__021a5c80);
    return 1;
  }
  *piVar1 = param_2;
  piVar1[1] = param_3;
  piVar1[2] = param_5;
  piVar1[5] = 0;
  if (param_2 == 0) {
    piVar1[6] = 1;
  }
  else {
    piVar2 = (int *)(iVar4 + 0x20c);
    iVar3 = *piVar2;
    *piVar2 = iVar3 + 1;
    piVar1[6] = iVar3;
    if (*piVar2 < 2) {
      *piVar2 = 2;
    }
  }
  piVar1[7] = 0;
  piVar1[3] = param_6;
  piVar1[4] = param_7;
  piVar2 = (int *)(iVar4 + 0x424);
  piVar1[8] = *piVar2;
  *piVar2 = (int)piVar1;
  *param_4 = (int)piVar1;
  return 0;
}

