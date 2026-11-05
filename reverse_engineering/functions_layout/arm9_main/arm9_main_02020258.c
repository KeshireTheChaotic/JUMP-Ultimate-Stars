
uint FUN_02020258(int *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  ushort *puVar1;
  undefined4 *puVar2;
  int iVar3;
  short *psVar4;
  short *psVar5;
  short *psVar6;
  uint uVar7;
  undefined4 uStack_18;
  
  psVar4 = (short *)param_1[0x12];
  if (psVar4 == (short *)0x0) {
    return 0;
  }
  uStack_18 = param_4;
  puVar2 = (undefined4 *)(**(code **)(*param_1 + 0xa0))();
  uStack_18 = *puVar2;
  while (iVar3 = FUN_02016314(&uStack_18,*psVar4), iVar3 != 0) {
    psVar4 = psVar4 + -2;
  }
  while (iVar3 = FUN_02016328(psVar4[2],&uStack_18), iVar3 != 0) {
    psVar4 = psVar4 + 2;
  }
  if (param_1[0xe] <= param_1[0xf]) {
    if (param_1[0xf] <= param_1[0xe]) {
      iVar3 = FUN_02020244(*psVar4,param_1 + 0xe);
      if (iVar3 == 0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (uint)(ushort)psVar4[(ushort)psVar4[1]];
      }
      return uVar7;
    }
    psVar6 = psVar4;
    while (iVar3 = FUN_02020230(psVar6[2],param_1 + 0xf), iVar3 != 0) {
      psVar6 = psVar6 + 2;
    }
    uVar7 = 0;
    while ((psVar4 < psVar6 || (iVar3 = FUN_02020244(*psVar6,param_1 + 0xe), iVar3 != 0))) {
      puVar1 = (ushort *)(psVar6 + (ushort)psVar6[1]);
      psVar6 = psVar6 + -2;
      uVar7 = uVar7 + *puVar1;
    }
    return uVar7;
  }
  psVar6 = psVar4;
  while( true ) {
    iVar3 = 0;
    if (*psVar6 != 0) {
      iVar3 = param_1[0xf];
    }
    if ((*psVar6 == 0 || iVar3 == 0) || (iVar3 = FUN_0202021c(psVar6[-2],param_1 + 0xf), iVar3 == 0)
       ) break;
    psVar6 = psVar6 + -2;
  }
  uVar7 = 0;
  while (psVar5 = psVar6, psVar5 <= psVar4) {
    iVar3 = FUN_0202021c(*psVar5,param_1 + 0xf);
    psVar6 = psVar5 + 2;
    if (iVar3 != 0) {
      uVar7 = uVar7 + (ushort)psVar5[(ushort)psVar5[1]];
      psVar6 = psVar5 + 2;
    }
  }
  iVar3 = FUN_02016328(*psVar5,param_1 + 0xe);
  if (iVar3 != 0) {
    uVar7 = uVar7 + (ushort)psVar5[(ushort)psVar5[1]];
  }
  return uVar7;
}

