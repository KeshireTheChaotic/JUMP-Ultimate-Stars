
undefined4 FUN_021cf05c(int param_1,int *param_2)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (*(char *)(param_1 + 4) == -1) {
    if (*(char *)(param_1 + 6) == '\x04') {
      uVar1 = FUN_021cee44();
      return uVar1;
    }
    if (*(char *)(param_1 + 6) == '\x03') {
      return 0;
    }
  }
  puVar2 = (undefined4 *)FUN_021cf138(*(undefined1 *)(param_1 + 8));
  if (puVar2 == (undefined4 *)0x0) {
    iVar3 = FUN_021cf4b4(*(undefined1 *)(param_1 + 8));
    if (iVar3 == 0) {
      FUN_021cf398(&DAT_021d66f8,*(undefined1 *)(param_1 + 8));
      FUN_021cf488(&DAT_021d66f8,3);
      return 0;
    }
    iVar4 = FUN_021cf234(iVar3,param_1);
    if (iVar4 + 2U < 2) {
      FUN_021cf7cc(iVar3);
      return 0;
    }
    iVar5 = FUN_021cf2fc(param_1,iVar3);
    *param_2 = iVar5;
    param_2[1] = iVar3;
    *(int *)(iVar3 + 0xc) = iVar4;
    if (*param_2 == 0) {
      return 0;
    }
    return 1;
  }
  iVar3 = FUN_021cf234(puVar2,param_1);
  if (iVar3 == -2) {
    *param_2 = 0xc;
    *puVar2 = 0;
    param_2[1] = (int)puVar2;
    return 1;
  }
  if (iVar3 == -1) {
    return 0;
  }
  iVar4 = FUN_021cf2fc(param_1,puVar2);
  *param_2 = iVar4;
  param_2[1] = (int)puVar2;
  puVar2[3] = iVar3;
  if (*param_2 == 0) {
    return 0;
  }
  return 1;
}

