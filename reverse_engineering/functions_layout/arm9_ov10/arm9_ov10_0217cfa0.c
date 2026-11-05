
void FUN_0217cfa0(uint param_1,int param_2,ushort *param_3)

{
  byte bVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  
  if (param_2 == 2) {
    iVar4 = FUN_02178448();
    if (*(int *)(iVar4 + 0x198) == 1) {
      if ((char)*param_3 == '\x01') {
        iVar4 = FUN_02178448();
        *(undefined4 *)(iVar4 + 0x204) = 0;
      }
      bVar1 = *(byte *)((int)param_3 + 1);
      iVar4 = FUN_02178448();
      *(char *)(iVar4 + (uint)bVar1 + 0x2c8) = (char)param_3[1];
      iVar4 = FUN_02178448();
      iVar3 = FUN_02178448();
      *(undefined4 *)(iVar4 + (uint)bVar1 * 4 + 0xf4) = *(undefined4 *)(iVar3 + 0x1f8);
      iVar4 = FUN_02178448();
      if ((*(char *)(iVar4 + 0x15) == '\0') ||
         (iVar4 = FUN_02178448(), *(char *)(iVar4 + 0x15) == '\x01')) {
        iVar4 = FUN_02178448();
        iVar3 = FUN_02178448();
        *(undefined1 *)(iVar4 + 0x16) = *(undefined1 *)(iVar3 + 0xd);
      }
      iVar4 = FUN_02178448();
      *(undefined1 *)(iVar4 + 0x1a5) = 0;
      FUN_02178434(9);
    }
    FUN_02179ca8(param_1,3);
    return;
  }
  if (param_2 == 3) {
    iVar4 = FUN_02178448();
    if (*(int *)(iVar4 + 0x198) != 0x10) {
      FUN_02179ca8(param_1,4);
      return;
    }
    iVar4 = FUN_02178448();
    *(uint *)(iVar4 + 0x1cc) = *(uint *)(iVar4 + 0x1cc) | 1 << (param_1 & 0xff);
    uVar2 = *param_3;
    iVar4 = FUN_02178448();
    if (*(ushort *)(iVar4 + 0x1a8) < uVar2) {
      iVar4 = FUN_02178448();
      *(ushort *)(iVar4 + 0x1a8) = uVar2;
    }
    iVar4 = FUN_021794e0(0);
    iVar3 = FUN_02178448();
    if (iVar4 == *(int *)(iVar3 + 0x1cc)) {
      iVar3 = 1;
      iVar4 = FUN_02178448();
      if (*(char *)(iVar4 + 0xd) != '\0') {
        do {
          iVar4 = FUN_02178448();
          FUN_02179ca8(*(undefined1 *)(iVar4 + iVar3 + 0x2c8),4);
          iVar3 = iVar3 + 1;
          iVar4 = FUN_02178448();
        } while (iVar3 <= (int)(uint)*(byte *)(iVar4 + 0xd));
      }
      FUN_02178434(0x11);
      return;
    }
  }
  else {
    if (param_2 != 4) {
      return;
    }
    iVar4 = FUN_02178448();
    if (*(int *)(iVar4 + 0x198) == 9) {
      FUN_0217a320(4);
    }
  }
  return;
}

