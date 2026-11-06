
void FUN_02173024(uint param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int unaff_r7;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  uVar8 = CONCAT44(param_4,param_3);
  lVar6 = CONCAT44(unaff_r5,unaff_r6);
  do {
    uVar4 = (uint)((ulonglong)uVar8 >> 0x20);
    uVar2 = (uint)uVar8;
    uVar5 = (uVar4 - param_2) - (uint)(param_1 > uVar2);
    if (param_2 < uVar4 || uVar4 - param_2 < (uint)(param_1 <= uVar2)) {
      do {
        FUN_0217405c(*(undefined4 *)(*unaff_r4 + 0x1314),*unaff_r4,uVar2,uVar5);
        FUN_02053ed0(*unaff_r4 + unaff_r7);
        uVar1 = FUN_021730a4(param_6);
        *(undefined4 *)(*unaff_r4 + 0x1004) = uVar1;
        iVar3 = *unaff_r4;
        if (*(int *)(iVar3 + 0x1004) != 0) {
          *(undefined4 *)(iVar3 + 0x1008) = 0x4e84;
          FUN_02053e60(*unaff_r4 + 0x13d8);
          return;
        }
        FUN_02053e60(iVar3 + unaff_r7);
        if (*(int *)(*(int *)(*unaff_r4 + 0x1314) + 0x1ba0) != 0) {
          FUN_020532f8(*(int *)(*unaff_r4 + 0x1314) + 0x1b34);
        }
        if (*(int *)(*(int *)(*unaff_r4 + 0x1314) + 0x1020) == 8) {
          iVar3 = FUN_02172d78();
          if (iVar3 == 0x10) {
            if (2 < param_5) {
              FUN_02172a60(0x10);
              return;
            }
            param_6 = param_7;
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
            if (1 < param_5) {
              FUN_02172a60();
              return;
            }
            param_6 = 1;
          }
        }
        else {
          *(undefined4 *)(*unaff_r4 + 0x1008) = 0x4e84;
          iVar3 = *(int *)(*(int *)(*unaff_r4 + 0x1314) + 0x1020);
          if (iVar3 == 7) {
            FUN_02172a60(0x14);
            return;
          }
          if (2 < param_5) {
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
          param_6 = 1;
        }
        param_5 = param_5 + 1;
        lVar6 = OS_GetTick();
        lVar7 = OS_GetTick();
        uVar5 = (uint)(lVar7 - lVar6);
        uVar8 = FUN_0200d0c4(uVar5 * 0x40,
                             (int)((ulonglong)(lVar7 - lVar6) >> 0x20) * 0x40 | uVar5 >> 0x1a,0x82ea
                             ,param_8);
        uVar4 = (uint)((ulonglong)uVar8 >> 0x20);
        uVar5 = (uint)uVar8;
        uVar2 = uVar4 - (4999 >= uVar5);
      } while (uVar4 != 0 || uVar4 < (4999 < uVar5));
    }
    FUN_02053ed0(*unaff_r4 + unaff_r7);
    iVar3 = *unaff_r4;
    if (*(int *)(iVar3 + 0x13f0) == 1) {
      *(undefined4 *)(iVar3 + 0x1008) = 0x4e84;
      FUN_02053e60(*unaff_r4 + 0x13d8);
      FUN_02172a60(0x14);
      return;
    }
    FUN_02053e60(iVar3 + unaff_r7);
    FUN_02052ea0(5000);
    lVar7 = OS_GetTick();
    uVar5 = (uint)(lVar7 - lVar6);
    uVar8 = FUN_0200d0c4(uVar5 * 0x40,
                         (int)((ulonglong)(lVar7 - lVar6) >> 0x20) * 0x40 | uVar5 >> 0x1a,0x82ea,
                         param_9);
    param_2 = 0;
    param_1 = 5000;
  } while( true );
}

