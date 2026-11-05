
void FUN_0217cdbc(int param_1)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  char extraout_r1;
  int iVar4;
  undefined4 uVar5;
  
  iVar4 = *(int *)(param_1 + 0x18);
  iVar2 = FUN_02175628(*(undefined4 *)(param_1 + 0x1c));
  iVar2 = *(int *)(*(int *)(iVar2 + 4) + 0x10);
  if (*(char *)(param_1 + 0x38) < '\0') {
    *(undefined1 *)(param_1 + 0x38) = *(undefined1 *)(param_1 + 0x107);
  }
  uVar5 = *(undefined4 *)(iVar2 + *(char *)(param_1 + 0x38) * 4 + 0x98);
  switch(*(undefined1 *)(param_1 + 0x3e)) {
  case 0:
    uVar3 = FUN_0217b4f0(*(undefined4 *)(param_1 + 0x24));
    FUN_02177010(uVar3,uVar5);
    *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
    return;
  case 1:
    iVar2 = FUN_0217b4f0(*(undefined4 *)(param_1 + 0x24));
    if (*(char *)(iVar2 + 0x18b) == '\0') {
      *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
    }
    break;
  case 2:
    bVar1 = *(byte *)(*(int *)(param_1 + 0x24) + 0x3b);
    *(ushort *)(iVar4 + 0xc) = (ushort)*(byte *)(*(int *)(param_1 + 0x24) + 0x3a);
    *(ushort *)(iVar4 + 0xe) = (ushort)bVar1;
    *(undefined1 *)(iVar4 + 0x10) = 1;
    *(undefined1 *)(iVar4 + 0x11) = 4;
    *(char *)(param_1 + 0x3e) = *(char *)(param_1 + 0x3e) + '\x01';
    uVar5 = FUN_02031070(*(undefined4 *)(DAT_020a0da8 + 4));
    FUN_0200d338(uVar5,0x78);
    *(char *)(param_1 + 0x52) = extraout_r1 + 'x';
    return;
  case 3:
    iVar2 = FUN_0217bfe0(param_1);
    if (iVar2 != 0) {
      *(undefined1 *)(param_1 + 0x3e) = 0;
      *(undefined1 *)(param_1 + 0x39) = 4;
    }
    return;
  default:
    return;
  }
  return;
}

