
undefined4 FUN_0217c01c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  iVar5 = **(int **)(param_1 + 0x14);
  iVar1 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
  uVar2 = *(uint *)(param_1 + 0xd4);
  iVar1 = *(int *)(*(int *)(iVar1 + 4) + 0x10);
  piVar6 = *(int **)(iVar1 + (uVar2 >> 0x1c) * 4 + 0x98);
  piVar4 = *(int **)(iVar1 + *(char *)(param_1 + 0x38) * 4 + 0x98);
  switch(*(char *)(param_1 + 0x3e)) {
  case '\0':
    if (*piVar6 - *piVar4 < 0) {
      if ((uVar2 & 0x80) == 0) {
        return 1;
      }
    }
    else if ((uVar2 & 0x80) != 0) {
      return 1;
    }
    if ((uVar2 & 2) == 0) {
      *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x02';
    }
    else {
      FUN_0217b4f0(*(undefined4 *)(param_1 + 0x24));
      FUN_02176d14();
      *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
    }
    break;
  case '\x01':
    if (*piVar6 - *piVar4 < 0) {
      uVar3 = 4;
      *(undefined4 *)(iVar5 + 0xe4) = 4;
    }
    else {
      uVar3 = 8;
    }
    iVar1 = FUN_0217b8a4(iVar5,uVar3,0xf,piVar4,param_4);
    if (iVar1 == 0) {
      *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
    }
    break;
  case '\x02':
    if (*piVar6 - *piVar4 < 0) {
      uVar3 = 4;
    }
    else {
      uVar3 = 8;
    }
    *(undefined4 *)(iVar5 + 0xe4) = uVar3;
    *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
    break;
  case '\x03':
    goto LAB_0217c13c;
  case '\x04':
LAB_0217c13c:
    *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
    break;
  case '\x05':
    *(uint *)(iVar5 + 0xe4) = *(uint *)(iVar5 + 0xe4) & 0xfffffff3;
    *(undefined1 *)(param_1 + 0x3e) = 0;
    return 1;
  }
  return 0;
}

