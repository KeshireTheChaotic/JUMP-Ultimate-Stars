
undefined4 FUN_021cf3f0(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  
  iVar4 = 0;
  FUN_021cf470();
  uVar3 = 0;
  do {
    if (uVar3 == 0) {
      uVar2 = 1;
    }
    else {
      uVar2 = 1 << uVar3;
    }
    if (((DAT_021d66d8 & uVar2) != 0) && (uVar3 != DAT_021d7be0)) {
      *(char *)(param_2 + 9) = (char)uVar3;
      iVar1 = func_0x0217ee90(uVar3,param_2,0x10);
      if (iVar1 != 0) {
        iVar4 = iVar4 + 1;
      }
    }
    uVar3 = uVar3 + 1 & 0xff;
  } while (uVar3 < 0x20);
  if (*(char *)(param_2 + 10) == '\x01') {
    *(uint *)(param_1 + 8) = DAT_021d66d8;
  }
  else if (*(char *)(param_2 + 10) == '\0') {
    *(undefined4 *)(param_1 + 8) = 0;
  }
  if (iVar4 == 0) {
    return 0xfffffffc;
  }
  return 0;
}

