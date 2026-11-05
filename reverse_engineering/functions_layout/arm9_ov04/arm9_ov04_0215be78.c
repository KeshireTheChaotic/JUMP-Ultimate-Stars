
void FUN_0215be78(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  int *piVar3;
  undefined4 local_10;
  undefined4 uStack_c;
  
  uStack_c = param_4;
  iVar1 = FUN_0203b3f4();
  uVar2 = FUN_0214e9f0(*(undefined4 *)(iVar1 + 0x88),0x820000,0xd,0x7f);
  FUN_0214e478(param_1,uVar2);
  local_10 = 0x7f000;
  piVar3 = *(int **)(*(int *)(param_1 + 4) + 100);
  (**(code **)(*piVar3 + 0x10))(piVar3,&local_10);
  return;
}

