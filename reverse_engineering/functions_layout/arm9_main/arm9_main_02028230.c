
void FUN_02028230(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_0201a228(0x2c);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = jus_Class_0209455c::jus_Class_0209455c(iVar1,0x80020000,param_1,0,0,1,param_4);
  }
  FUN_02028724(param_1,uVar2,param_2,1);
  *(byte *)(param_1 + 0x28) = *(byte *)(param_1 + 0x28) | 2;
  FUN_02027edc(param_1);
  return;
}

