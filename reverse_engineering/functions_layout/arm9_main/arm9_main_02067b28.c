
void FUN_02067b28(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  ushort uVar5;
  
  iVar4 = -1;
  iVar1 = FUN_020673ec(0x10);
  iVar2 = FUN_020673ec(1);
  *(undefined1 *)(iVar2 + 0xb) = 1;
  iVar2 = FUN_02067394();
  if (iVar2 == 3) {
    uVar5 = (ushort)*(byte *)(iVar1 + 0xd11);
    if ((*(short *)(param_1 + 10) == 0) || (*(char *)(param_1 + 0xc) == '\0')) {
      FUN_02068cd0(*(undefined2 *)(param_1 + 0x36));
    }
    else if ((*(short *)(param_1 + 10) == 1) || (*(char *)(param_1 + 0xc) == ' ')) {
      FUN_02068cd0(*(undefined2 *)(param_1 + 0x36));
      iVar4 = FUN_02067a54(param_1,*(undefined1 *)(iVar1 + 0xd10),iVar1 + 0x300);
    }
    else {
      iVar4 = FUN_02067a54(param_1,*(undefined1 *)(iVar1 + 0xd10),iVar1 + 0x300);
    }
  }
  else if (iVar2 == 4) {
    uVar5 = *(short *)(iVar1 + (uint)*(byte *)(iVar1 + 0xd0f) * 0xc0 + 0x4a6) - 1U & 0xff;
    iVar4 = FUN_020679d8(param_1,iVar1);
    if (-1 < iVar4) {
      iVar2 = (uint)*(byte *)(iVar1 + 0xd0f) * 4;
      *(byte *)(iVar1 + 0x447 + iVar2) = *(byte *)(iVar1 + 0x447 + iVar2) | 0x80;
    }
  }
  else {
    if (iVar2 != 5) {
      return;
    }
    uVar5 = (ushort)*(byte *)(iVar1 + 0xd11);
    iVar4 = FUN_02067a54(param_1,1,iVar1 + 0x300 + (uint)*(byte *)(iVar1 + 0xd0f) * 0x24);
    if (-1 < iVar4) {
      iVar2 = (uint)*(byte *)(iVar1 + 0xd0f) * 0x24;
      *(byte *)(iVar1 + 0x300 + iVar2) = *(byte *)(iVar1 + 0x300 + iVar2) & 0xf0 | 1;
    }
  }
  if (-1 < iVar4) {
    uVar3 = FUN_0206793c(iVar4,param_1,uVar5,iVar1);
    FUN_020677e0(uVar3,iVar1);
  }
  return;
}

