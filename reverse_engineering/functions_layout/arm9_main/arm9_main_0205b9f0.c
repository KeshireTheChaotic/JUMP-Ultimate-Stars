
undefined4 FUN_0205b9f0(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = FUN_0205cc44(param_2,param_3 + 0x14,FUN_0205b188,0,0);
  if (iVar1 == 0) {
    return 0;
  }
  *(undefined4 *)(iVar1 + 0xc) = 0;
  *(int *)(iVar1 + 0x10) = param_1;
  *(undefined4 *)(iVar1 + 8) = 0;
  iVar2 = FUN_0205cd80(iVar1 + 0x14,param_3);
  if (iVar2 == 0) {
    return 0;
  }
  *(int *)(iVar1 + 8) = iVar2;
  FUN_0205e240(&DAT_020ada94 + param_1 * 0x24,iVar1);
  return 1;
}

