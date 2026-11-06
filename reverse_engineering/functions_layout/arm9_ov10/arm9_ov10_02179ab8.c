
undefined4 FUN_02179ab8(void)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  bool bVar5;
  longlong lVar6;
  undefined8 uVar7;
  
  iVar1 = FUN_02178448();
  if (((*(int *)(iVar1 + 0x198) != 9) && (iVar1 = FUN_02178448(), *(int *)(iVar1 + 0x198) != 0x10))
     && (iVar1 = FUN_02178448(), *(int *)(iVar1 + 0x198) != 0x11)) {
    return 1;
  }
  lVar6 = OS_GetTick();
  iVar1 = FUN_02178448();
  lVar6 = lVar6 - *(longlong *)(iVar1 + 0x1d8);
  uVar3 = (uint)lVar6;
  uVar7 = FUN_0200d0c4(uVar3 * 0x40,(int)((ulonglong)lVar6 >> 0x20) * 0x40 | uVar3 >> 0x1a,0x82ea,0)
  ;
  iVar4 = (int)((ulonglong)uVar7 >> 0x20);
  uVar3 = (uint)uVar7;
  iVar1 = FUN_02178448();
  iVar1 = *(int *)(iVar1 + 0x198);
  if (iVar1 == 9) {
    if ((uint)(uVar3 < 0x1771) <= (uint)-iVar4) {
      iVar1 = FUN_02176640(6000 - uVar3,-(uint)(uVar3 >= 0x1771) - iVar4);
      if ((iVar1 == 5) && (iVar1 = FUN_02178448(), 4 < *(byte *)(iVar1 + 0x1a5))) {
        iVar1 = FUN_02178448();
        iVar1 = FUN_0217a8a4(*(undefined4 *)(iVar1 + 0xf4));
        if (iVar1 == 0) {
          return 0;
        }
      }
      else {
        iVar1 = FUN_02178448();
        *(char *)(iVar1 + 0x1a5) = *(char *)(iVar1 + 0x1a5) + '\x01';
        iVar1 = FUN_02178448();
        FUN_02179ca8(*(undefined1 *)(iVar1 + 0x2c8),3);
      }
    }
  }
  else if (iVar1 == 0x10) {
    if ((uint)(uVar3 < 0x1771) <= (uint)-iVar4) {
      iVar1 = FUN_02178448(6000 - uVar3,-(uint)(uVar3 >= 0x1771) - iVar4);
      *(char *)(iVar1 + 0x1a3) = *(char *)(iVar1 + 0x1a3) + '\x01';
      iVar1 = FUN_02178448();
      if (*(byte *)(iVar1 + 0x1a3) < 6) {
        iVar4 = 1;
        iVar1 = FUN_02178448();
        if (*(char *)(iVar1 + 0xd) != '\0') {
          do {
            iVar1 = FUN_02178448();
            iVar2 = FUN_02178448();
            if ((*(uint *)(iVar1 + 0x1cc) & 1 << (uint)*(byte *)(iVar2 + iVar4 + 0x2c8)) == 0) {
              iVar1 = FUN_02178448();
              FUN_02179ca8(*(undefined1 *)(iVar1 + iVar4 + 0x2c8),2);
            }
            iVar4 = iVar4 + 1;
            iVar1 = FUN_02178448();
          } while (iVar4 <= (int)(uint)*(byte *)(iVar1 + 0xd));
        }
      }
      else {
        iVar1 = FUN_02178448();
        if ((*(char *)(iVar1 + 0x15) == '\0') ||
           (iVar1 = FUN_02178448(), *(char *)(iVar1 + 0x15) == '\x01')) {
          FUN_02179e44();
          FUN_02179f88(1);
        }
        else {
          iVar1 = FUN_02178448();
          iVar1 = FUN_02179d60(*(undefined4 *)(iVar1 + 0x1cc));
          if (iVar1 == 0) {
            return 0;
          }
          iVar1 = FUN_02178448();
          if (*(char *)(iVar1 + 0xd) == '\0') {
            iVar1 = FUN_02178448();
            iVar1 = FUN_0217a93c(*(undefined4 *)(iVar1 + 0x204));
            if (iVar1 == 0) {
              return 0;
            }
          }
          else {
            iVar1 = FUN_02178448();
            *(undefined1 *)(iVar1 + 0x1a3) = 0;
            iVar1 = FUN_02178448();
            uVar7 = OS_GetTick();
            *(undefined8 *)(iVar1 + 0x1d8) = uVar7;
          }
        }
      }
    }
  }
  else if (iVar1 == 0x11) {
    iVar1 = FUN_02178448();
    bVar5 = uVar3 <= *(ushort *)(iVar1 + 0x1a8);
    if ((uint)bVar5 <= (uint)-iVar4) {
      FUN_0217a320(4,-(uint)!bVar5 - iVar4);
    }
  }
  return 1;
}

