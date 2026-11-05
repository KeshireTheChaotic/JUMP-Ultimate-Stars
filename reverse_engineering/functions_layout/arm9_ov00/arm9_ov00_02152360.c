
void FUN_02152360(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  
  FUN_020428dc(DAT_020a0f64,&LAB_02152868,param_1,param_4,param_4);
  if ((*(byte *)(param_1 + 0x39) & 4) != 0) {
    FUN_02152980(param_1);
  }
  iVar3 = param_1[0x2b];
  if ((iVar3 != 0) && (iVar1 = FUN_0201a9ec(iVar3), iVar1 == 0)) {
    FUN_0201a958(iVar3,1);
  }
  uVar2 = FUN_020733a8();
  FUN_020567e8(1,uVar2,0);
  if (param_1[0x27] != 0) {
    FUN_02152b90();
  }
  if (param_1[0x28] != 0) {
    FUN_02152b90();
  }
  if ((param_1[6] & 0x10) != 0) {
    FUN_020644ec(param_1 + 3);
  }
  if ((param_1[0x18] & 0x10) != 0) {
    FUN_020644ec(param_1 + 0x15);
  }
  FUN_0205455c(0,param_1[1]);
  iVar3 = param_1[2];
  if (iVar3 != 0) {
    iVar1 = FUN_0201a9ec(iVar3);
    if (iVar1 == 0) {
      FUN_0201a958(iVar3,1);
    }
    param_1[2] = 0;
  }
  FUN_0204329c();
  FUN_020651b0();
  FUN_02065150();
  FUN_02065490(0xb);
  MIi_CpuClearFast(0,0x6800000,0xa4000);
  FUN_02065110();
  FUN_02065978(1);
  FUN_02065660(10);
  (**(code **)(*(int *)*param_1 + 8))();
  FUN_0201b244(param_1);
  return;
}

