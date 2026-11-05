
int FUN_021502e8(undefined4 param_1,undefined4 param_2,undefined4 param_3,code *param_4,
                undefined4 param_5,uint param_6)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  
  if ((0 < DAT_0216d188) && (DAT_0216d188 < 6)) {
    return -10;
  }
  DAT_0216d188 = 7;
  DAT_0216d15c = param_5;
  DAT_0216afd4 = param_6;
  DAT_0216afdc = param_2;
  DAT_0216d154 = param_4;
  DAT_0216d1cc = param_3;
  iVar2 = FUN_02153598(param_2);
  DAT_0216d1c4 = 1;
  if (iVar2 < 0) {
    DAT_0216d1c8 = iVar2;
    return iVar2;
  }
  DAT_0216d180 = (*DAT_0216d154)(DAT_0216afd4);
  if (DAT_0216d180 == 0) {
    DAT_0216d1c8 = 0xffffffff;
    return -1;
  }
  iVar2 = FUN_02052db0();
  if (iVar2 != 1) {
    DAT_0216d1c8 = 0xfffffff7;
    return -9;
  }
  iVar3 = 7;
  FUN_02053528(&DAT_0216d288,0x215205d,0,DAT_0216d180 + (DAT_0216afd4 & 0xfffffff8),DAT_0216afd4,
               param_1);
  DAT_0216d188 = 1;
  iVar2 = FUN_021504d4();
  DAT_0216afd8 = iVar2 + 60000;
  DAT_0216d160 = 0;
  puVar1 = &DAT_0216d348;
  do {
    puVar4 = puVar1;
    *puVar4 = 0;
    puVar4[1] = 0;
    puVar4[2] = 0;
    puVar4[3] = 0;
    puVar4[4] = 0;
    puVar4[5] = 0;
    puVar4[6] = 0;
    puVar4[7] = 0;
    iVar3 = iVar3 + -1;
    puVar1 = puVar4 + 8;
  } while (iVar3 != 0);
  puVar4[8] = 0;
  puVar4[9] = 0;
  FUN_021501bc();
  FUN_020531dc(&DAT_0216d288);
  DAT_0216d1b4 = 1;
  return 1;
}

