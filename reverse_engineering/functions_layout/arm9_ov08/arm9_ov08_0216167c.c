
void FUN_0216167c(int param_1,undefined1 param_2,undefined4 param_3,int param_4,int param_5)

{
  undefined4 uVar1;
  
  DAT_0216e7e8 = (undefined4 *)FUN_02166b8c(0x20,4);
  *(char *)((int)DAT_0216e7e8 + 0x1b) = (char)param_1;
  *(undefined1 *)((int)DAT_0216e7e8 + 0x19) = param_2;
  *(char *)((int)DAT_0216e7e8 + 0x1a) = (char)param_5;
  FUN_021668a0(param_3,param_4,DAT_0216e7e8 + 4);
  uVar1 = FUN_02165fc4(0,(&DAT_0216ad30)[param_1],1);
  *DAT_0216e7e8 = uVar1;
  FUN_02165bc4(*DAT_0216e7e8,0xffffffff,param_3,param_4 + param_5);
  FUN_02165b80(*DAT_0216e7e8,0xffffffff,1);
  uVar1 = FUN_02167814(0,0x216150d,0,0x80);
  DAT_0216e7e8[3] = uVar1;
  return;
}

