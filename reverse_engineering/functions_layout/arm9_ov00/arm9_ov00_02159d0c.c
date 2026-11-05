
void FUN_02159d0c(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 local_30;
  undefined1 auStack_2c [8];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 auStack_18 [12];
  undefined4 uStack_c;
  
  uStack_c = param_4;
  iVar1 = (**(code **)(**(int **)(param_1 + 4) + 0xac))();
  if (iVar1 == 1) {
    local_24 = 0;
    local_20 = 0x12000;
    local_1c = 0;
    FUN_02151038(auStack_18,&local_1c,&local_20,&local_24);
    iVar1 = FUN_0203b404();
    FUN_021583dc(0xb10002,0xb10000,*(undefined4 *)(iVar1 + 0x88),auStack_18,param_1,0x81);
    FUN_02158e5c(auStack_2c,0xfffffff7,0,9,0x25);
    uVar2 = FUN_02159c80(0,auStack_2c,&DAT_02093c8c);
    FUN_02020e98(param_1,uVar2);
    local_30 = 0x80000;
    FUN_0214eed0(param_1,&local_30);
  }
  *(undefined4 *)(*(int *)(param_1 + 4) + 0x98) = 0x25;
  return;
}

