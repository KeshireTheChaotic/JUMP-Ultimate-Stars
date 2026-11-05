
undefined4 FUN_021577b0(undefined4 param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = FUN_02155824();
  iVar4 = 0;
  do {
    FUN_02155654(*(undefined4 *)(param_2 + iVar4 * 4 + 4));
    iVar4 = iVar4 + 1;
  } while (iVar4 < 9);
  if (iVar1 != 0) {
    if (*(char *)(iVar1 + 6) == '\0') {
      iVar4 = 0;
      do {
        iVar2 = FUN_0215654c(*(undefined1 *)(iVar1 + 7),iVar4);
        if (iVar2 == 0) {
          FUN_02155848(*(undefined4 *)(param_2 + iVar4 * 0xc + 4),DAT_0216fa0c);
        }
        else {
          FUN_0214e318(iVar1,iVar4);
          uVar3 = FUN_0214e05c();
          FUN_02155848(*(undefined4 *)(param_2 + iVar4 * 0xc + 4),uVar3);
          uVar3 = FUN_0214e1e0(iVar1,iVar4,0);
          FUN_02155848(*(undefined4 *)(param_2 + iVar4 * 0xc + 8),uVar3);
          uVar3 = FUN_0214e1e0(iVar1,iVar4,1);
          FUN_02155848(*(undefined4 *)(param_2 + iVar4 * 0xc + 0xc),uVar3);
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 3);
    }
    else {
      FUN_02155848(*(undefined4 *)(param_2 + 4),DAT_0216fa10);
      FUN_02155848(*(undefined4 *)(param_2 + 0x10),DAT_0216fa10);
      FUN_02155848(*(undefined4 *)(param_2 + 0x1c),DAT_0216fa10);
    }
  }
  return 1;
}

