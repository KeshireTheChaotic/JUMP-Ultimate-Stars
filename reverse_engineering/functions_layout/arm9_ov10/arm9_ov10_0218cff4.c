
void FUN_0218cff4(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined1 auStack_810 [2048];
  undefined4 local_10;
  
  local_10 = 0;
  FUN_0218d870(auStack_810,8,param_1 + 0x21);
  FUN_02001a50(*param_1,auStack_810,local_10,0,param_1 + 0x33,8);
  uVar1 = FUN_02001ed8();
  param_1[0x2c] = uVar1;
  return;
}

