
void FUN_021516f0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  
  FUN_0206dcdc(0);
  func_0x021bac28(param_1,param_2,0,0,0,0,0,0);
  func_0x021bad88(param_1,1);
  FUN_021517c4(0x14);
  iVar1 = Record::RecordSave();
  FUN_021517c4(10);
  func_0x021bace0(param_1);
  while (iVar2 = func_0x021bad2c(param_1), iVar2 == 0) {
    (*DAT_020a0e18)();
  }
  if (iVar1 == 0) {
    func_0x021bac28(param_1,0x11,0,0,0,0,0,0);
    FUN_021517c4(0x14);
    FUN_0206dd40();
  }
  FUN_0206dcdc(1);
  return;
}

