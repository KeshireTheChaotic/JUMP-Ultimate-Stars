
void FUN_02172ebc(void)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  int local_28;
  undefined4 local_24;
  
  local_28 = 0;
  do {
    if (*(int *)(*(int *)(DAT_021a7348 + 0x1314) + 0x1ba0) != 0) {
      FUN_020532f8(*(int *)(DAT_021a7348 + 0x1314) + 0x1b34);
    }
    if (*(int *)(*(int *)(DAT_021a7348 + 0x1314) + 0x1020) == 8) {
      iVar3 = FUN_02172d78();
      if (iVar3 == 0x10) {
        if (2 < local_28) {
          FUN_02172a60(0x10);
          return;
        }
        local_24 = 0;
      }
      else {
        if (iVar3 == 0x11) {
          FUN_02172a60();
          return;
        }
        if (iVar3 == 0x15) {
          FUN_02172a60(0x15);
          return;
        }
        if (1 < local_28) {
          FUN_02172a60();
          return;
        }
        local_24 = 1;
      }
    }
    else {
      *(undefined4 *)(DAT_021a7348 + 0x1008) = 0x4e84;
      iVar3 = *(int *)(*(int *)(DAT_021a7348 + 0x1314) + 0x1020);
      if (iVar3 == 7) {
        FUN_02172a60(0x14);
        return;
      }
      if (2 < local_28) {
        if (iVar3 == 2) {
          FUN_02172a60(9);
          return;
        }
        if (iVar3 == 3) {
          FUN_02172a60(0xb);
          return;
        }
        FUN_02172a60(0xd);
        return;
      }
      local_24 = 1;
    }
    local_28 = local_28 + 1;
    lVar6 = FUN_02054b44();
    lVar7 = FUN_02054b44();
    uVar1 = (uint)(lVar7 - lVar6);
    uVar8 = FUN_0200d0c4(uVar1 * 0x40,
                         (int)((ulonglong)(lVar7 - lVar6) >> 0x20) * 0x40 | uVar1 >> 0x1a,0x82ea,0);
    uVar4 = (uint)((ulonglong)uVar8 >> 0x20);
    uVar1 = (uint)uVar8;
    uVar5 = uVar4 - (4999 >= uVar1);
    if (uVar4 == 0 && (4999 < uVar1) <= uVar4) {
      do {
        FUN_02053ed0(DAT_021a7348 + 0x13d8,0,uVar5,uVar1);
        if (*(int *)(DAT_021a7348 + 0x13f0) == 1) {
          *(undefined4 *)(DAT_021a7348 + 0x1008) = 0x4e84;
          FUN_02053e60(DAT_021a7348 + 0x13d8);
          FUN_02172a60(0x14);
          return;
        }
        FUN_02053e60(DAT_021a7348 + 0x13d8);
        FUN_02052ea0(5000);
        lVar7 = FUN_02054b44();
        uVar1 = (uint)(lVar7 - lVar6);
        uVar8 = FUN_0200d0c4(uVar1 * 0x40,
                             (int)((ulonglong)(lVar7 - lVar6) >> 0x20) * 0x40 | uVar1 >> 0x1a,0x82ea
                             ,0);
        uVar4 = (uint)((ulonglong)uVar8 >> 0x20);
        uVar5 = (uint)uVar8;
        uVar1 = uVar4 - (4999 >= uVar5);
      } while (uVar4 == 0 && (4999 < uVar5) <= uVar4);
    }
    FUN_0217405c(*(undefined4 *)(DAT_021a7348 + 0x1314));
    FUN_02053ed0(DAT_021a7348 + 0x13d8);
    uVar2 = FUN_021730a4(local_24);
    *(undefined4 *)(DAT_021a7348 + 0x1004) = uVar2;
    if (*(int *)(DAT_021a7348 + 0x1004) != 0) {
      *(undefined4 *)(DAT_021a7348 + 0x1008) = 0x4e84;
      FUN_02053e60(DAT_021a7348 + 0x13d8);
      return;
    }
    FUN_02053e60(DAT_021a7348 + 0x13d8);
  } while( true );
}

