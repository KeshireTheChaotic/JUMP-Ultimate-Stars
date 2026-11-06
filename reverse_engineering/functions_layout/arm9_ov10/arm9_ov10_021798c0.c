
undefined4 FUN_021798c0(undefined4 param_1,int param_2,undefined4 param_3)

{
  longlong lVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  
  iVar2 = FUN_02176640();
  if (iVar2 != 6) {
    return 1;
  }
  if (param_2 == 0xd) {
    iVar2 = FUN_02178448();
    if (*(int *)(iVar2 + 0x198) != 8) {
      FUN_02178434(8);
      FUN_02179e70(param_3);
    }
    iVar2 = FUN_02179a58(param_1,0xe);
    if (iVar2 == 0) {
      return 0;
    }
  }
  else if (param_2 == 0xe) {
    iVar2 = FUN_02178448();
    if (*(int *)(iVar2 + 0x198) == 0xe) {
      lVar7 = OS_GetTick();
      iVar2 = FUN_02178448();
      lVar1 = lVar7 - *(longlong *)(iVar2 + 0x1e0);
      uVar3 = (uint)lVar1;
      uVar8 = FUN_0200d0c4(uVar3 * 0x40,(int)((ulonglong)lVar1 >> 0x20) * 0x40 | uVar3 >> 0x1a,
                           0x82ea,0);
      uVar3 = (uint)(uVar8 >> 1);
      iVar2 = (int)((uVar8 >> 1) >> 0x20);
      if ((uint)(uVar3 < 0x12d) <= (uint)-iVar2) {
        iVar2 = FUN_02178448(-(uint)(uVar3 >= 0x12d) - iVar2,iVar2,300 - uVar3);
        lVar7 = lVar7 - *(longlong *)(iVar2 + 0x1e0);
        uVar3 = (uint)lVar7;
        uVar8 = FUN_0200d0c4(uVar3 * 0x40,(int)((ulonglong)lVar7 >> 0x20) * 0x40 | uVar3 >> 0x1a,
                             0x82ea,0);
        lVar7 = (uVar8 >> 1) - 300;
        uVar6 = (uint)lVar7;
        iVar5 = (int)((ulonglong)lVar7 >> 0x20);
        iVar2 = FUN_02178448();
        uVar3 = (uint)*(ushort *)(iVar2 + 0x1aa);
        if ((uint)(uVar6 <= uVar3) <= (uint)-iVar5) {
          iVar2 = FUN_02178448(uVar3 - uVar6,-(uint)(uVar6 > uVar3) - iVar5);
          *(short *)(iVar2 + 0x1aa) = (short)lVar7;
        }
      }
      uVar3 = FUN_02179534(param_1,0);
      if (uVar3 != 0xff) {
        iVar2 = FUN_02178448();
        *(uint *)(iVar2 + 0x1d0) = *(uint *)(iVar2 + 0x1d0) | 1 << (uVar3 & 0xff);
      }
      iVar2 = FUN_021794e0(1);
      iVar5 = FUN_02178448();
      if (iVar2 == *(int *)(iVar5 + 0x1d0)) {
        iVar5 = 1;
        iVar2 = FUN_02178448();
        if (*(char *)(iVar2 + 0xd) != '\0') {
          iVar2 = 4;
          do {
            iVar4 = FUN_02178448();
            iVar4 = FUN_02179a58(*(undefined4 *)(iVar4 + iVar2 + 0xf4),0xf);
            if (iVar4 == 0) {
              return 0;
            }
            iVar2 = iVar2 + 4;
            iVar5 = iVar5 + 1;
            iVar4 = FUN_02178448();
          } while (iVar5 <= (int)(uint)*(byte *)(iVar4 + 0xd));
        }
        FUN_02178434(0xf);
      }
    }
    else {
      iVar2 = FUN_02179a58(param_1,0xf);
      if (iVar2 == 0) {
        return 0;
      }
    }
  }
  else if ((param_2 == 0xf) && (iVar2 = FUN_02178448(), *(int *)(iVar2 + 0x198) == 8)) {
    FUN_02179f88(2);
  }
  return 1;
}

