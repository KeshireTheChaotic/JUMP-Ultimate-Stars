
void FUN_0214cd20(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined2 local_84;
  undefined2 local_82;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_7a;
  undefined2 local_78;
  byte local_76;
  undefined1 local_75;
  undefined1 auStack_74 [20];
  undefined1 uStack_60;
  byte local_5f;
  undefined1 auStack_5c [20];
  ushort local_48;
  undefined4 uStack_10;
  
  uStack_10 = param_4;
  FUN_0205542c(&uStack_60);
  local_76 = local_76 & 0xf0 | local_5f & 0xf;
  local_75 = (undefined1)local_48;
  FUN_02051890(auStack_5c,auStack_74,(uint)local_48 << 1);
  local_76 = local_76 & 0xf;
  FUN_0200f69c(&local_84,0xe);
  DAT_0216ace8 = local_84;
  DAT_0216acea = local_82;
  DAT_0216acec = local_80;
  DAT_0216acee = local_7e;
  DAT_0216acf0 = local_7c;
  DAT_0216acf2 = local_7a;
  DAT_0216acf4 = local_78;
  DAT_0216ace0 = FUN_0201a418(DAT_020a0dd8,0,0xb100);
  iVar1 = func_0x021c0264(DAT_0216ace0,&local_76,param_1,param_2,2);
  if (iVar1 != 0) {
    FUN_02055684();
  }
  func_0x021c01a8(0x100,3);
  func_0x021beb40(&LAB_0214d228);
  DAT_0216ace8 = 1;
  return;
}

