
void FUN_02159c38(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  iVar1 = FUN_0203b404();
  uVar2 = FUN_0214d4a4(*(undefined4 *)(iVar1 + 0x88),0x820000,0x13,0x81);
  local_14 = 0x1000;
  local_10 = 0;
  FUN_0214e990(uVar2,&local_10,&local_14);
  FUN_0214e908(param_1,uVar2);
  local_20 = 0x81000;
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 100);
  (**(code **)(*piVar3 + 0x10))(piVar3,&local_20);
  (**(code **)(**(int **)(param_1 + 4) + 0xd8))(*(int **)(param_1 + 4),1);
  local_1c = 0x100000;
  local_18 = 0x180000;
  FUN_0214e990(param_1,&local_18,&local_1c);
  return;
}

