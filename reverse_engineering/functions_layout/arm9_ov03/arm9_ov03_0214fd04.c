
void FUN_0214fd04(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 0x10);
  if (*(char *)(iVar4 + 2) != '\0') {
    if (*(int *)(iVar4 + 0x70) == 0) {
      uVar1 = func_0x021ba49c(0,3,1);
      *(undefined4 *)(iVar4 + 0x70) = uVar1;
    }
    func_0x021bac28(*(undefined4 *)(iVar4 + 0x70),0x62,0,0,0,0,0,0,param_4);
    while (iVar2 = func_0x021bad2c(*(undefined4 *)(iVar4 + 0x70)), iVar2 == 0) {
      (*DAT_020a0e18)();
    }
    iVar2 = 0;
    *(undefined1 *)(iVar4 + 2) = 0;
    do {
      iVar3 = *(int *)(iVar4 + iVar2 * 4 + 0x20);
      if (iVar3 != 0) {
        func_0x021b65e0(*(undefined4 *)(iVar3 + 4));
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 2);
    func_0x021b6214(*(undefined4 *)(*(int *)(iVar4 + 0x24) + 4),1);
    DAT_020aff26 = 0;
    FUN_0207342c(0x78,0xb);
  }
  return;
}

