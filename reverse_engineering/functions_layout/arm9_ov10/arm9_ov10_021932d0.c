
undefined4 FUN_021932d0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_70 [60];
  undefined4 local_34;
  int local_30;
  undefined4 local_28;
  int local_24;
  
  if (param_1 == 0) {
    return 0;
  }
  iVar1 = (**(code **)(DAT_021a9d20 + 0x18))(0xfd0);
  if (iVar1 == 0) {
    return 0;
  }
  FUN_020517fc(auStack_70,0,100);
  local_34 = 0xb68;
  local_24 = iVar1 + 0xb68;
  local_28 = 0x466;
  local_30 = iVar1;
  FUN_0218f40c(auStack_70);
  uVar2 = FUN_0218df48(param_1);
  FUN_0218f3fc();
  (**(code **)(DAT_021a9d20 + 0x1c))(iVar1);
  return uVar2;
}

