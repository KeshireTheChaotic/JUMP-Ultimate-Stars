
void FUN_0219c684(int param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  char local_28 [4];
  undefined4 uStack_24;
  
  uStack_24 = param_4;
  FUN_02051890(param_1,param_2 * 0x50 + DAT_0214ccf8 + 0x8ec);
  if (*(char *)(DAT_0214ccf8 + 0x5c) == '\0') {
    uVar3 = FUN_021766fc();
    iVar4 = FUN_0219cb14(uVar3);
    if (iVar4 < 0) {
      return;
    }
  }
  FUN_021766fc();
  iVar4 = FUN_0219b644();
  if (iVar4 == 0) {
    iVar5 = FUN_0219b644(param_2);
    iVar4 = DAT_0214ccf8;
    if (iVar5 == 0) {
      iVar4 = FUN_0219cb14(param_2);
      if (-1 < iVar4) {
        FUN_0219cb14(param_2);
        iVar4 = FUN_0219a51c();
        if (iVar4 != 0) {
          cVar1 = *(char *)(DAT_0214ccf8 + 0x5c);
          uVar6 = FUN_0219cb14(param_2);
          FUN_0219a668(uVar6,cVar1 == '\0',1);
        }
      }
    }
    else {
      bVar2 = false;
      iVar5 = 0;
      do {
        local_28[iVar5] = *(char *)(iVar4 + iVar5 + 0x8e0);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 4);
      if (*(char *)(param_1 + 0x37) != '\0') {
        FUN_02088260();
        FUN_0219a904();
        FUN_0219a8a8();
        thunk_FUN_02070414();
      }
      FUN_021a2234(param_1,DAT_0214ccf8 + 0x8e0);
      iVar4 = 0;
      do {
        if (local_28[iVar4] != *(char *)(DAT_0214ccf8 + iVar4 + 0x8e0)) {
          if (local_28[iVar4] == -1) {
            FUN_0219a4e0();
          }
          if ((*(char *)(DAT_0214ccf8 + iVar4 + 0x8e0) == -1) &&
             (iVar5 = FUN_0219a93c(), iVar5 == 0)) {
            ALObjectImp::PostSyncMessage(iVar4);
          }
          bVar2 = true;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 4);
      if (bVar2) {
        FUN_0219a6d0();
      }
    }
  }
  else {
    iVar4 = FUN_0219cb14();
    if (iVar4 < 0) {
      FUN_0219c9e4(param_2);
      FUN_021a2214(DAT_0214ccf8 + 0x88,DAT_0214ccf8 + 0x8e0);
      FUN_0219a3c0();
      FUN_021a2c48(DAT_0214ccf8 + 0xc24,DAT_0214ccf8 + 0x88,0x50);
      uVar3 = FUN_0217668c();
      *(undefined1 *)(DAT_0214ccf8 + 0xa50) = uVar3;
      FUN_0219cb14(param_2);
      FUN_0219a4e0();
      FUN_0219a6d0();
    }
  }
  iVar4 = FUN_021a1f34(DAT_0214ccf8 + 0x88,2);
  if ((((iVar4 != 0) || (iVar4 = FUN_021a1f34(DAT_0214ccf8 + 0x88,4), iVar4 != 0)) &&
      (iVar4 = FUN_021a207c(DAT_0214ccf8 + 0x88), iVar4 != 0)) &&
     (iVar4 = FUN_021a207c(param_1), iVar4 != 0)) {
    if ((*(uint *)(DAT_0214ccf8 + 0x1bdc) & 1 << (param_2 & 0xff)) == 0) {
      *(uint *)(DAT_0214ccf8 + 0x1bdc) = *(uint *)(DAT_0214ccf8 + 0x1bdc) | 1 << (param_2 & 0xff);
      FUN_0219dde8(param_2);
    }
  }
  return;
}

