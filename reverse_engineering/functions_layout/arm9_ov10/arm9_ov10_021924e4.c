
void FUN_021924e4(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  
  iVar1 = FUN_02191978(0x219240d,param_1,1);
  *(undefined4 *)(iVar1 + 0x10) = param_2;
  *(undefined4 *)(iVar1 + 0x14) = param_3;
  *(undefined4 *)(iVar1 + 0x18) = param_4;
  *(undefined4 *)(iVar1 + 0x1c) = param_5;
  FUN_021918a0(param_1);
  return;
}

