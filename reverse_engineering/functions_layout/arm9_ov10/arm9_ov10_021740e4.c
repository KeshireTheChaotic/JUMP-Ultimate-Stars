
void FUN_021740e4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  longlong lVar7;
  longlong lVar8;
  undefined8 uVar9;
  uint local_38;
  uint local_1c [2];
  
  iVar6 = 0;
  local_38 = *(uint *)(param_1 + 0x101c);
  if ((int)local_38 < 1) {
    local_38 = 60000;
  }
  FUN_021743e8(param_1);
  iVar1 = FUN_021743d8(param_1);
  if (iVar1 == 0) {
    *(undefined4 *)(param_1 + 0x1020) = 2;
    return;
  }
  FUN_0218f378();
  if (*(int *)(param_1 + 0x112c) == 1) {
    FUN_020517fc(param_1 + 0x1198,0,0x830);
    *(undefined4 *)(param_1 + 0x19a8) = 0x2173dfd;
    *(undefined4 *)(param_1 + 0x1998) = *(undefined4 *)(param_1 + 0x1124);
    *(int *)(param_1 + 0x1140) = param_1 + 0x1198;
    FUN_02196174(&PTR_DAT_021a3950,0xb);
    FUN_02193c5c(1);
  }
  FUN_0218f398(0,*(undefined2 *)(param_1 + 0x1130),iVar1);
  iVar1 = FUN_0218f228();
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1020) = 3;
    FUN_0218f360();
    FUN_0218f3fc();
    return;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x19f4);
  uVar2 = FUN_02004b04(uVar5);
  local_1c[0] = FUN_0218eca8(uVar5,uVar2);
  if ((int)local_1c[0] < 1) {
    *(undefined4 *)(param_1 + 0x1020) = 5;
  }
  else {
    FUN_0218ec28();
    iVar1 = FUN_02174444(param_1);
    if (iVar1 == 0) {
      *(undefined4 *)(param_1 + 0x1020) = 7;
    }
    else {
      *(int *)(param_1 + 0x1a08) = *(int *)(param_1 + 0x1a04);
      *(int *)(param_1 + 0x1a0c) = *(int *)(param_1 + 0x1a04) + *(int *)(param_1 + 0x1a10);
      lVar7 = OS_GetTick();
      do {
        if (DAT_021a8538 == 0) {
          *(undefined4 *)(param_1 + 0x1020) = 5;
          goto LAB_021742c6;
        }
        local_1c[0] = FUN_0218ec54();
        if ((int)local_1c[0] < 0) goto LAB_021742ac;
        if (0 < (int)local_1c[0]) {
          lVar7 = OS_GetTick();
          iVar1 = FUN_0218f044(local_1c);
          if (iVar1 == 0) goto LAB_021742ac;
          uVar3 = (*(int *)(param_1 + 0x1a0c) + -1) - *(int *)(param_1 + 0x1a08);
          uVar4 = local_1c[0];
          if ((int)uVar3 <= (int)local_1c[0]) {
            uVar4 = uVar3;
          }
          FUN_02051890(iVar1,*(int *)(param_1 + 0x1a08),uVar4);
          *(uint *)(param_1 + 0x1a08) = *(int *)(param_1 + 0x1a08) + uVar4;
          **(undefined1 **)(param_1 + 0x1a08) = 0;
          if (iVar6 == 1) {
            FUN_02053ed0(param_1 + 0x1a14);
            *(uint *)(param_1 + 0x1a30) = *(int *)(param_1 + 0x1a30) + uVar4;
            FUN_02053e60(param_1 + 0x1a14);
          }
          else {
            iVar6 = FUN_0217432c(param_1);
          }
          if (uVar4 < local_1c[0]) {
            FUN_0218efb4();
            goto LAB_021742ac;
          }
          FUN_0218efb4(uVar4);
        }
        if ((-1 < *(int *)(param_1 + 0x1a2c)) &&
           (*(int *)(param_1 + 0x1a2c) <= *(int *)(param_1 + 0x1a30))) {
LAB_021742ac:
          FUN_0218f18c();
          FUN_0218f130();
          FUN_0218f360();
          FUN_0218f3fc();
          *(undefined4 *)(param_1 + 0x1020) = 8;
          return;
        }
        lVar8 = OS_GetTick();
        uVar4 = (uint)(lVar8 - lVar7);
        uVar9 = FUN_0200d0c4(uVar4 * 0x40,
                             (int)((ulonglong)(lVar8 - lVar7) >> 0x20) * 0x40 | uVar4 >> 0x1a,0x82ea
                             ,0);
        uVar4 = (uint)((ulonglong)uVar9 >> 0x20);
        if ((uint)((int)local_38 >> 0x1f) <= uVar4 &&
            (uint)((uint)uVar9 <= local_38) <= ((int)local_38 >> 0x1f) - uVar4) {
          *(undefined4 *)(param_1 + 0x1020) = 6;
          goto LAB_021742c6;
        }
        iVar1 = FUN_02174444(param_1);
      } while (iVar1 != 0);
      *(undefined4 *)(param_1 + 0x1020) = 7;
    }
  }
LAB_021742c6:
  FUN_0218f18c();
  FUN_0218f130();
  FUN_0218f360();
  FUN_0218f3fc();
  return;
}

