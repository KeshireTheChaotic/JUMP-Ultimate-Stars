
void FUN_0200a5a4(int param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = (int)*(short *)(param_1 + 2);
  FUN_0200a4ac(param_4);
  if (*(byte *)(param_4 + 5) < 10) {
    if (0x20 < iVar3) {
      iVar3 = 0x20;
    }
    FUN_02009dc0(param_4,iVar3);
    bVar1 = *(byte *)(param_4 + 4);
    while ((int)(uint)bVar1 < iVar3) {
      *(char *)(param_4 + 4) = *(char *)(param_4 + 4) + '\x01';
      *(undefined1 *)(param_4 + (uint)bVar1 + 5) = 0;
      bVar1 = *(byte *)(param_4 + 4);
    }
    iVar3 = 0;
    *(ushort *)(param_4 + 2) = *(short *)(param_4 + 2) - (bVar1 - 1);
    if (*(char *)(param_4 + 4) != '\0') {
      do {
        iVar2 = param_4 + iVar3;
        iVar3 = iVar3 + 1;
        *(char *)(iVar2 + 5) = *(char *)(iVar2 + 5) + '0';
      } while (iVar3 < (int)(uint)*(byte *)(param_4 + 4));
    }
  }
  return;
}

