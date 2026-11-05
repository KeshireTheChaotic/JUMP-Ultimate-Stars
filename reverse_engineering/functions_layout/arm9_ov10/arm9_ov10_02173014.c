
void FUN_02173014(int param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  int *unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  int unaff_r7;
  longlong lVar6;
  longlong lVar7;
  undefined8 uVar8;
  
  lVar6 = CONCAT44(unaff_r5,unaff_r6);
  do {
    uVar8 = FUN_0200d0c4(param_1,param_2,0x82ea,param_9);
    uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
    uVar3 = (uint)uVar8;
    uVar5 = uVar2 - (4999 >= uVar3);
    if (uVar2 != 0 || uVar2 < (4999 < uVar3)) {
      do {
        FUN_0217405c(*(undefined4 *)(*unaff_r4 + 0x1314),*unaff_r4,uVar3,uVar5);
        FUN_02053ed0(*unaff_r4 + unaff_r7);
        uVar1 = FUN_021730a4(param_6);
        *(undefined4 *)(*unaff_r4 + 0x1004) = uVar1;
        iVar4 = *unaff_r4;
        if (*(int *)(iVar4 + 0x1004) != 0) {
          *(undefined4 *)(iVar4 + 0x1008) = 0x4e84;
          FUN_02053e60(*unaff_r4 + 0x13d8);
          return;
        }
        FUN_02053e60(iVar4 + unaff_r7);
        if (*(int *)(*(int *)(*unaff_r4 + 0x1314) + 0x1ba0) != 0) {
          FUN_020532f8(*(int *)(*unaff_r4 + 0x1314) + 0x1b34);
        }
        if (*(int *)(*(int *)(*unaff_r4 + 0x1314) + 0x1020) == 8) {
          iVar4 = FUN_02172d78();
          if (iVar4 == 0x10) {
            if (2 < param_5) {
              FUN_02172a60(0x10);
              return;
            }
            param_6 = param_7;
          }
          else {
            if (iVar4 == 0x11) {
              FUN_02172a60();
              return;
            }
            if (iVar4 == 0x15) {
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
          iVar4 = *(int *)(*(int *)(*unaff_r4 + 0x1314) + 0x1020);
          if (iVar4 == 7) {
            FUN_02172a60(0x14);
            return;
          }
          if (2 < param_5) {
            if (iVar4 == 2) {
              FUN_02172a60(9);
              return;
            }
            if (iVar4 == 3) {
              FUN_02172a60(0xb);
              return;
            }
            FUN_02172a60(0xd);
            return;
          }
          param_6 = 1;
        }
        param_5 = param_5 + 1;
        lVar6 = FUN_02054b44();
        lVar7 = FUN_02054b44();
        uVar5 = (uint)(lVar7 - lVar6);
        uVar8 = FUN_0200d0c4(uVar5 * 0x40,
                             (int)((ulonglong)(lVar7 - lVar6) >> 0x20) * 0x40 | uVar5 >> 0x1a,0x82ea
                             ,param_8);
        uVar2 = (uint)((ulonglong)uVar8 >> 0x20);
        uVar5 = (uint)uVar8;
        uVar3 = uVar2 - (4999 >= uVar5);
      } while (uVar2 != 0 || uVar2 < (4999 < uVar5));
    }
    FUN_02053ed0(*unaff_r4 + unaff_r7);
    iVar4 = *unaff_r4;
    if (*(int *)(iVar4 + 0x13f0) == 1) {
      *(undefined4 *)(iVar4 + 0x1008) = 0x4e84;
      FUN_02053e60(*unaff_r4 + 0x13d8);
      FUN_02172a60(0x14);
      return;
    }
    FUN_02053e60(iVar4 + unaff_r7);
    FUN_02052ea0(5000);
    lVar7 = FUN_02054b44();
    uVar5 = (uint)(lVar7 - lVar6);
    param_2 = (int)((ulonglong)(lVar7 - lVar6) >> 0x20) * 0x40 | uVar5 >> 0x1a;
    param_1 = uVar5 * 0x40;
  } while( true );
}

