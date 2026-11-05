
void FUN_021551d0(int param_1,int *param_2,int param_3,int param_4,int param_5,int param_6,
                 int param_7,int param_8)

{
  undefined4 uVar1;
  int extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 extraout_r1_02;
  int iVar2;
  bool bVar3;
  int local_2c;
  int local_28;
  int local_24 [4];
  
  param_7 = param_7 + -1;
  if (param_7 < 0) {
    param_7 = 0;
  }
  if (param_8 < 0) {
    param_8 = 0;
  }
  if ((int)(&DAT_02171f04)[param_7] < param_8) {
    param_8 = (&DAT_02171f04)[param_7];
  }
  if ((short)param_8 != *(short *)(param_1 + 0xb2 + param_4 * 2)) {
    *(short *)(param_1 + 0xb2 + param_4 * 2) = (short)param_8;
    FUN_0200d12c(param_8,10);
    local_24[0] = extraout_r1;
    uVar1 = FUN_0200d12c(param_8,10);
    FUN_0200d12c(uVar1,10);
    local_24[1] = extraout_r1_00;
    uVar1 = FUN_0200d12c(uVar1,10);
    FUN_0200d12c(uVar1,10);
    local_24[2] = extraout_r1_01;
    uVar1 = FUN_0200d12c(uVar1,10);
    FUN_0200d12c(uVar1,10);
    local_24[3] = extraout_r1_02;
    bVar3 = param_3 != 0x5f002c;
    if (bVar3) {
      iVar2 = 0xe;
    }
    else {
      iVar2 = 6;
    }
    for (; -1 < param_7; param_7 = param_7 + -1) {
      if (param_7 == 0 || (bVar3 || local_24[param_7] != 0)) {
        bVar3 = true;
        FUN_02023894(*(undefined4 *)(*param_2 + 4),param_3 + local_24[param_7],0);
        local_28 = param_5 << 0xc;
        local_2c = param_6 << 0xc;
        FUN_021519d0(*param_2,&local_28,&local_2c);
        (**(code **)(**(int **)(*param_2 + 4) + 0xd8))(*(int **)(*param_2 + 4),1);
        FUN_02028330(*(undefined4 *)(*param_2 + 4));
      }
      else {
        (**(code **)(**(int **)(*param_2 + 4) + 0xd8))(*(int **)(*param_2 + 4),0);
        FUN_020282f4(*(undefined4 *)(*param_2 + 4));
      }
      param_5 = param_5 + iVar2;
      param_2 = param_2 + 1;
    }
  }
  return;
}

