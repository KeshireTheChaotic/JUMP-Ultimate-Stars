
int FUN_0205cc44(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0205eb28(*param_1,(param_2 + 0x1fU & 0xffffffe0) + 0x20,0x20);
  if (iVar1 == 0) {
    return 0;
  }
  uVar2 = FUN_0205e0dc(param_1 + 1,0);
  *(int *)(iVar1 + 8) = param_2;
  *(undefined4 *)(iVar1 + 0xc) = param_3;
  *(undefined4 *)(iVar1 + 0x10) = param_4;
  *(undefined4 *)(iVar1 + 0x14) = param_5;
  FUN_0205e240(uVar2,iVar1);
  return iVar1 + 0x20;
}

