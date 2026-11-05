
void FUN_02180a98(int param_1)

{
  bool bVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  short extraout_r1;
  
  switch(*(undefined1 *)(param_1 + 0xd3)) {
  case 0:
    break;
  case 1:
    uVar4 = FUN_02180a84(*(undefined4 *)(param_1 + 0x24));
    uVar2 = FUN_02180a74(*(undefined4 *)(param_1 + 0xcc));
    FUN_02177010(uVar4,uVar2);
    *(char *)(param_1 + 0xd3) = *(char *)(param_1 + 0xd3) + '\x01';
    return;
  case 2:
    iVar3 = FUN_02180a84(*(undefined4 *)(param_1 + 0x24));
    if (*(char *)(iVar3 + 0x18b) == '\0') {
      *(char *)(param_1 + 0xd3) = *(char *)(param_1 + 0xd3) + '\x01';
    }
    return;
  case 3:
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined1 *)(param_1 + 0xd2) = 0;
    *(undefined1 *)(param_1 + 0xd3) = 0;
    uVar4 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
    FUN_0200d338(uVar4,0x5a);
    *(short *)(param_1 + 0xd0) = extraout_r1 + 0x10e;
    FUN_0217ab84(param_1,1);
    return;
  default:
    return;
  }
  iVar3 = FUN_02180a84(*(undefined4 *)(param_1 + 0x24));
  if (iVar3 == 0) {
    bVar1 = true;
  }
  else if ((*(uint *)(iVar3 + 0x180) & 4) == 0) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  if (bVar1) {
    *(char *)(param_1 + 0xd3) = *(char *)(param_1 + 0xd3) + '\x01';
    return;
  }
  iVar3 = FUN_02180a84(*(undefined4 *)(param_1 + 0x24));
  if (*(char *)(iVar3 + 0x18b) == '\0') {
    *(undefined4 *)(param_1 + 0xcc) = 0;
    *(undefined1 *)(param_1 + 0xd2) = 0;
    *(undefined1 *)(param_1 + 0xd3) = 0;
    *(undefined1 *)(param_1 + 0x105) = 1;
    return;
  }
  return;
}

