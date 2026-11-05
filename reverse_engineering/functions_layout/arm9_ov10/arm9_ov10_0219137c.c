
void FUN_0219137c(undefined4 *param_1)

{
  short extraout_r1;
  undefined8 uVar1;
  longlong lVar2;
  
  FUN_02000b54(s__SDK_UBIQUITOUS_CPS__02000be0);
  uVar1 = *(undefined8 *)(param_1 + 5);
  if (param_1[6] == 0 && param_1[5] == 0) {
    uVar1 = FUN_02054b44();
  }
  DAT_021a855c = (undefined4)((ulonglong)uVar1 >> 0x20);
  DAT_021a8558 = (undefined4)uVar1;
  DAT_021a856c = 0;
  DAT_021a8568 = 0x269ec3;
  DAT_021a8564 = 0x5d588b65;
  DAT_021a8560 = 0x6c078965;
  DAT_021a84fc = (undefined *)param_1[1];
  if ((DAT_021a84fc == (undefined *)0x0) || (param_1[2] == 0)) {
    DAT_021a84fc = &DAT_02191551;
    DAT_021a8528 = &DAT_02191551;
  }
  else {
    DAT_021a8528 = (undefined *)param_1[2];
  }
  DAT_021a84f8 = *param_1;
  if (param_1[9] == 0) {
    DAT_021a84e4 = 0x5b4;
  }
  else {
    DAT_021a84e4 = (undefined2)param_1[9];
  }
  DAT_021a851c = param_1[10];
  DAT_021a850c = param_1[0xb];
  DAT_021a8500 = (undefined *)param_1[3];
  if (DAT_021a8500 == (undefined *)0x0) {
    DAT_021a8500 = &DAT_02191551;
  }
  DAT_021a8530 = (undefined1 *)param_1[4];
  if (DAT_021a8530 == (undefined1 *)0x0) {
    DAT_021a8530 = &LAB_0219154c_1;
  }
  DAT_021a8540 = param_1[7];
  DAT_021a8544 = param_1[8];
  DAT_021a8518 = 0;
  DAT_021a8510 = 0;
  lVar2 = FUN_0200d10c(0x6c078965,0x5d588b65,DAT_021a8558,DAT_021a855c);
  lVar2 = lVar2 + CONCAT44(DAT_021a856c,DAT_021a8568);
  DAT_021a8558 = (undefined4)lVar2;
  DAT_021a855c = (undefined4)((ulonglong)lVar2 >> 0x20);
  FUN_0200d10c(DAT_021a855c,0,0xf88,0);
  DAT_021a84f0 = extraout_r1 + 0x400;
  FUN_020554a8(&DAT_021a8548);
  DAT_021a84e0 = 0;
  FUN_02053528(&DAT_021a8794,0x218f4ad,0,&DAT_021a9d20,0x800,DAT_021a6e98);
  FUN_02053528(&DAT_021a86d4,0x218e919,0,&DAT_021a9520,0x800,DAT_021a6e98);
  FUN_020531dc(&DAT_021a8794);
  FUN_020531dc(&DAT_021a86d4);
  return;
}

