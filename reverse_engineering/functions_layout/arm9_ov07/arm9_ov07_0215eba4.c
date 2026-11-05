
void FUN_0215eba4(short *param_1)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  ushort *puVar5;
  int iVar6;
  
  iVar1 = DAT_0216ad84;
  if ((param_1 != (short *)0x0) && (iVar3 = FUN_0215fc84(DAT_0216ad84,param_1), iVar3 == 0)) {
    return;
  }
  if (param_1 == (short *)0x0) {
    *(undefined4 *)(iVar1 + 0x50f0) = 1;
    *(undefined4 *)(iVar1 + 0x5108) = 0;
    *(int *)(iVar1 + 0x55e0) = iVar1 + 0x51e0;
    *(undefined2 *)(iVar1 + 0x55e4) = 0x400;
    uVar2 = FUN_0205889c();
    *(ushort *)(iVar1 + 0x55e6) = uVar2 & -uVar2;
    DAT_0216ad80 = uVar2 ^ uVar2 & -uVar2;
    *(undefined2 *)(iVar1 + 0x55e8) = 0x6e;
    FUN_020517fc(iVar1 + 0x55ea,0xff,6);
    *(undefined2 *)(iVar1 + 22000) = 1;
    *(undefined2 *)(iVar1 + 0x55f2) = 0;
    FUN_020517fc(iVar1 + 0x55f4,0xff,0x20);
    uVar4 = FUN_02058f88(FUN_0215eba4,iVar1 + 0x55e0);
    FUN_0215fcb8(iVar1,0x26,uVar4);
    return;
  }
  if (*param_1 == 0x26) {
    if (param_1[4] == 5) {
      DC_InvalidateRange(iVar1 + 0x51e0,0x400);
      *(uint *)(iVar1 + 0x5108) = (uint)(ushort)param_1[7];
    }
    uVar4 = FUN_02058f40(FUN_0215eba4);
    FUN_0215fcb8(iVar1,0xb,uVar4);
    return;
  }
  if (*param_1 != 0xb) {
    return;
  }
  iVar3 = 0;
  if (*(int *)(iVar1 + 0x50f4) == 5) {
    iVar6 = 0;
    puVar5 = (ushort *)(iVar1 + 0x51e0);
    if (0 < *(int *)(iVar1 + 0x5108)) {
      do {
        uVar2 = *puVar5;
        if ((0xf < puVar5[0x1e]) && (puVar5[0x20] == 1)) {
          iVar3 = 0;
          if (*(code **)(iVar1 + 0x50f8) != (code *)0x0) {
            iVar3 = (**(code **)(iVar1 + 0x50f8))(6,puVar5);
          }
          if (iVar3 != 0) {
            FUN_02051890(puVar5,iVar1 + 0x5120,0xc0);
            break;
          }
        }
        iVar6 = iVar6 + 1;
        puVar5 = (ushort *)((int)puVar5 + ((uint)uVar2 * 2 + 3 & 0xfffffffc));
      } while (iVar6 < *(int *)(iVar1 + 0x5108));
    }
    if ((iVar3 == 0) && (uVar2 = DAT_0216ad80 & -DAT_0216ad80, uVar2 != 0)) {
      *(undefined4 *)(iVar1 + 0x5108) = 0;
      *(ushort *)(iVar1 + 0x55e6) = uVar2;
      DAT_0216ad80 = DAT_0216ad80 ^ uVar2;
      uVar4 = FUN_02058f88(FUN_0215eba4,iVar1 + 0x55e0);
      FUN_0215fcb8(iVar1,0x26,uVar4);
      return;
    }
  }
  if (iVar3 != 0) {
    FUN_0215ef6c(0);
    return;
  }
  if (*(int *)(iVar1 + 0x50f4) == 5) {
    *(undefined4 *)(iVar1 + 0x50f4) = 3;
  }
  FUN_0215f994(iVar1,3,0);
  return;
}

