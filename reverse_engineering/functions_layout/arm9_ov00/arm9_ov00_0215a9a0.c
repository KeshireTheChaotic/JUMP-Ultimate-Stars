
void FUN_0215a9a0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [12];
  undefined4 uStack_c;
  
  local_24 = 0;
  local_20 = 0;
  local_1c = 0x1000;
  uStack_c = param_4;
  FUN_02151038(auStack_18,&local_1c,&local_20,&local_24);
  iVar1 = FUN_0203b404();
  FUN_021583dc(0xb10007,0xb10000,*(undefined4 *)(iVar1 + 0x88),auStack_18,param_1,0x80);
  local_28 = 0x80000;
  FUN_0214eed0(param_1,&local_28);
  return;
}

