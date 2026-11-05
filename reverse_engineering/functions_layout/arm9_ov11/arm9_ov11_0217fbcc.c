
bool FUN_0217fbcc(int param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  
  uVar1 = *(uint *)(param_1 + 0xd4);
  bVar6 = (uVar1 & 2) != 0;
  if (bVar6) {
    uVar1 = uVar1 | 0x10;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 0x20) + 0x1a8);
  iVar5 = **(int **)(param_1 + 0x14);
  if (!bVar6) {
    uVar1 = uVar1 & 0xffffffef;
  }
  *(uint *)(param_1 + 0xd4) = uVar1;
  uVar1 = *(uint *)(param_1 + 0xd4);
  if ((*(uint *)(*(int *)(iVar3 + 0x10) + 0x78) & 2) != 0) {
    *(uint *)(param_1 + 0xd4) = uVar1 & 0xfffffff3;
    if ((uVar1 & 2) == 0) {
      *(uint *)(iVar5 + 0xe4) = *(uint *)(iVar5 + 0xe4) & 0xfffffffd;
      *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 4;
    }
    *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 2;
    goto LAB_0217fce8;
  }
  *(uint *)(param_1 + 0xd4) = uVar1 & 0xfffffffd;
  iVar3 = *(int *)(*(int *)(iVar3 + 0x10) + 0x5c);
  if (((*(byte *)(param_1 + 0xc5) & 1) != 0) ||
     (iVar4 = *(int *)(param_1 + 0xb4) - *(int *)(iVar3 + 0x10), iVar4 < 0)) goto LAB_0217fce8;
  iVar2 = FUN_0217e424(param_1);
  if (iVar2 == 0) {
LAB_0217fca8:
    *(uint *)(iVar5 + 0xe4) = *(uint *)(iVar5 + 0xe4) & 0xfffffffd;
  }
  else {
    if (**(int **)(param_1 + 0x24) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = *(int *)(**(int **)(param_1 + 0x24) + 8);
    }
    if (*(char *)(iVar2 + 0x18b) != '\x03') goto LAB_0217fca8;
  }
  if (iVar4 < *(short *)(iVar3 + 0x26) * 4) {
    *(uint *)(param_1 + 0xd4) = *(uint *)(param_1 + 0xd4) | 8;
    iVar3 = FUN_0217fe00(*(undefined4 *)(param_1 + 0x2c),*(undefined1 *)(param_1 + 0x104));
    if (iVar3 != 0) {
      *(uint *)(iVar5 + 0xe4) = *(uint *)(iVar5 + 0xe4) | 2;
    }
  }
LAB_0217fce8:
  if (param_2 != 0) {
    return false;
  }
  if (*(char *)(param_1 + 0x108) != '\x01') {
    return false;
  }
  if (*(byte *)(param_1 + 0xa0) == 0) {
    iVar3 = FUN_02173318(param_1);
    if (((iVar3 != 0) && (*(ushort *)(*(int *)(param_1 + 0x20) + 0x100) - 5 < 2)) &&
       (*(short *)(*(int *)(param_1 + 0x20) + 0x110) != 0)) {
      *(undefined1 *)(param_1 + 0xa0) = 1;
      *(undefined1 *)(param_1 + 0xa1) = 0;
    }
    if (*(char *)(*(int *)(param_1 + 0x20) + 0x18) == '\x10') {
      *(undefined1 *)(param_1 + 0xa0) = 3;
      *(undefined1 *)(param_1 + 0xa1) = 0;
    }
    if ((*(uint *)(param_1 + 0xd4) & 0x5000000) != 0) {
      if (*(char *)(param_1 + 0xa2) == '\0') {
        iVar3 = FUN_0217fe00(*(undefined4 *)(param_1 + 0x2c),*(char *)(param_1 + 0x104) + '\x01');
        if (iVar3 == 0) {
          *(undefined1 *)(param_1 + 0xa2) = 0x5a;
        }
        else {
          *(undefined1 *)(param_1 + 0xa0) = 4;
          *(undefined1 *)(param_1 + 0xa2) = 0;
          *(undefined1 *)(param_1 + 0xa1) = 0;
          *(byte *)(param_1 + 0xa3) = *(byte *)(param_1 + 0xa3) & 0xfe;
        }
      }
      else {
        *(char *)(param_1 + 0xa2) = *(char *)(param_1 + 0xa2) + -1;
      }
    }
  }
  else {
    (**(code **)(&DAT_021815e0 + (uint)*(byte *)(param_1 + 0xa0) * 4))(param_1);
  }
  return *(char *)(param_1 + 0xa0) != '\0';
}

