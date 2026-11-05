
void FUN_0217dea8(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  
  FUN_0217c640(3,0,param_2,param_3);
  iVar1 = FUN_02178448();
  *(undefined4 *)(iVar1 + 0x464) = param_4;
  iVar1 = FUN_02178448();
  *(undefined4 *)(iVar1 + 0x468) = param_5;
  iVar1 = FUN_02178448();
  *(undefined1 *)(iVar1 + 0x17) = 1;
  iVar1 = FUN_02178448();
  iVar2 = FUN_02178448();
  *(undefined4 *)(iVar1 + 0x20) = *(undefined4 *)(iVar2 + 0x1f8);
  iVar1 = FUN_02178448();
  *(undefined4 *)(iVar1 + 0xf4) = param_1;
  FUN_02178434(4);
  iVar1 = FUN_02178448();
  if (*(int *)(iVar1 + 0xe4) == 0) {
    iVar1 = FUN_02178448();
    iVar2 = FUN_02178448();
    iVar3 = FUN_02178448();
    iVar4 = FUN_02178448();
    uVar5 = FUN_0217fdc8(*(undefined4 *)(iVar2 + 0x2ec),*(undefined4 *)(iVar3 + 0x2ec),
                         *(undefined4 *)(iVar4 + 0x2f0),0,0x14,1,0,0x2178cb9,0);
    *(undefined4 *)(iVar1 + 0xe4) = uVar5;
  }
  iVar1 = FUN_02178448();
  if ((*(int *)(iVar1 + 0xe4) != 0) || (iVar1 = FUN_021790e4(5), iVar1 == 0)) {
    FUN_02177ea4(5,&DAT_021a4b88,0);
    iVar1 = FUN_0217914c();
    if (iVar1 == 0) {
      iVar1 = FUN_02178448();
      if (*(int *)(iVar1 + 0x10) == 0) {
        iVar1 = FUN_02178448();
        iVar1 = FUN_0217e1b0(*(undefined4 *)(iVar1 + 0x1f8));
        if (iVar1 != 0) {
          return;
        }
      }
      iVar1 = FUN_02178448();
      FUN_0217ae0c(*(undefined4 *)(iVar1 + 0xf4),0);
      FUN_0217af70();
    }
  }
  return;
}

