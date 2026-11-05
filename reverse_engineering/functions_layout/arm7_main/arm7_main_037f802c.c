
uint FUN_037f802c(int param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  uVar4 = 0;
  iVar1 = FUN_037f81e8();
  if (iVar1 == 0) {
    iVar1 = FUN_037f81c4();
    if (iVar1 != 0) {
      return 3;
    }
    uVar5 = 0;
    do {
      uVar2 = SVC_GetCRC16(0xffff,param_1 + uVar5 * 0x100,0x70);
      iVar1 = param_1 + uVar5 * 0x100;
      if ((uVar2 == *(ushort *)(iVar1 + 0x72)) && (*(ushort *)(iVar1 + 0x70) < 0x80)) {
        uVar4 = uVar4 | 1 << (uVar5 & 0xff);
      }
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < 2);
  }
  else {
    uVar2 = FUN_037f81c4();
    uVar5 = 0;
    do {
      iVar1 = param_1 + uVar5 * 0x100;
      uVar3 = SVC_GetCRC16(0xffff,iVar1,0x70);
      if (((uVar3 == *(ushort *)(iVar1 + 0x72)) && (*(ushort *)(iVar1 + 0x70) < 0x80)) &&
         (uVar3 = SVC_GetCRC16(0xffff,iVar1 + 0x74,0x8a), uVar3 == *(ushort *)(iVar1 + 0xfe))) {
        if ((1 << (ushort)*(byte *)(iVar1 + 0x75) & (uint)*(ushort *)(iVar1 + 0x76)) != 0) {
          if ((uVar2 & *(ushort *)(iVar1 + 0x76)) != 0) {
            *(ushort *)(iVar1 + 100) =
                 *(ushort *)(iVar1 + 100) & 0xfff8 | *(byte *)(iVar1 + 0x75) & 7;
          }
          uVar4 = uVar4 | 1 << (uVar5 & 0xff);
        }
      }
      uVar5 = uVar5 + 1 & 0xffff;
    } while (uVar5 < 2);
  }
  if ((uVar4 != 1) && (uVar4 != 2)) {
    if (uVar4 == 3) {
      if ((*(short *)(param_1 + 0x70) + 1U & 0x7f) == *(ushort *)(param_1 + 0x170)) {
        uVar4 = 2;
      }
      else {
        uVar4 = 1;
      }
    }
    else {
      uVar4 = 0;
    }
  }
  return uVar4;
}

