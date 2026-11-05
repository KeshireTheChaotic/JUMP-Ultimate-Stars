
void FUN_021599c4(undefined4 param_1)

{
  int iVar1;
  undefined4 local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [12];
  
  local_24 = 0;
  local_20 = 0x8000;
  local_1c = 0x46000;
  FUN_02151038(auStack_18,&local_1c,&local_20,&local_24);
  iVar1 = FUN_0203b404();
  FUN_021583dc(0xb10006,0xb10000,*(undefined4 *)(iVar1 + 0x88),auStack_18,param_1,0x82);
  local_28 = 0x82000;
  FUN_0214eed0(param_1,&local_28);
  return;
}

