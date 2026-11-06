
undefined4 FUN_0217972c(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  bool bVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  iVar1 = FUN_02178448();
  if (((*(int *)(iVar1 + 0x198) != 8) && (iVar1 = FUN_02178448(), *(int *)(iVar1 + 0x198) != 0xe))
     && (iVar1 = FUN_02178448(), *(int *)(iVar1 + 0x198) != 0xf)) {
    return 1;
  }
  lVar7 = OS_GetTick();
  iVar1 = FUN_02178448();
  lVar7 = lVar7 - *(longlong *)(iVar1 + 0x1e0);
  uVar4 = (uint)lVar7;
  uVar8 = FUN_0200d0c4(uVar4 * 0x40,(int)((ulonglong)lVar7 >> 0x20) * 0x40 | uVar4 >> 0x1a,0x82ea,0)
  ;
  iVar5 = (int)((ulonglong)uVar8 >> 0x20);
  uVar4 = (uint)uVar8;
  iVar1 = FUN_02178448();
  iVar1 = *(int *)(iVar1 + 0x198);
  if (iVar1 == 8) {
    if ((uint)(uVar4 < 0x1771) <= (uint)-iVar5) {
      iVar1 = FUN_02178448(6000 - uVar4,-(uint)(uVar4 >= 0x1771) - iVar5);
      iVar1 = FUN_02179a58(*(undefined4 *)(iVar1 + 0xf4),0xe);
      if (iVar1 == 0) {
        return 0;
      }
    }
  }
  else if (iVar1 == 0xe) {
    if ((uint)(uVar4 < 0x1771) <= (uint)-iVar5) {
      iVar1 = FUN_02178448(6000 - uVar4,-(uint)(uVar4 >= 0x1771) - iVar5);
      *(char *)(iVar1 + 0x1a4) = *(char *)(iVar1 + 0x1a4) + '\x01';
      iVar1 = FUN_02178448();
      if (*(byte *)(iVar1 + 0x1a4) < 6) {
        iVar5 = 1;
        iVar1 = FUN_02178448();
        if (*(char *)(iVar1 + 0xd) != '\0') {
          iVar1 = 4;
          do {
            iVar2 = FUN_02178448();
            iVar3 = FUN_02178448();
            if ((*(uint *)(iVar2 + 0x1d0) & 1 << (uint)*(byte *)(iVar3 + iVar5 + 0x2c8)) == 0) {
              iVar2 = FUN_02178448();
              iVar2 = FUN_02179a58(*(undefined4 *)(iVar2 + iVar1 + 0xf4),0xd);
              if (iVar2 == 0) {
                return 0;
              }
            }
            iVar1 = iVar1 + 4;
            iVar5 = iVar5 + 1;
            iVar2 = FUN_02178448();
          } while (iVar5 <= (int)(uint)*(byte *)(iVar2 + 0xd));
        }
      }
      else {
        iVar1 = FUN_02178448();
        iVar1 = FUN_02179d60(*(undefined4 *)(iVar1 + 0x1d0));
        if (iVar1 == 0) {
          return 0;
        }
        iVar1 = FUN_02178448();
        if (*(char *)(iVar1 + 0xd) == '\0') {
          FUN_02179f88(2);
        }
        else {
          iVar1 = FUN_02178448();
          *(undefined1 *)(iVar1 + 0x1a4) = 0;
          iVar1 = FUN_02178448();
          uVar8 = OS_GetTick();
          *(undefined8 *)(iVar1 + 0x1e0) = uVar8;
        }
      }
    }
  }
  else if (iVar1 == 0xf) {
    iVar1 = FUN_02178448();
    bVar6 = uVar4 <= *(ushort *)(iVar1 + 0x1aa);
    if ((uint)bVar6 <= (uint)-iVar5) {
      FUN_02179f88(2,-(uint)!bVar6 - iVar5);
    }
  }
  return 1;
}

